#include <AccelStepper.h>

//AccelStepper Xaxis(1, 2, 5); // pin 3 = step, pin 5 = direction
//AccelStepper Yaxis(1, 3, 6); // pin 4 = step, pin 6 = direction

AccelStepper Xaxis(1, 4, 6); // pin 3 = step, pin 5 = direction
AccelStepper Yaxis(1, 3, 5); // pin 4 = step, pin 6 = direction
AccelStepper Zaxis(1, 8, 7); // pin 8 = step, pin 7 = direction
// Starting speeds and acceleration for drivers
int acceleration = 20000;
int m_speed = 20000;

int s_speed = 5000;
// Starting and ending position of driver
int end_x = 4315;
int end_y = 1250;
int end_y2 = 850;
int end_y3 = 950;
int end_z = 1510;
int start_x = 0;
int start_y = 0;
int start_z = 0;
int l_tips = 0;
int p_res = 2875;
int p_res2 = 3975;
// Distance between each wells and number of them
int well_distance = 197;
int tip_distance = 197;
int well_number = 12;
int well_384_x = 98;
int well_384_z = 100;
// Pipette Control
const int power = 13;
const int volUp = 10;
const int volDown = 11;
const int menu = 12;
const int dispense = 9;
const int dispDelay = 5000;
double volume = 100.0;
double cur_volume = 50.0;
const double input = 50.0;

//Variables
int total_z = 0;
int total_x = 0;
int total_y = 0;
double current = 50.0;
double end_vol = 100.0;

//Homing Pins
int h_y = 15;
int h_x = 16;
int h_z = 17;

int state = HIGH;
int reading;
int previous = LOW;

long time = 0;
long debounce = 200;

// Stimulate button pressing
void button_press(const int button)
{
  digitalWrite(button, HIGH);
  delay(100);
  digitalWrite(button, LOW);
  delay(100);
}
// Stimulate button holding for time amount 
void button_hold(const int button, int time)
{
  digitalWrite(button, HIGH);
  delay(time);
  digitalWrite(button, LOW);
  delay(500);
}
// Set a destination for the driver and then moves to it
void go(AccelStepper stepper, int destination, int start) 
{
  stepper.moveTo(start + destination);
  while(stepper.currentPosition() != (start + destination))
  {
    stepper.run();
  }
}
// Runs two motors at once
void double_go(AccelStepper stepper1, int destination1,  int start1, AccelStepper stepper2, int destination2, int start2) 
{
  stepper1.moveTo(start1 + destination1);
  stepper2.moveTo(start2 + destination2);
  while((stepper1.currentPosition() != (start1 + destination1)) || (stepper2.currentPosition() != (start2 + destination2)))
  {
    stepper1.run();
    stepper2.run();
  }
}
// Moves all instruments into place
void homining()
{
  while (digitalRead(h_y))
  {
    Yaxis.moveTo(start_y - 4);
    Yaxis.run();
    start_y = Yaxis.currentPosition();
  }
  while (digitalRead(h_x)||digitalRead(h_z))
  {
    if (digitalRead(h_x))
    {
    Xaxis.moveTo(start_x + 10);
    Xaxis.run();
    start_x = Xaxis.currentPosition();
    }
    if (digitalRead(h_z))
    {
      Zaxis.moveTo(start_z + 4);
      Zaxis.run();
      start_z = Zaxis.currentPosition();
    }
  }
  double_go(Xaxis, -end_x, start_x,Zaxis, -end_z, start_z);
  go(Yaxis, 7*250 - 1600, start_y);
  start_y = Yaxis.currentPosition();
  start_z = Zaxis.currentPosition();
  start_x = Xaxis.currentPosition();
}

