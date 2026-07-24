<!DOCTYPE html>
<html lang="en">
<body>

<div class="container">

<h1>Automatic Water Dispenser</h1>

<div class="card">
<b>Project Name:</b> Water Dispenser<br>
<b>Name:</b> Gurupreet Kumar<br>
<b>Class:</b> 12 (2026)<br>
<b>Developed During:</b> Summer Vacation 2026
</div>

<h2>About the Project</h2>

<p>
This is an automatic water dispenser built using an IR obstacle detection sensor.
I created this project during my Summer Vacation 2026 to solve a simple problem at
home.
</p>

<p>
During summer, taking drinking water from a bottle or a traditional matka
(water pot) repeatedly was inconvenient. I wanted a touch-free and comfortable
way to dispense water. After building this project, my family adopted it within
a few hours and now everyone uses it every day.
</p>

<h2>Components Used</h2>

<ul>
<li>Raspberry Pi Pico 2W Microcontroller</li>
<li>12V Diaphragm Water Pump</li>
<li>Relay Module</li>
<li>IR Object Detection Sensor</li>
<li>Breadboard</li>
<li>Jumper Wires</li>
<li>Water Pipe</li>
</ul>

<h2>Version 1</h2>

<p>
Initially, I placed the IR sensor just below the water outlet. Whenever any
object such as a glass, bottle, utensil, or hand came in front of the sensor,
the pump started dispensing water.
</p>

<p>
Although it worked, there was a drawback. Since the relay and pump required a
few milliseconds to stop, a few drops of water continued to fall after removing
the object. This caused unnecessary water wastage and reduced hygiene inside the
kitchen.
</p>

<h2>Version 2 (Current Design)</h2>

<p>
To solve this problem, I redesigned the system. I created a separate hole and
mounted the IR sensor there instead of placing it near the water outlet.
</p>

<p>
Now the user intentionally places a hand over the sensor to start dispensing
water. Since the sensor is independent of the glass or bottle position, I have
full control over when water is dispensed. This eliminated accidental water
drops and made the system much more convenient.
</p>

<h2>Outcome</h2>

<ul>
<li>Successfully working prototype.</li>
<li>Used daily by my family.</li>
<li>Touch-free water dispensing.</li>
<li>Improved hygiene.</li>
<li>Reduced accidental water wastage.</li>
<li>Simple and low-cost design.</li>
</ul>

<h2>Future Improvements</h2>

<ul>
<li>3D printed enclosure</li>
<li>PCB instead of breadboard</li>
<li>Rechargeable battery backup</li>
<li>Adjustable water dispensing time and also AI can be used for seeing the glass and water level, and it will remove the IR sensor.</li>
<li>Water level monitoring</li>
</ul>

<footer>
Designed and Developed by <b>Gurupreet Kumar</b><br>
Summer Vacation 2026
</footer>

</div>

</body>
</html>
