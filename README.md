# Smart Radar Eye 📡

Arduino-based ultrasonic distance measurement system.

Day 1 — Ultrasonic Distance Measurement

Hardware
- Arduino Uno
- HC-SR04 ultrasonic sensor

Working Principle
Arduino sends a trigger pulse to the HC-SR04.
The sensor sends an ultrasonic burst and detects its reflection. 
The Arduino measures the ECHO pulse duration and calculates the distance.

What I Learned
- TRIG and ECHO signals
- pulseIn()
- Time-to-distance conversion
- Round-trip distance calculation
- Serial Monitor

 Result
Successfully measured distance in centimeters.

### Next
Servo-based scanning.
