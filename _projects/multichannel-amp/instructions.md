---
layout: project
title: Instructions
project: multichannel-amp
---

Build Instructions
==========


<div class="col-sm-4">
    <ul class="nav nav-pills nav-stacked">
        {% sidebar "content1", "Prepare Surface Mount Components" %}

        {% sidebar "content2", "PCB Assembly" %}

        {% sidebar "content3", "Enclosure" %}
		
		{% sidebar "content4", "Testing" %}
		
    </ul>
	
	<h4> Tools </h4>
	<ul> 
	<li> Soldering Iron and Solder</li>
	<li> 3rd hand or Vise</li>
	<li> Drill with 3/8" and 1/4" drill bit</li>
	<li> Pliers</li>
	<li> Adjustable wrench</li>

	</ul>
	
</div>



<div id="content1" class="sidebar-content col-sm-8">	
	<h2> Prepare Surface Mount Components</h2>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/breakout_prep.png" style="height:320px" />
		</a>
	</div>
	<div class="col-sm-6">
		<h3>Step 1: Prepare surface mount breakout board</h3>
		<p>If you have an OpAmp in a DIP or TO-5 package, skip to Step 3.</p>
<p>Do this for 8 breakout boards.</p>

		<p class="alert alert-success">Take one of the SOIC-8 surface mount breakout boards and pre-solder the pads. (You can also use solder paste and a reflow oven if available.)
Using a fine-tipped soldering iron, put a small amount of solder on each pad. </p>
		<p class="alert alert-danger">Make sure not to bridge the pads with solder! If this happens, remove the excess solder.</p>
	</div>
	<div class="clearfix"></div>
</div>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/OPA124_breakout.png" style="height:320px" />
		</a>
	</div>
	<div class="col-sm-6">
		<h3>Step 2: Solder OPA124 to breakout board</h3>
		<p>Do this for all 8 breakout boards.</p>

		<p class="alert alert-success">Use a tweezers and place the OPA124 on the breakout board so that the chip leads are over the solder pads.</p>
<p class="alert alert-success"> 
The orientation of the chip should be that the dot on the top of the chip is near the '1' on the breakout board.
Very gently heat the solder pads while not distrubing the chip. Do this for all leads. 
</p>
<p class="alert alert-success">
Touch up the leads with a little solder to nesure that all leads are soldered. 
 </p>
		<p class="alert alert-danger">Make sure that the chip orientation is right! Make a very close inspection of the chip leads to make sure that all leads are soldered!</p>
	</div>
<div class="clearfix"></div>
</div>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
		<img src="/images/multichannel-amp/maleheaders.png" style="height:320px" />
		</a>
		<a class="thumbnail">
		<img src="/images/multichannel-amp/breakout_headerrot.png" style="height:320px" />
		</a>


	</div>
	<div class="col-sm-6">
		<h3>Step 3: Attach male headers to breakout board</h3>
		<p></p>

<p class="alert alert-success"> 
Break off your male headers in units of 4 each. You'll need two of these four-units for each breakout board, 16 for all 8 boards.</p>
<p class="alert alert-success">
Take a breadboard and insert into it (skinny pins down) the four unit headers parallel and immediately adjacent to the center, on both sides, so that the breakout board fits into it nicely. 
 </p>
<p class="alert alert-success">
Solder the pins. Do this for all 8 breakout boards.
 </p>
	</div>	
<div class="clearfix"></div>
</div>

</div>




<div id="content2" class="sidebar-content col-sm-8">	
	<h2> PCB Assembly</h2>


<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/femaleheaders.png" style="height:320px" />
		</a>
<a class="thumbnail">
			<img src="/images/multichannel-amp/PCB_headersrot.png" style="height:320px" />
		</a>
	</div>
<div class="col-sm-6">
		<h3>Step 1: Solder female headers and feedback resistors to PCB</h3>
		<p></p>

		<p class="alert alert-success">Break off the female headers in groups of four, you'll need two groups of four for each chip and 16 in total.</p>
<p class="alert alert-success"> 
Insert the headers on each side of each OPA124 written on the PCBs</p>
<p class="alert alert-success">
Solder four 1G resistors where '1G' is written on the PCB. 
 </p>
<p class="alert alert-success">
Repeat all of the above for the second PCB.
 </p>
	</div>
	<div class="clearfix"></div>
</div>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/PCB_populated.png" style="height:320px" />
		</a>
	</div>
<div class="col-sm-6">
		<h3>Step 2: Insert OPA124 breakout boards into header sockets</h3>
		<p></p>

		<p class="alert alert-success">
Take your soldered OPA124 breakout boards and find the end that has a printed circle. Make sure that end is inserted into the PCB at the same end as the notch is on the OPA124 outline on the PCB
 </p>
	</div>
	<div class="clearfix"></div>
</div>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/PCB_power_signal.png" style="height:320px" />
		</a>
	</div>
<div class="col-sm-6">
		<h3>Step 3: Solder power and signal wires to 
PCB</h3>
		<p></p>

		<p class="alert alert-success">Solder ~6 inch long wires to the power connections on the edge of the board. </p>
		<p class="alert alert-danger">Make sure that you identify the polarity correctly! The ground lead is labeled GND, the + power lead is labeled PWR1+, and the - power lead is PWR1-. These labels can be obscured by the headers. The + lead is above the GND on the Ch 1-4 board and below the GND lead on the Ch 5-8 board. </p>
		<p class="alert alert-success">Solder ~6 inch long wires to the I_IN and V_OUT connections on the edges of the board. </p>
		<p class="alert alert-info">If you are concerned about noise, use shielded wires from the optional next step.</p>
	</div>
	<div class="clearfix"></div>