void setup() 
{
  Xaxis.setMaxSpeed(m_speed);
  Xaxis.setAcceleration(acceleration);
  Xaxis.setSpeed(s_speed);
  Yaxis.setMaxSpeed(m_speed);
  Yaxis.setAcceleration(acceleration);
  Yaxis.setSpeed(s_speed);
  Zaxis.setMaxSpeed(m_speed);
  Zaxis.setAcceleration(acceleration);
  Zaxis.setSpeed(s_speed);
  start_x = Xaxis.currentPosition();
  start_y = Yaxis.currentPosition();
  start_z = Zaxis.currentPosition();
  Serial.begin(9600);
  pinMode(power, OUTPUT);
  pinMode(volUp, OUTPUT);
  pinMode(volDown, OUTPUT);
  pinMode(menu, OUTPUT);
  pinMode(dispense, OUTPUT);
  pinMode(h_y, INPUT);
  pinMode(h_x, INPUT);
  digitalWrite(power, HIGH);
  digitalWrite(power, LOW);
  button_press(power);
  button_press(dispense);
  homining();
  e_plate();
}
//Keeps track of volume change
double volume_change(double start_volume, double volume_add)
{
  start_volume = start_volume + volume_add;
  if (start_volume < 5.0)
  {
    start_volume = 95.0 + start_volume;
  }
  return start_volume;
}
// Dispenses the fluid and aspirate in the reservoir
void p_dispense()
{
  go(Yaxis, end_y, start_y);
  button_press(dispense);
  delay(1500);
  go(Yaxis, -end_y, start_y);
}
void p_dispense3()
{
  go(Yaxis, end_y3, start_y);
  button_press(dispense);
  delay(1500);
  go(Yaxis, -end_y3, start_y);
}

// Dispenses the fluid into the wells
void p_dispense2()
{
  go(Yaxis, end_y2, start_y);
  button_press(dispense);
  delay(1500);
  go(Yaxis, -end_y2, start_y);
}
// Fill plate with constant volume
void fill_constant(int n_wells, int distance)
{
  int total = 0;
  go(Xaxis, distance - total, start_x);
  p_dispense();
  go(Xaxis, -distance + total, start_x);
  p_dispense2();
  for(int i = 1; i < n_wells; i++)
  {
    go(Xaxis, distance - total, start_x);
    p_dispense();
    total += well_distance;
    go(Xaxis, -distance + total, start_x);
    p_dispense2();
  }
  go(Xaxis, -total, start_x);
}

