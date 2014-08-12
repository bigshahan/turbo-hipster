---
layout: project
title: Instructions
project: pipettebot
---

Instructions
==========

<h4> Sections </h4>

<div class="col-sm-4">
    <ul class="nav nav-pills nav-stacked">
        {% sidebar "content1", "Lasercut and 3D printed parts" %}

        {% sidebar "content2", "Motion Components" %}

        {% sidebar "content3", "Frame" %}
		
		{% sidebar "content4", "Sensors" %}
		
		{% sidebar "content5", "Electronics" %}
		
		{% sidebar "content6", "Hacking Electronic Pipette" %}
		
		{% sidebar "content7", "Electronic Pipette Mount" %}
		
		{% sidebar "content8", "Well Plate Replacement" %}
		
		{% sidebar "content9", "Pipette Tip Removal" %}
		
		{% sidebar "content10", "Code Guide" %}
		
		{% sidebar "content11", "Final Assembly" %}
		
		{% sidebar "content12", "Calibration" %}
    </ul>
	
	<h4> Tools </h4>
	<ul> 
	<li> Hand tools</li>
	<li> Laser Cutter</li>
	<li> 3D Printer</li>
	<li> Soldering Tools</li>
	</ul>
	
</div>




<div id="content1" class="sidebar-content col-sm-8">	
	<h3> Lasercut and 3D printed parts </h3>

	<div class="container-fluid well">
		<div class="col-sm-12">
			<h4>Step 1: Lasercut components: Overview</h4>
			<p>
				<li>Unless otherwise noted, all of these pieces are to be cut from 1/4" acrylic</li>
				<li>The lasercutting section will be organized according to major components, similar to the way the instructions are sectioned </li>
				<li>PDF files and Solidworks drawings of the 2D pattern to cut are provided</li>
				<li>You can either laser cut all the components at once, or do them right before working on that particular assembly</li>
				<li>Any thin, flat pieces of scrap acrylic are useful for use as buttressing to provide additional structural support</li>
			</p>
			
			<p class="alert alert-danger">Always take precautions when working with lasers!</p>
			<p class="alert alert-danger">Lasercutters can be a fire hazard: do not leave unattended! </p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutMotionComp.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Lasercut motion components</h4>
			<p>
				<li>Cut three copies </li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutFrameComp.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Lasercut frame components</h4>
			<p>
				<li>Cut two copies </li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutSensor.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Lasercut sensor components</h4>
			<p>
				<li>Cut four copies </li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutWellPlateRep1.JPG %}
		</div>
		<div class="col-sm-3">
			{% thumbnail pipettebot/lasercutWellPlateRep2.JPG %}
		</div>
		<div class="col-sm-3">
			{% thumbnail pipettebot/LasercutWellPlateRep3.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Lasercut well plate replacement components</h4>
			<p>
				<li>Cut one copy of each</li>
				<li>The first contains patterns for the CD drive holder, and the CD drive push rod </li>
				<li>The second contains patterns for the well plate guide and the off ramp </li>
				<li>The last contains patterns for the well plate tower </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutTipRemoval.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Lasercut pipette tip removal components</h4>
			<p>
				<li>Cut one copy</li>
			</p>
			
			</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutPipetteGuide.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 7: Lasercut pipette mount components</h4>
			<p>
				<li>Cut one copy</li>
			</p>
			
			</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-12">
			<h4>Step 7: 3D printed parts: Overview</h4>
			<p>
				<li>Like the lasercutter section, the 3D printer section is organized according to subcomponents </li>
				<li>The 3D printed parts are provided as both DXF and STL files </li>
				<li>The 3D printed parts can be printed from any ABS or PLA. It is recommended to use ABS for the pipette mount components as they take larger loads </li>
			</p>
			
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/3DPStand.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: 3D print frame components</h4>
			<p>
				<li> Print 2 copies </li>
			</p>
			
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/3DPPipetteMounts.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 9: 3D print electronic pipette mount components</h4>
			<p>
				<li> Print one copy </li>
			</p>
			
			<p class="alert alert-info">Print out of ABS if possible</p>
			<p class="alert alert-info">These CADs are not exact, and will need hand modification for better fit after printing</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/3DPWellPlateHolder.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 10: 3D print well plate replacement components</h4>
			<p>
				<li> Print one component </li>
			</p>
			
			<p class="alert alert-info">Large flat pieces are prone to warping. A heated bed may be required</p>
		</div>
	</div>


</div>

<div id="content2" class="sidebar-content col-sm-8">
    <h3> Motion Components: Rail, Belt Drive, Carriage </h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cut rails.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Cut Makerslide Rails</h4>
			<p>
				<li> Get both 1m Makerslide rails. </li>
				<li> Using a bandsaw or hacksaw, cut one rail in half, and the other into a 65mm and 35mm piece. </li>
				<li> You will use one 65mm piece, one 50mm piece, and one 35mm piece. </li>
			</p>
			
			<p class="alert alert-success">You will use three of the rails. One 50mm piece will not be used. </p>
			<p class="alert alert-danger">Wear eye protection when using the bandsaw or hacksaw.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/stepper motor parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Collect parts for stepper motors</h4>
			<p>
				<li> Motor mounting brackets 3x </li>
				<li> Stepper motors 3x </li>
				<li> Plastic MXL pulleys 3x </li>
				<li> Male breakaway headers - four in a row 3x </li>
				<li> Fabricated acrylic stepper motor mount 3x </li>
				<li> 10mm M5 bolts 3x </li>
				<li> M5 insertion nuts 3x </li>
			</p>
			
			<p class="alert alert-info"> The screws shown in the image come from the stepper motor, and can be removed. (Is this safe????) </p>
			<p class="alert alert-info"> The image shows the male headers already soldered onto the stepper motor. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/stepper motor headers.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Solder male headers onto stepper motors</h4>
			<p>
				<li> Wrap the copper strands around the short leads of the headers </li>
				<li> Make sure the wires are ordered as shown in the image </li>
				<li> Solder wires to header </li>
				<li> Make sure the copper from the different wires do not touch. Hot glue the ends to provide insulation and strength </li>
				<li> Repeat for two other motors </li>
			</p>
			
			<p class="alert alert-warning"> Make sure the wires are long enough (GIVE MINIMUM LENGTH OF WIRE) </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/stepper motor pulley.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Attach pulley to stepper motor</h4>
			<p>
				<li> Slide the MXL pulley onto longer shaft of stepper motor and align so that the top of the pulley lines up with the top of the shaft </li>
				<li> Tighten the bolt on the pulley with an allen wrench </li>
				<li> Repeat for two other motors </li>
			</p>
			
			<p class="alert alert-info"> The bolt on the pulley is shown in the center of the image </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/stepper motor mount.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Assemble stepper motor component</h4>
			<p>
				<li> Place acrylic stepper motor mount over motor on the side with pulley </li>
				<li> Orient so the long end is opposite the end where the wires come out </li>
				<li> Attach mount onto motor with the four screws pulled from the motor </li>
				<li> Slide the 10mm M5 bolt into one of the slots of the mount as shown in the image </li>
				<li> Attach insertion nut to the bolt </li>
				<li> Repeat for two other motors </li>
			</p>
			
			<p class="alert alert-success"> This is the basic stepper motor assembly! (WHAT IS THE ORIENTATION NEEDED FOR EACH NUT/INSERTION NUT) </p>
			<p class="alert alert-info"> The image shows the screws for the mount not fully threaded in for illustrative purposes. Fully tighten these screws! </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/idler pulley parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Collect parts for idler pulleys</h4>
			<p>
				<li> Fabricated acrylic idler pulley mount 3x </li>
				<li> 6.3mm nylon spacers 3x </li>
				<li> Idler wheel kit 3x </li>
				<li> 10mm M5 bolts 3x</li>
				<li> 30mm M5 bolts 3x </li>
				<li> M5 nuts 3x </li>
				<li> M5 insertion nuts 3x </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/idler pulley side view.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 7: Attach idler to mount</h4>
			<p>
				<li> Slide idler wheel kit onto 30mm M5 bolt </li>
				<li> Slide nylon spacer onto 30mm bolt </li>
				<li> Slide bolt with wheel and washer onto the mount on the side with only one hole </li>
				<li> Tighten mount onto bolt with M5 nut </li>
				<li> Repeat for other two idler pulleys </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/idler pulley top view.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: Complete idler assembly</h4>
			<p>
				<li> Thread 10mm M5 bolt through the hole shown in the image </li>
				<li> Attach with M5 insertion nut on other side </li>
				<li> Completed assembly should look as imaged </li>
				<li> Repeat for other two idler pulleys </li>
			</p>
				
			<p class="alert alert-success"> This is the basic idler pulley assembly! (WHAT IS THE ORIENTATION NEEDED FOR EACH NUT/INSERTION NUT) </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/carriage parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 9: Collect parts for carriage assembly</h4>
			<p>
				<li> Aluminum carriage 3x </li>
				<li> V-wheel kit 12x </li>
				<li> Eccentric spacer 6x </li>
				<li> 6.3mm nylon spacer 12x </li>
				<li> 35mm M5 bolt 12x </li>
				<li> 16mm M5 bolt 6x </li>
				<li> M5 nut 18x </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/carriage bolts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 10: Begin V-wheel assembly</h4>
			<p>
				<li> Take all 4 35mm M5 bolts, and slide on V-wheel </li>
				<li> Slide nylon spacers onto bolt  </li>
				<li> Repeat for other two carriages </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/carriage plate.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 11: Attach V-wheels to plate</h4>
			<p>
				<li> Slide the 35mm bolts into the corner holes of the carriage </li>
			</p>
			
			<p class="alert alert-info"> Two of the corner holes will be larger, and the fit will be loose. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/carriage tensioner.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 12: Bolt on eccentric spacers</h4>
			<p>
				<li> On the holes with a tight fit, directly tighten with M5 nuts </li>
				<li> The eccentric spacers go into the loose holes, with the small end facing the plate </li>
				<li> Thread on M5 nuts on top of the eccentric spacers </li>
			</p>
			
			<p class="alert alert-info"> The bolt with the eccentric spacer is loose because the nut has not been tightened down. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/carriage beltbolt.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 13: Complete carriage assembly</h4>
			<p>
				<li> Slide 16mm bolts through the holes shown in the image </li>
				<li> Tighten with M5 bolts </li>
			</p>
			
			<p class="alert alert-info"> These bolts are to attach to the belt (Orientation???) </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/belt tape.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 14: Prepare MXL belts</h4>
			<p>
				<li> MXL belts need to be cut to a length approximately double that of the associated rail </li>
				<li> Measure out approximately 30mm of the end of the belt, and fold it on itself with the ridges facing one another </li>
				<li> Slide any M5 bolt into the end of the loop </li>
				<li> Wrap tape around the overlapping region of the belt </li>
				<li> Zip tie belt next to the M5 bolt, and snip end </li>
				<li> The bolt should be snug in the loop created. Remove the M5 bolt </li>
				<li> Estimate the length required, and repeat for other end </li>
				<li> Repeat for two other belts </li>
			</p>
			
			<p class="alert alert-info"> Do not make the second loop until mocking up the assembly </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/belt loop.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 15: Attach MXL belt to carriage</h4>
			<p>
				<li> Slide ends of belt onto carriage on the protruding M5 bolts </li>
				<li> Make sure belt is not twisted, and the ridge side is in the interior of the loop </li>
				<li> The zip tie should be oriented so that the bulky region is near the carriage surface. If not, cut off and retry </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/carriage on rail.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 16: Slide carriage onto rail</h4>
			<p>
				<li> Slide carriage and belt onto rail, making sure the side with the protruding M5 bolts correspond to the groove in the rail</li>
				<li> Make sure the loop of the belt is contained within the four wheels </li>
			</p>
			
			<p class="alert alert-info"> The belt is not showed in the image for clarity. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/motion assembly.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 17: Assemble rail and carriage</h4>
			<p>
				<li> Slide insertion nut attached to the stepper motor into the groove in the rail and tighten </li>
				<li> Loop end of belt around the stepper motor pulley </li>
				<li> Slide insertion nut attached to the idler pulley into the groove in the rail, but do not tighten </li>
				<li> Loop other end of belt around idler pulley </li>
				<li> Push against idler pulley assembly to tension belt, and tighten M5 bolt for insertion nut </li>
				<li> Repeat for other two assemblies </li>
			</p>
			
			<p class="alert alert-success"> This is the complete motion component assembly. </p>
			<p class="alert alert-info"> The assembly will need to be partially disassembled and reassembled at later steps. Be familiar with the assembly! </p>
			<p class="alert alert-info"> (Orientation????) </p>
		</div>
	</div>
</div>

<div id="content3" class="sidebar-content col-sm-8">
    <h3>Frame</h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/lasercutFrameComp.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect frame components</h4>
			<p>
				<li> Acrylic tall leg [file name] 2x </li>
				<li> Acrylic short leg [file name] 2x </li>
				<li> Acrylic slide support bottom [file name] 2x </li>
				<li> Acrylic slide support top [file name] 2x </li>
				<li> Acrylic leg buttress [file name] 2x </li>
				<li> Acrylic edge buttress [file name] 6x </li>
				<li> 3D printed well plate motion stands [file name] 2x </li>
				<li> M5 insertion nut 8x </li>
				<li> M5 bolts SIZES???? </li>
			</p>

			<p class="alert alert-info">See "Lasercut and 3D printed parts" section for further details on fabrication of these parts.</p>
			<p class="alert alert-info">The "edge buttress" parts can be replaced with whatever comparable scrap acrylic parts are available.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/frameLBrackets.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Assemble L brackets</h4>
			<p>
				<li> Collect lasercut acrylic slide supports (top and bottom) </li>
				<li> Using acrylic glue, glue the parts together as shown in the image </li>
				<li> Make sure the parts are properly aligned with a 90 degree angle, and allow to dry </li>
			</p>
			
			<p class="alert alert-info">The two brackets should be mirror images of one another.</p>
			<p class="alert alert-danger">Acrylic glue can be hazardous to health. Use in well ventilated area!</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/frameRightLegs.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Assemble legs</h4>
			<p>
				<li> Collect lasercut acrylic legs and leg buttress </li>
				<li> Assemble the parts as shown in the image. Note, the image is only for the right leg (your right when facing the robot) </li>
				<li> Align parts as shown in image, making sure the bottom is flat, and the legs are perfectly vertical. The edges of the legs should be touching </li>
				<li> Add acrylic glue to where the buttress meets the legs </li>
				<li> Add acrylic glue along seam where the edges of the legs meet </li>
				<li> Repeat, but mirrored for the left </li>
				<li> Do not allow to fully dry. Move on to next step to make sure of proper alignment! </li>
			</p>
			
			<p class="alert alert-info">This subassembly is very fragile. Be careful when handling.</p>
			<p class="alert alert-danger">Acrylic glue can be hazardous to health. Use in well ventilated area!</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/frameRightStand1.JPG %}
		</div>
		<div class="col-sm-3">
			{% thumbnail pipettebot/frameRightStand2.JPG %}
		</div>
		<div class="col-sm-3">
			{% thumbnail pipettebot/frameRightStand3.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Assemble legs</h4>
			<p>
				<li>Collect dried L-bracket assembly</li>
				<li>Collect drying leg assembly</li>
				<li>Collect laser cut edge buttresses</li>
				<li>Glue the L-bracket onto the legs as shown in this image</li>
				<li>Make the following checks:
					<ul>
					<li>The top of the long leg should align with the top of the L-bracket</li>
					<li>The edge of the short leg should align with the edge of the bottom of the L-bracket</li>
					<li>The adhesion surface between the bracket and the legs should be flat</li>
					<li>None of the holes on the bracket should be obstructed</li>
					</ul>
				</li>
				<li>If the parts seem misaligned, disassemble the leg subassembly and try again</li>
				<li>If everything checks out, add the edge buttresses as shown in images for reinforcement</li>
				<li>Repeat for left side with mirror image</li>
			</p>

			<p class="alert alert-danger">Acrylic glue can be hazardous to health. Use in well ventilated area!</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/frameWithHardware.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Add hardware to stands</h4>
			<p>
				<li>Collect 4x M5 bolts (SIZE???) and 4x M5 insertion nuts</li>
				<li>Assemble as shown in image</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/frameBaseWithHardware.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Add hardware to well plate motion stand</h4>
			<p>
				<li>Collect 3D printed stands</li>
				<li>Collect 4x M5 bolts (SIZE???) and 4x M5 insertion nuts</li>
				<li>Assemble as shown in image</li>
			</p>
		</div>
	</div>
</div>

<div id="content4" class="sidebar-content col-sm-8">
    <h3>Sensors</h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/sensorParts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect sensor components </h4>
			<p>
				<li>Limit switches (Mcmaster 7658K14) 4x</li>
				<li>12mm (longer sizes can be used, but will require washers for spacers) M5 bolts 4x</li>
				<li>1/4" acrylic spacers with M5 holes (part?) 4x</li>
				<li>M5 insertion nuts 4x</li>
				<li>Thin, bendable sheet metal (gauge?)</li>
				<li>M5 washers (if using longer bolts) </li>
				<li>Wire </li>
				<li>Hot glue gun </li>
			</p>

			<p class="alert alert-info">This will make four total sensors.</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/sensorTab.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Prep sheet metal tabs </h4>
			<p>
				<li>Cut out rectangle as shown with shears</li>
				<li>Drill hole using (SIZE???) drill</li>
				<li>Bend 90 degrees along dotted lines</li>
				<li>Repeat 4x</li>
			</p>
			
			<p class="alert alert-danger">Wear eye protection and watch out for sharp edges when drilling and cutting!</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/sensorWires.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Solder on wires </h4>
			<p>
				<li>Cut and strip a pair of wires in 1 1/2 foot lengths</li>
				<li>Solder onto the terminals of the limit switches as shown</li>
				<li>Cut and strip three pairs of 2 1/2 feet long wires, and solder onto last limit switch</li> 
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/sensorGlue.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Glue on sensor </h4>
			<p>
				<li>Using hot glue, attach the limit switches on the bent lip in the orientation shown</li>
			</p>
			<p class="alert alert-info">Actually, the limit switches can be attached in any orientation and still work.</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/sensorHardware.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Assemble bolt and spacers </h4>
			<p>
				<li>Thread the 12mm(?) M5 bolts through washers, the metal tab, and then the acrylic spacer as shown</li>
				<li>Use as many washers as needed to allow the attachment of the switch to the rails without interference</li>
			</p>

			<p class="alert alert-info">If using a smaller size M5 bolt, less washers will be needed. However, try to use at least one washer to avoid damaging the sheet metal.</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/sensorTape.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Assemble bolt and spacers </h4>
			<p>
				<li>Add a little bit of tape to the sensor pivot as shown in image</li>
			</p>

			<p class="alert alert-info">The purpose of this step is to minimize slop in the sensor.</p>
		</div>
	</div>
	
	
</div>

<div id="content5" class="sidebar-content col-sm-8">
	<h3>Electronics </h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect tools and parts</h4>
			<p>
				<li>Soldering station </li>
				<li>Solder </li>
				<li>Wire cutting/stripping tool </li>
				<li>Wire (lots) </li>
				<li>Large breadboard 1x </li>
				<li>Small breadboard 1x </li>
				<li>Arduino Uno Rev3 </li>
				<li>Pololu Stepper Driver DRV8825 3x </li>
				<li>PNP transistors (specifics????) 5x </li>
				<li>1kOhm resistors 8x </li>
				<li>100uF capacitor 3x </li>
				<li>ATX power supply 1x </li>
				<li>Small computer fan 1x </li>
			</p>

			<p class="alert alert-info">Any Arduino will work as long as it has enough input/outputs. This guide is specifically written for the Rev3. If using another model, keep track of the pins and modify the wiring or code as needed.</p>
			<p class="alert alert-danger">Be careful when working with the ATX power supply. Make sure it is always unplugged before working with it. Do not attempt to disassemble!</p>
			<p class="alert alert-danger">Soldering irons get hot!</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/electronics breadboard.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Prepare ATX power supply</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/electronics breadboard.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Assemble large bread board</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/electronics breadboard.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Assemble small bread board</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/electronics breadboard.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Connect bread boards to Arduino</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>	
</div>

<div id="content6" class="sidebar-content col-sm-8">
	<h3>Hacking Electronic Pipette</h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipette.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect parts of electronic pipette</h4>
			<p>
				<li>Transferpette electronic 8-channel pipette </li>
				<li>Perfboard </li>
				<li>Thin gauge wire </li>
			</p>

			<p class="alert alert-info">Shown is Transferpette, with thin gauge wire coming out of its interface into a perfboard.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteBackScrew.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipettePlasticPiece.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Remove battery cover</h4>
			<p>
				<li>Make sure pipette is unplugged</li>
				<li>Remove screws on back</li>
				<li>Remove finger support. Save the small screw</li>
				<li>Push down on tab to release battery cover</li>
				<li>Hold onto plastic piece with the nut pictured</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteRemoveBatt.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Remove battery</h4>
			<p>
				<li>Remove the battery and unplug the wires connecting the battery to the pipette</li>
				<li>Remove pair of screws on back</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteTabs.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteSplit.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Lift off face</h4>
			<p>
				<li>Push down the two tabs indicated</li>
				<li>While pushing down, separate the pipette along the seam</li>
				<li>Remove rubber and plastic buttons. These are not needed</li>
			</p>


			<p class="alert alert-warning">The face will not come completely off!! Do not try to force it.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteSolder.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteThreadWires.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Solder on wires to circuit</h4>
			<p>
				<li>Clips hold board in. Pull back these clips to extract circuit board</li>
				<li>Pull out circuit board as far as it will go</li>
				<li>Cut and strip 10 thin wires in 4 inch lengths</li>
				<li>Solder ends of wire onto contacts as shown</li>
				<li>Thread the wire pairs through the corresponding button holes to help keep track of them</li>
				<li>Put circuit board back into pipette, and close the pipette</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipettePerfboard.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Solder wires to perfboard</h4>
			<p>
				<li>Break up male headers into threes, and remove center pin. Repeat until you have five of these</li>
				<li>Repeat with female headers</li>
				<li>Solder corresponding pairs of wires onto each male header</li>
				<li>Solder other end of header into the perfboard</li>
				<li>Cut and strip 10 normal gauge wire in 2 foot lengths</li>
				<li>Solder onto the female headers in pairs</li>
				<li>Connect to the pins on perfboard</li>
			</p>

			<p class="alert alert-info">The purpose of the male female pins is to allow the pipette to be disconnected if needed from the circuitry. In the prototype this was not done so the images do not properly correspond.</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteDrill.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Drill hole into battery cover</h4>
			<p>
				<li>Use a drill to make a small hole on the left side of the battery cover. This hole should be large enough to let through some wires</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteGround.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 7: Connect wire to battery ground</h4>
			<p>
				<li>Cut the black wire coming out of the battery pack</li>
				<li>Cut and prep a 2 feet length normal gauge wire</li>
				<li>Splice prepped wire into the black line of the battery pack</li>
				<li>Wrap up and reconnect battery </li>
				<li>Put little plastic piece into the battery cover, and close up the battery pack</li>
			</p>

		</div>
	</div>


	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/hackPipetteTape.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: Wrap pipette with tape</h4>
			<p>
				<li>Wrap the pipette body with tape as shown in the image</li>
			</p>

			<p class="alert alert-info">The purpose of the tape is to help the pipette clamp grip the pipette.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: Hack power supply</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 9: Connect pipette to Arduino</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 10: Test again</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
</div>

<div id="content7" class="sidebar-content col-sm-8">
	<h3>Electronic Pipette Mount</h3>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountCarriage.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Prep carriage</h4>
			<p>
				<li>Grab one of the prepared carriages, and move the bolt where the belt mounts to match the image</li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountParts.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Collect parts for bottom mount and guide</h4>
			<p>
				<li>3D printed bottom pipette mount base (CAD PRT?)</li>
				<li>3D printed bottom pipette mount clamp (CAD PRT?)</li>
				<li>Lasercut pipette guide (PART?)</li>
				<li>Lasercut pipette guide spacer 2x (PART???)</li>
				<li>30mm M5 bolts 4x</li>
				<li>25mm M5 bolts 2x</li>
				<li>15mm M5 bolt 1x</li>
				<li>M5 washers 4x</li>
				<li>M5 nut 5x</li>
				<li>M5 insertion nut 3x</li>
			</p>

		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountNuts.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Prepare bottom mount base</h4>
			<p>
				<li>Push a pair of M5 nuts into the two hex holes shown</li>
			</p>

			<p class="alert alert-info">Make sure the nuts get pushed all the way down.</p>
		</div>
	</div>	
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountPosition.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountTopBolt.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Position mount on carriage</h4>
			<p>
				<li>Position mount as shown</li>
				<li>Thread 15mm M5 bolt through hole on top of mount</li>
				<li>Secure with an insertion nut on other side</li>				
			</p>

			<p class="alert alert-info">Do not fully tighten nut because the positioning will need to be adjusted.</p>
		</div>
	</div>	
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountCenterBolts.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Thread bolts through center holes</h4>
			<p>
				<li>Thread 30mm M5 bolts through center two holes shown in image</li>
				<li>The bolts should fit through corresponding holes in the carriage, but do not tighten anything</li>
			</p>
			
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountClamp.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Attach clamp to pipette mount</h4>
			<p>
				<li>Position clamp portion of the bottom pipette mount as shown in image</li>
				<li>Loosely tighten with a pair of 30mm M5 bolts, making sure the bolts thread onto the nuts</li>
			</p>

			<p class="alert alert-info">The purpose of this step is to make sure the nuts have been inserted properly into the pipette mount before proceeding, and to make sure these nuts do not back out.</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountBracketBack.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountBracketFront.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 7: Position bracket below mount</h4>
			<p>
				<li>Position bracket below the pipette mount as shown in the image</li>
				<li>Before tightening, slide in a pair of M5 insertion nuts underneath the mount</li>
				<li>Thread on a pair of M5 nuts onto the bolts attaching the bracket to the carriage</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountGuideBolts.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountGuideAssm.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: Assemble pipette guide</h4>
			<p>
				<li>Put a pair of washers on both 25mm M5 bolts</li>
				<li>Thread these bolts through the acrylic cutouts for the pipette guide as shown in the image</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountAttachGuide.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 9: Attach pipette guide to mount</h4>
			<p>
				<li>Thread bolts in the guide assembly into the insertion nuts between the bracket and mount</li>
			</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 10: Collect parts for pipette mounting arm</h4>
			<p>
				<li>3D printed pipette mounting arm (CAD PART)</li>
				<li>30mm M5 bolts 2x</li>
				<li>M5 nut 2x</li>
			</p>
		
			<p class="alert alert-info">The following images show the arm with an acrylic spacer. The 3D printed part has been updated to no longer require this.</p>
		
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountArmNut.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 11: Insert nut into pipette mount arm</h4>
			<p>
				<li>Insert M5 nut into the slot on the pipette mount arm</li>
			</p>
		
			<p class="alert alert-info">This should be a tight fit. Make sure the nut is flat and that the holes are relatively aligned.</p>
		
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountArmPos1.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountArmPos2.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 12: Position pipette mount arm</h4>
			<p>
				<li>Grab the carriage with the lower portion of the pipette mount installed</li>
				<li>In the position that the carriage will be installed on the robot, the arm should be positioned on the top right corner</li>
				<li>The flat side of the arm should be pointing down, and the angled side pointing up</li>
				<li>Thread a 30mm M5 bolt from bottom of the carriage, through the pipette mount arm, and into the nut inserted earlier</li>
				<li>Do not fully tighten the bolt in order to allow positioning of the arm</li>
				
			</p>
		
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountArmSecondBolt.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 13: Insert second bolt into arm</h4>
			<p>
				<li>Insert 30mm M5 bolt into the other slot in arm, going in the opposite direction of the first bolt</li>
				<li>Tighten on carriage side with M5 nut</li>
			</p>
				
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountOverview.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 14: Check final positioning</h4>
			<p>
				<li>Make sure everything is positioned as shown in image</li>
				<li>Tighten all nuts, being careful to not damage the 3D printed parts</li>
			</p>
			
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountPipettePosition.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 15: Position pipette</h4>
			<p>
				<li>Place pipette into the mount as shown in image</li>
				<li>The bottom portion of the pipette can spin. Spin it around until it is perpendicular to the carriage and fits into the acrylic guide</li>
			</p>
		
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountUpperAttach.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 16: Attach upper mount to pipette</h4>
			<p>
				<li>Use the small screw that you removed from finger support of the pipette to attach the upper mount to the pipette</li>
				<li>If the pipette does not properly align when the top mount secured, modify the top mount surface with a dremel</li>
			</p>
		
		</div>
	</div>	
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountBottomAttach.JPG %}
		</div>
		<div class="col-sm-6">
			{% thumbnail pipettebot/pipetteMountFinal.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 17: Attach bottom mount to pipette</h4>
			<p>
				<li>Place clamp back on the pipette, and tighten</li>
				<li>At this point the pipette should be fully mounted and aligned as shown in the picture</li>
			</p>
		
		</div>
	</div>	
</div>

<div id="content8" class="sidebar-content col-sm-8">
	<h3>Well Plate Replacement</h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate holder lines.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect parts for acrylic well plate holder</h4>
			<p>
				<li> Acrylic (1/4") top well plate holder layer [CAD file name goes here] </li>
				<li> Acrylic (1/8") middle well plate holder layer [CAD file name goes here] </li>
				<li> Acrylic (1/4") bottom well plate holder layer [CAD file name goes here] </li>
			</p>

			<p class="alert alert-info"> The image shows the assembled part, with black lines drawn in to highlight the boundaries between the layers.</p>
			<p class="alert alert-info"> An alternative is to 3D print this part. If 3D printing, use [CAD file name goes here] and skip to STEP 4.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate holder edge.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Machine and file top layer piece</h4>
			<p>
				<li> Using a mill, remove a layer about 2mm deep, leaving 2mm thickness along the sides </li>
				<li> Using a file, create a pair of angles on one side as shown in the image </li>
				<li> Reference [CAD file name goes here] </li>
			</p>

			<p class="alert alert-info"> The image shows the assembled part, with black lines drawn in to highlight the boundaries between the layers.</p>
			<p class="alert alert-info"> It is important to create the angled edges to allow the well plate to slide in even when slightly misaligned.</p>
			<p class="alert alert-info"> An alternative is to 3D print this part. If 3D printing, use [CAD file name goes here] and skip to STEP 3.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate holder holes.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Acrylic glue layers</h4>
			<p>
				<li> Using acrylic glue, attach all the layers to one another </li>
			</p>

			<p class="alert alert-info"> The image shows two boxes. In the red box are the alignment holes. In the blue box are the fastening holes. </p>
			<p class="alert alert-info"> The fastening hole is larger on the top layer to allow for a recessed bolt and a smooth surface. </p>
			<p class="alert alert-warning"> If the layers are not properly aligned, the bolts may not fit smoothly! Use a flat surface to help align the parts.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate holder parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Collect components of well plate holder full assembly</h4>
			<p>
				<li> Fabricated well plate holder </li>
				<li> Assembled carriage </li>
				<li> 14mm M5 bolts 2x </li>
				<li> M5 nuts 2x </li>
			</p>	

			<p class="alert alert-info"> The well carriage in this image is a custom piece. If following instructions in this guide, your carriage should look like the other pieces. </p>
			<p class="alert alert-info"> The red boxes correspond to alignment holes, and blue to fastening holes. The boxes on the carriage and on the plate holder should align. </p>
			<p class="alert alert-info"> Need to update CAD of acrylic well plate holder tp fit standard carriage!!! </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate holder assembly.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Create full well plate holder assembly</h4>
			<p>
				<li> Align plate holder with carriage based on the color coded boxes</li>
				<li> Slide plate holder onto the bolts on the carriage (these are the bolts that attach to the belt drive) </li>
				<li> Slide 14mm M5 bolts onto the other holes, with M5 nuts on the bottom of the carriage and tighten </li>
			</p>

			<p class="alert alert-warning">Make sure everything is well aligned or else the well plates may jam while being loaded and unloaded. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate tower side.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Collect parts for plate tower</h4>
			<p>
				<li> List of parts files for plate tower... </li>
			</p>

			<p class="alert alert-info">Shown is a fully assembled plate holder lain on its side. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate tower notes.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 7: Acrylic glue plate tower</h4>
			<p>
				<li> Glue together all the parts of the plate tower with acrylic glue </li>
				<li> Use thin scrap pieces of 1/4" acrylic to buttress the joints of the legs </li>
				<li> Glue short scrap pieces of 1/4" acrylic to along the sides of the slot as shown in the image. Make sure the pieces do not fully extend to the bottom of the slot </li>
				<li> Reference [CAD file name here] </li>
			</p>

			<p class="alert alert-info"> Shown is a view from the rear. </p>
			<p class="alert alert-info"> Need to modify CAD files to create flattened edge!!! </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/offramp.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: Collect parts for and assemble off ramp </h4>
			<p>
				<li> Acrylic (1/4") top ramp surface </li>
				<li> Acrylic (1/4") ramp sides 2x </li>
				<li> Glue parts together using acrylic glue </li>
				<li> Reference [CAD file name here] </li>
			</p>

			<p class="alert alert-info"> Need to modify CAD file to avoid grinding step!!! </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate align.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 9: Collect parts for plate alignment part </h4>
			<p>
				<li> List of parts with CAD names... </li>
			</p>

			<p class="alert alert-info"> Shown is assembled part. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate align angle.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 10: Glue together plate alignment part </h4>
			<p>
				<li> Using acrylic glue, glue together plate alignment part </li>
				<li> To determine spacing of vertical side pieces, slide plate holder assembly onto the Makerslide. Then attach bottom supports of alignment part to the rail, and position vertical side pieces off of the plate holder </li>
				<li> When glueing on angled guides for the well plates, none of the edges interfere with the entrance </li>
				<li> Use scrap pieces of 1/4" acrylic to buttress the edges of the side </li>
				<li> Reference [CAD file name] </li>
			</p>

			<p class="alert alert-info"> Shown is one of the angled guides. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate align parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 11: Collect parts for plate alignment full assembly </h4>
			<p>
				<li> Fabricated plate alignment part </li>
				<li> 12mm M5 bolts 4x </li>
				<li> M5 insertion nuts 4x </li>
			</p>

		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/plate align assembled.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 12: Fully assemble plate alignment assembly</h4>
			<p>
				<li> Insert 12mm M5 bolts into the four holes in the plate alignment part, with the threaded ends pointed up </li>
				<li> Attach on other end with M5 insertion nuts </li>
			</p>

		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 13: Collect parts for hacked CD-drive</h4>
			<p>
				<li> CD-drive 1x </li>
				<li> Fabricated position sensor assembly 1x </li>
				<li> Acrylic (1/4") spacers [CAD file name] 2x </li>
				<li> Acrylic (1/8") push [CAD file name] 1x </li>
				<li> Extrusion bracket 1x </li>
				<li> 25mm M5 bolt 2x </li>
				<li> 16mm M5 bolt 1x </li>
				<li> 10mm M5 bolt 1x </li>
				<li> M5 nuts 3x </li>
				<li> Wire 1.5'(???) 2x </li>
			</p>

			<p class="alert alert-info"> Image shows wires sensors already attached to CD-drive. This will not be the case. </p>
			<p class="alert alert-warning"> Any information on hacking CD-drive steps may vary from model to model. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive screws.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 14: Remove bottom plate of CD-drive</h4>
			<p>
				<li> Remove 4 screws from bottom of CD-drive </li>
				<li> Lift off bottom plate </li>
			</p>
			
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive side.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 14: Remove front face of CD-drive</h4>
			<p>
				<li> Push in tabs on side of CD-drive and pull off CD drive face </li>
			</p>
			
			<p class="alert alert-info"> The CD-tray must first be in the open position to remove the face. To do this, look for a small hole on the CD-drive face and insert a paper clip. This should force to tray open. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive open button.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 15: Find pins for open button</h4>
			<p>
				<li> Push the little push button behind the open/close button for the CD drive </li>
				<li> Using a multimeter, look for the pair of pins that close when the button is depressed </li>
			</p>
			
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive solder.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 16: Solder wires to CD drive</h4>
			<p>
				<li> Solder the two wires onto the two leads </li>
				<li> Thread the wires out through the hole where the open/close button fits in </li>
				<li> Dispose of the open/close button </li>
				<li> Solder other ends of wires to the position sensor. Polarity does not matter </li>
			</p>
			
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive drill.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 17: Drill holes into CD drive</h4>
			<p>
				<li> Using the extrusion bracket as a template, mark two holes with a Sharpie </li>
				<li> Use a drill bit slightly smaller than the diamter of the M5 bolts to drill two holes </li>
				<li> One of the holes may be slightly larger than the bolts to allow for adjustment </li>
			</p>
			
			<p class="alert alert-danger"> Wear eye protection when operating a hand drill. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive more drill.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 17: Drill more holes into CD drive</h4>
			<p>
				<li> Open the CD tray </li>
				<li> Using a Dremel or drill, drill and clear out space to make room for an M5 nut and the M5 bolt on the side with the larger hole in it </li>
			</p>
			
			<p class="alert alert-danger"> Wear eye protection when operating a hand drill. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive bracket.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 18: Attach bracket to CD-drive</h4>
			<p>
				<li> The extrusion bracket is not symmetrical. Align the side with the holes more centered with the holes on the CD-drive </li>
				<li> Thread in 10mm M5 bolt through the bracket and into the smaller hole in the CD-drive </li>
				<li> Thread in 16mm M5 bolt through other hole in bracket. Attach with an M5 nut on the other side </li>
				<li> Adjust bracket position so it is properly aligned and then tighten </li>
			</p>
			
			<p class="alert alert-warning"> Do not overtighten! The plastic is very easily damaged. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive stack.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 19: Attach push bar to CD-drive</h4>
			<p>
				<li> Thread 25mm bolt through remaining holes in extrusion bracket </li>
				<li> Slide on the two 1/4" spacers </li>
				<li> Slide on the 1/8" push bar </li>
				<li> Tighten with M5 nuts </li>
			</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd stand.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 20: Collect parts for and assemble CD-drive stand</h4>
			<p>
				<li> Acrylic (1/4") long side stand [CAD file name] 2x </li>
				<li> Acrylic (1/4") short side stand [CAD file name] 2x </li>
				<li> Acrylic (1/4") support plates [CAD file name] 2x </li>
				<li> Use acrylic glue to assemble </li>
				<li> Use scrap 1/4" acrylic to buttress edges </li>
				<li> Reference [CAD file name] </li>
			</p>
			
			<p class="alert alert-info"> Image shows completed assembly. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd stand dremel.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 21: Dremel CD-drive stand</h4>
			<p>
				<li> Without any modifications, the CD-drive stand will not fit the CD-drive because the face is larger in dimension than the rest of the body </li>
				<li> Using a Dremel, remove material on one end of the stand to clear the CD-drive face </li>
			</p>
			
			<p class="alert alert-danger"> Wear eye protection when using a Dremel. </p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/cd drive with stand.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 22: Combine hacked CD-drive with stand</h4>
			<p>
				<li> Place CD-drive into stand </li>
			</p>
			
		</div>
	</div>
</div>

<div id="content9" class="sidebar-content col-sm-8">
	<h3>Pipette Tip Removal</h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/tip removal parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect acrylic parts of pipette tip removal component</h4>
			<p>
				<li>Lasercut acrylic wedges(file name) 4x </li>
				<li>Lasercut acrylic spacer (file name) 4x </li>
				<li>Lasercut acrylic long arm (file name) 1x </li>
				<li>Lasercut acrylic short arm (file name) 1x </li>
				<li>Lasercut( 1/8") wedge surface (file name) 1x </li>
				<li>Aluminum bracket 4x </li>
				<li>10mm M5 bolts 6x </li>
				<li>12mm M5 bolts 2x </li>
				<li>M5 nuts 6x </li>
				<li>M5 insertion nuts 2x </li>
			</p>

			<p class="alert alert-info">Pictured is the complete assembly.</p>
		</div>
	</div>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/tip removal stack.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Acrylic glue spacers</h4>
			<p>
				<li>Stack four acrylic spacers and glue them together</li>
				<li>Use straight surface to help align parts</li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/tip removal wedges.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Acrylic glue wedge</h4>
			<p>
				<li>Stack four acrylic wedges and glue them together</li>
				<li>Glue notched surface of the wedges to short side of short arm</li>
				<li>Glue a piece of 1/4" scrap acrylic to buttress edge between wedges and short arm </li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/tip removal acrylic parts.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Acrylic glue arms</h4>
			<p>
				<li>Glue short arm onto top of stack as pictured </li>
				<li>Glue long arm onto bottom of stack at a 90 degree angle to the short arm </li>
			</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/tip removal brackets.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Assemble brackets</h4>
			<p>
				<li>Assemble the brackets as shown in the image using 10mm M5 bolts </li>
				<li>Tighten the nuts, but leave the insertion nuts loose </li>
			</p>
			
			<p class="alert alert-info">The brackets are not symmetrical, so be careful to reference the image during assembly.</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/tip removal final.jpg %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Attach brackets to acrylic parts</h4>
			<p>
				<li>Attach brackets to acrylic wedge assembly with 12mm M5 bolts and nutes</li>
			</p>
		</div>
	</div>
</div>

<div id="content10" class="sidebar-content col-sm-8">
	<h3>Code Guide </h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Initialization</h4>
			<p>
			<li> Motor Variables </li>
			<li> int acceleration declares the rate of acceleration of all motors. </li>
			<li> int m_speed declares the maximum speed of all motors. </li>
			<li> int s_speed declares the starting speed of all motors. </li>
			<li> Distance Variables </li>
			<li> </li>
			<li> AccelStepper Axis(1, step, direction)</li>
			<li> Creates an object Axis of class AccelStepper which correlates to a motor. </li>
			<li> The step variable is the arduino pin leading to the step pin of the motor. </li>
			<li> The direction variable is the arduino pin leading to the direction pin of the motor.</li>
			</p>
			
			<p class="alert alert-info"> Requires the AccelStepper library.</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Pipetter Control</h4>
			<p>text</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Motion Control</h4>
			<p>text</p>


		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Operating Functions</h4>
			<p>text</p>

		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>User Command</h4>
			<p>text</p>

		</div>
	</div>
	
</div>

<div id="content11" class="sidebar-content col-sm-8">
	<h3>Final Assembly</h3>
		
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1: Collect all components</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 2: Attach carriages to rails</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 3: Attach frame to rails</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Attach frame to rails</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Attach sensors to rails</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 4: Attach tip replacement assembly to rails</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 5: Position rails perpendicular to one another</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 6: Connect motors to breadboard</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 7: Connect pipette to breadboard</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
	
	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 8: Position well plate replacement components</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
</div>

<div id="content12" class="sidebar-content col-sm-8">
	<h3>Calibration</h3>

	<div class="container-fluid well">
		<div class="col-sm-6">
			{% thumbnail pipettebot/.JPG %}
		</div>
		<div class="col-sm-6">
			<h4>Step 1</h4>
			<p>text</p>

			<p class="alert alert-success">...</p>
			<p class="alert alert-info">...</p>
			<p class="alert alert-warning">...</p>
			<p class="alert alert-danger">...</p>
		</div>
	</div>
</div>