</div>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/shielded_wire_prep.png" style="height:320px" />
		</a>
		<a class="thumbnail">
			<img src="/images/multichannel-amp/PCB_power_signal2.png" style="height:320px" />
		</a>

	</div>
<div class="col-sm-6">
		<h3>Step 3.5: Optional for low noise: prepare shielded output wires</h3>
		<p></p>

		<p class="alert alert-success">Cut a ~6 inch long piece of shielded coaxial cable and strip off the outer insulation. </p>
		<p class="alert alert-success"> If there is a braided wire shield, trim it back from each ends by ~ 0.5 inches. If there is a foil layer underneath that, remove the braid entirely to expose the foil and trim the foil back from the ends. </p>
		<p class="alert alert-success"> Gently remove the insulation surrounding the center wire about 1/4 inch from each end. 
 </p>
		<p class="alert alert-success"> Solder the wires to the V_OUT connections on the PCB. 
 </p>
	</div>
	<div class="clearfix"></div>

</div>


</div>





<div id="content3" class="sidebar-content col-sm-8">	
	<h2> Enclosure</h2>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/box.png" style="height:320px" />
		</a>
<a class="thumbnail">
			<img src="/images/multichannel-amp/box_holes.png" style="height:320px" />
		</a>
	</div>
<div class="col-sm-6">
		<h3>Step 1: Drill holes in enclosure</h3>
		<p></p>

		<p class="alert alert-success">Using a 3/8 inch drill bit, drill 8 aligned holes on the side of your enclosure for the BNC connectors.</p>
<p class="alert alert-success"> Using a 1/4 inch drill bit, drill 8 holes in the bottom of your enclosure to mount the two PCBs to the case through their mounting holes. 
</p>
<p class="alert alert-success">
Drill three small holes or one larger hole in the side of the case for the power wires.
 </p>
<p class="alert alert-success">
Drill a large hole in the side of the case opposite the BNC holes for the input signal wires.
 </p>
	</div>
	<div class="clearfix"></div>
</div>

<div class="well">
	<div class="col-sm-6">
		<a class="thumbnail">
			<img src="/images/multichannel-amp/spacers.png" style="height:320px" />
		</a>
	
		<a class="thumbnail">
			<img src="/images/multichannel-amp/hardware.png" style="height:320px" />
		</a>
	</div>
<div class="col-sm-6">
		<h3>Step 2: Add mounting hardware</h3>
		<p></p>

		<p class="alert alert-success">
With the bottom of the box facing up, insert the screws into the 8 mounting holes on the bottom of the box. Place masking tape over the screw heads to hold them in place as you turn the box over. 
 </p>
	<p class="alert alert-success">
Turn the box over and put one plastic spacer on each screw. You can use real spacers or cut up pieces of plastic tubing. 
 </p>
	<p class="alert alert-success">
Place the PCBs onto the screws so that the V_OUT wires are on the same side as the large BNC holes and tighten the nuts.
 </p>
</div>
	<div class="clearfix"></div>

</div>


<div class="well">
	<div class="col-sm-6">
	<a class="thumbnail">
			<img src="/images/multichannel-amp/BNC.png" style="height:320px" />
		</a>
<a class="thumbnail">
			<img src="/images/multichannel-amp/finished_box.png" style="height:320px" />
		</a>

</div>
<div class="col-sm-6">
		<h3>Step 3: Add BNC connectors</h3>
		<p></p>

		<p class="alert alert-success">
Inser the BNC connectors into their holes with the solder cup on the lead inside the box oriented up. Attach the grounding tab, lock washer, and tighten the nuts.  </p>
	<p class="alert alert-success">
 </p>
	<p class="alert alert-success">
Solder the V_OUT signal wires to the BNC signal line.
 </p>
</div>
	<div class="clearfix"></div>

</div>

<div class="well">
	<div class="col-sm-6">
	<a class="thumbnail">
			<img src="/images/multichannel-amp/foil.png" style="height:320px" />
		</a>
<a class="thumbnail">
			<img src="/images/multichannel-amp/foil_fold.png" style="height:320px" />
		</a>
<a class="thumbnail">
			<img src="/images/multichannel-amp/PCB_shield.png" style="height:320px" />
		</a>
<a class="thumbnail">
			<img src="/images/multichannel-amp/finished_box.png" style="height:320px" />
		</a>

</div>
<div class="col-sm-6">
		<h3>Optional: Low noise and crosstalk </h3>
		<p></p>

		<p class="alert alert-success"> Take a ~2 foot long piece of aluminum foil and fold it up until it is a long strip ~1 inch wide.</p>
	<p class="alert alert-success">Fold this strip up to make crenellations into which each op-amp can sit without the foil touching any electrical components. 
 </p>
	<p class="alert alert-success">
Place the folded foil onto the PCB so that the foil is between adjacent op-amps.
 </p>

<p class="alert alert-danger">Don't short anything!</p>

	<p class="alert alert-success">
Take one end of a wire and crimp it around one end of the foil. Take the other end of the wire and solder it to one of the grounding tabs on a BNC connector. 
 </p>
	<p class="alert alert-success">
Take ~12 inches of 24 ga wire and remove the insulation. Wind one end of the wire once around the foil of one of the V_OUT wires on the end of the box. Bring the wire to the foil of the next V_OUT wire, wind it around once, and continue until you have done that to all of the wires. Using a pliers, crimp the wire loops into good contact with the foil.
 </p>


</div>
	<div class="clearfix"></div>

</div>

</div>

<div id="content4" class="sidebar-content col-sm-8">	
	<h3> Testing</h3>




</div>