// Volume Change function
double change_volume(double start_volume, double new_volume)
{
  double volume_diff = start_volume - new_volume;
  int n_volume = 0;
  if (volume_diff < 0)
  {
    n_volume = -int(volume_diff*10);
    button_press(volDown);
    while(n_volume/641)
    {
      button_hold(volUp, 8997);
      n_volume = n_volume - 641;
    }
    while(n_volume/541)
    {
      button_hold(volUp, 8000);
      n_volume = n_volume - 541;
    }
    while(n_volume/441)
    {
      button_hold(volUp, 7000);
      n_volume = n_volume - 441;
    }
    while(n_volume/340)
    {
      button_hold(volUp, 6000);
      n_volume = n_volume - 340;
    }
    while(n_volume/240)
    {
      button_hold(volUp, 5000);
      n_volume = n_volume - 240;
    }
    while(n_volume/139)
    {
      button_hold(volUp, 4000);
      n_volume = n_volume - 139;
    }
    while(n_volume/39)
    {
      button_hold(volUp, 3000);
      n_volume = n_volume - 39;
    }
    while(n_volume/11)
    {
      button_hold(volUp, 2000);
      n_volume = n_volume - 11;
    }
    while(n_volume > 0)
    {
      button_press(volUp);
      n_volume = n_volume - 1;
    }
    delay(4000);
    button_press(power);
    return new_volume;
  }
  n_volume = int(volume_diff*10);
  button_press(volDown);
  while(n_volume/641)
    {
      button_hold(volDown, 8997);
      n_volume = n_volume - 641;
    }
    while(n_volume/541)
    {
      button_hold(volDown, 8000);
      n_volume = n_volume - 541;
    }
    while(n_volume/441)
    {
      button_hold(volDown, 7000);
      n_volume = n_volume - 441;
    }
  while(n_volume/340)
    {
      button_hold(volDown, 6000);
      n_volume = n_volume - 340;
    }
    while(n_volume/240)
    {
      button_hold(volDown, 5000);
      n_volume = n_volume - 240;
    }
    while(n_volume/139)
    {
      button_hold(volDown, 4000);
      n_volume = n_volume - 139;
    }
    while(n_volume/39)
    {
      button_hold(volDown, 3000);
      n_volume = n_volume - 39;
    }
    while(n_volume/11)
    {
      button_hold(volDown, 2000);
      n_volume = n_volume - 11;
    }
  while(n_volume > 0)
    {
      button_press(volDown);
      n_volume = n_volume - 1;
    }
  delay(4000);
  button_press(power);
  return new_volume;
}
// Volume Change function
double change_volume2(double start_volume, double new_volume)
{
  double volume_diff = start_volume - new_volume;
  int n_volume = 0;
  if (volume_diff < 0)
  {
    n_volume = -int(volume_diff*10);
    button_press(volDown);
    while(n_volume/340)
    {
      button_hold(volUp, 6000);
      n_volume = n_volume - 340;
    }
    while(n_volume/240)
    {
      button_hold(volUp, 5000);
      n_volume = n_volume - 240;
    }
    while(n_volume/139)
    {
      button_hold(volUp, 4000);
      n_volume = n_volume - 139;
    }
    while(n_volume/39)
    {
      button_hold(volUp, 3000);
      n_volume = n_volume - 39;
    }
    while(n_volume/11)
    {
      button_hold(volUp, 2000);
      n_volume = n_volume - 11;
    }
    while(n_volume > 0)
    {
      button_press(volUp);
      n_volume = n_volume - 1;
    }
    delay(4000);
    button_press(power);
    return new_volume;
  }
  n_volume = int(volume_diff*10);
  button_press(volDown);
  while(n_volume/340)
    {
      button_hold(volDown, 6000);
      n_volume = n_volume - 340;
    }
    while(n_volume/240)
    {
      button_hold(volDown, 5000);
      n_volume = n_volume - 240;
    }
    while(n_volume/139)
    {
      button_hold(volDown, 4000);
      n_volume = n_volume - 139;
    }
    while(n_volume/39)
    {
      button_hold(volDown, 3000);
      n_volume = n_volume - 39;
    }
    while(n_volume/11)
    {
      button_hold(volDown, 2000);
      n_volume = n_volume - 11;
    }
  while(n_volume > 0)
    {
      button_press(volDown);
      n_volume = n_volume - 1;
    }
  delay(4000);
  button_press(power);
  return new_volume;
}
// Fill plate with constant volume
void fill_serial(int n_wells, int distance)
{
  int total = 0;
  go(Xaxis, distance - total, start_x);
  p_dispense();
  go(Xaxis, -distance + total, start_x);
  p_dispense2();
  for(int i = 1; i < n_wells; i++)
  {
    cur_volume = change_volume(cur_volume, cur_volume - 1.1);
    go(Xaxis, distance - total, start_x);
    p_dispense();
    total += well_distance;
    go(Xaxis, -distance + total, start_x);
    p_dispense2();
  }
  go(Xaxis, -total, start_x);
}
// Keeps track of the current number of tips left in box
void tip_count()
{
  if(l_tips > 8)
      l_tips = 0;
  else
      l_tips = l_tips + 1;
}
// Puts on tips on the pipette function
void tips(int tips)
{
  go(Xaxis, -1000 -tips*tip_distance, start_x);
  go(Yaxis, 2160, start_y);
  go(Yaxis, -460, start_y);
  go(Yaxis, 480, start_y);
  go(Yaxis, -480, start_y);
  while (digitalRead(h_y))
  {
    Yaxis.moveTo(start_y - 4);
    Yaxis.run();
    start_y = Yaxis.currentPosition();
  }
  go(Yaxis, 7*250 - 1500, start_y);
  start_y = Yaxis.currentPosition();
  go(Xaxis, 1000 +tips*tip_distance, start_x);
}
// Removes the tips from the pipette function
void tips_remove()
{
  go(Yaxis, 700, start_y);
  go(Xaxis, -4425, start_x);
  go(Xaxis, 750, start_x);
  go(Xaxis, -750, start_x);
  go(Xaxis, 4425, start_x);
  go(Yaxis, -700, start_y);
  go(Xaxis, 3000, start_x);
  while (digitalRead(h_x))
  {
    Xaxis.moveTo(start_x + 10);
    Xaxis.run();
    start_x = Xaxis.currentPosition();
   }
   go(Xaxis, -end_x, start_x);
   start_x = Xaxis.currentPosition();
}
// Removes and put new plate on carriage function
void e_plate()
{
  go(Zaxis, -3200, start_z);
  delay(4000);
  go(Zaxis, 200, start_z);
  go(Zaxis, -200, start_z);
  delay(500);
  go(Zaxis, 3200, start_z);
}
// Automated plate filling with one solution at one volume function
void all(int num_tips)
{
  tips(num_tips);
  tip_count();
  fill_constant(12,p_res);
  tips_remove();
  e_plate();
}
// Automated plate filling with two solution at two volume function
void all2()
{
  cur_volume = change_volume(cur_volume, 98.0);
  tips(l_tips);
  tip_count();
  fill_constant(12,p_res);
  tips_remove();
  cur_volume = change_volume(cur_volume, 10.0);
  tips(l_tips);
  tip_count();
  fill_constant(12,p_res2);
  tips_remove();
  cur_volume = change_volume(cur_volume, 50.0);
  e_plate();
}
void all3()
{
  tips(l_tips);
  tip_count();
  fill_constant(12,p_res);
  tips_remove();
  cur_volume = change_volume(cur_volume, 20.0);
  tips(l_tips);
  tip_count();
  fill_serial(12,p_res2);
  tips_remove();
  cur_volume = change_volume(cur_volume, 50.0);
  e_plate();
}
// Runs the filling of a plate constantly
void continous(int n_wells)
{
  while(true)
  {
  int total = 0;
  go(Xaxis, p_res - total, start_x);
  go(Xaxis, -p_res + total, start_x);
  for(int i = 1; i < n_wells; i++)
  {
    go(Xaxis, p_res - total, start_x);
    total += well_distance;
    go(Xaxis, -p_res + total, start_x);
  }
  go(Xaxis, -total, start_x);
  delay(20000);
  }
}
void continous2()
{
  while(true)
  {
    for(int i = 0; i < 20; i++)
    {
    go(Yaxis, 700, start_y);
    go(Yaxis, -700, start_y);
    }
    delay(20000);
  }
}
void motion()
{
  go(Xaxis, -3400, start_x);
  go(Yaxis, 630, start_y);
  delay(600000);
  go(Xaxis, -800, start_x);
  go(Xaxis, 800, start_x);
  go(Xaxis, -920, start_x);
  go(Xaxis, 920, start_x);
  go(Yaxis, -630, start_y);
  go(Xaxis, 3400, start_x);
}
void well_384(int well_total, int distance)
{
  go(Zaxis,65,start_z);
  go(Xaxis,-90,start_x);
  int i = 1;
  while (i < well_total)
  {
    go(Xaxis,distance - (i-1)*well_384_x,start_x);
    p_dispense();
    go(Xaxis,-distance + i*well_384_x,start_x);
    p_dispense3();
    go(Zaxis,100,start_z);
    go(Xaxis,distance - i*well_384_x,start_x);
    p_dispense();
    go(Xaxis,-distance + i*well_384_x,start_x);
    p_dispense3();
    go(Zaxis,-100,start_z);
    i++;
  }
}
void loop() 
{  
  char ser_byte;
  ser_byte = Serial.read();
  switch(ser_byte)
  {
    // Dispensing in Reservior
    case 'w':
      p_dispense();
      break;
    // Dispensing in Wells
    case 'W':
      p_dispense2();
      break;
    // Go to the left
    case 'x':
      go(Xaxis, -100, start_x);
      total_x = total_x - 100;
      break;
    // Go to the right
    case 'X':
      go(Xaxis, 100, start_x);
      total_x = total_x + 100;
      break;
    // Go forward
    case 'Z':
      go(Zaxis, 100, start_z);
      total_z = total_z + 100;
      break;
    // Go back
    case 'z':
      go(Zaxis, -100, start_z);
      total_z = total_z - 100;
      break;
    //Go down
    case 'Y':
      go(Yaxis, 100, start_y);
      total_y = total_y + 100;
      break;
    //Go up
    case 'y':
      go(Yaxis, -100, start_y);
      total_y = total_y - 100;
      break;
    //Increase Speed
    case 'S':
      m_speed += 1000;
      Xaxis.setMaxSpeed(m_speed);
      Yaxis.setMaxSpeed(m_speed);
      Zaxis.setMaxSpeed(m_speed);
      Serial.print("New speed: ");
      Serial.print(m_speed);
      Serial.print("\n");
      break;
    //Decrease Speed
    case 's':
      m_speed -= 1000;
      Xaxis.setMaxSpeed(m_speed);
      Yaxis.setMaxSpeed(m_speed);
      Zaxis.setMaxSpeed(m_speed);
      Serial.print("New speed: ");
      Serial.print(m_speed);
      Serial.print("\n");
      break;
    //Increase Acceleration
    case 'A':
      acceleration += 1000;
      Xaxis.setAcceleration(acceleration);
      Yaxis.setAcceleration(acceleration);
      Zaxis.setAcceleration(acceleration);
      Serial.print("New accel: ");
      Serial.print(acceleration);
      Serial.print("\n");
      break;
    // Decrease Acceleration
    case 'a':
      acceleration -= 1000;
      Xaxis.setAcceleration(acceleration);
      Yaxis.setAcceleration(acceleration);
      Zaxis.setAcceleration(acceleration);
      Serial.print("New accel: ");
      Serial.print(acceleration);
      Serial.print("\n");
      break;
    // Press menu button
    case 'M':
      button_press(menu);
      break;
    // Press up button
    case 'V':
      button_press(volUp);
      break;
    // Press down button
    case 'v':
      button_press(volDown);
      break;
    // Press power button
    case 'P':
      button_press(power);
      break;
    // Hold down down button for 4 seconds
    case 'H':
      button_hold(volDown, 5000);
      break;
    case 'h':
      button_hold(volUp, 5000);
      break;
    //Changes volume to target volume
    case 'T':
      cur_volume = change_volume(cur_volume, end_vol);
      Serial.print("New volume: ");
      Serial.print(current);
      Serial.print("\n");
      break;
    //Changes volume to 50.0
    case 'R':
      cur_volume = change_volume(cur_volume, 50.0);
      Serial.print("New volume: ");
      Serial.print(current);
      Serial.print("\n");
      break;
    //Increase target volume by 10
    case '*':
      end_vol = end_vol + 10.0;
      if (end_vol > 100.0)
      {
        double n_change = end_vol - 100.0;
        end_vol = 5.0 + n_change;
      }
      Serial.print("Target volume: ");
      Serial.print(end_vol);
      Serial.print("\n");
      break;
      //Increase target volume by 1
    case '+':
      end_vol = end_vol + 1.0;
      if (end_vol > 100.0)
      {
        double n_change = end_vol - 100.0;
        end_vol = 5.0 + n_change;
      }
      Serial.print("Target volume: ");
      Serial.print(end_vol);
      Serial.print("\n");
      break;
    //Decrease target volume by 10
    case '/':
      end_vol = end_vol - 10.0;
      if (end_vol < 5.0)
      {
        double n_change = 5.0 - end_vol;
        end_vol = 100.0 - n_change;
      }
      Serial.print("Target volume: ");
      Serial.print(end_vol);
      Serial.print("\n");
      break;
    //Decrease target volume by 1
    case '-':
      end_vol = end_vol - 1.0;
      if (end_vol > 100.0)
      {
        double n_change = end_vol - 100.0;
        end_vol = 5.0 + n_change;
      }
      Serial.print("Target volume: ");
      Serial.print(end_vol);
      Serial.print("\n");
      break;
    case 'B':
      homining();
      break;
    //Put on tips
    case 'Q':
      tips(l_tips);
      tip_count();
      break;
    //Fill plate with constant volume
    case 'G':
      fill_constant(12, p_res);
      break;
    //Remove tips
    case 'O':
      tips_remove();
      break;
    case '9':
      e_plate();
      break;
    case '1':
      all(l_tips);
      break;
    case '5':
      all2();
      delay(500);
      break;
    case '6':
      all3();
      break;
    case '8':
      cur_volume = change_volume(cur_volume, volume);
      cur_volume = change_volume(cur_volume, 50.0);
    break;
    case '2':
      cur_volume = change_volume(cur_volume, 75.0);
      cur_volume = change_volume(cur_volume, 80.0);
      cur_volume = change_volume(cur_volume, 30.0);
      cur_volume = change_volume(cur_volume, 45.0);
      cur_volume = change_volume(cur_volume, 50.0);
      break;
    case '3':
      motion();
      break;
    case '4':
      continous2();
      break;
    case '7':
      cur_volume = change_volume(cur_volume, 98.0);
      cur_volume = change_volume(cur_volume, 10.0);
      cur_volume = change_volume(cur_volume, 50.0);
      break;
    case 'n':
    go(Xaxis, -975, start_x);
    go(Yaxis, 1960, start_y);
    go(Zaxis, -3200, start_z);
    break;
    case 'l':
    go(Xaxis, -5, start_x);
    break;
    case 'L':
    go(Xaxis, 5, start_x);
    break;
    case 'J':
    go(Zaxis, 5, start_z);
    break;
    case 'j':
    go(Zaxis, -5, start_z);
    break;
    case 't':
    well_384(23, p_res);
    break;
    default:
    break;
  }
 }

