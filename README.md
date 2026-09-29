# Smart Radar Eye 📡

Arduino-based ultrasonic distance measurement system.

#Day 1 — Ultrasonic Distance Measurement

# Hardware
- Arduino Uno
- HC-SR04 ultrasonic sensor

# Working Principle
Arduino sends a trigger pulse to the HC-SR04.
The sensor sends an ultrasonic burst and detects its reflection. 
The Arduino measures the ECHO pulse duration and calculates the distance.

# What I Learned
- TRIG and ECHO signals
- pulseIn()
- Time-to-distance conversion
- Round-trip distance calculation
- Serial Monitor

# Result
Successfully measured distance in centimeters.

# Next
Servo-based scanning

 Day 2 — Servo-Based Scanning 📡

# Hardware
- Arduino Uno
- HC-SR04 ultrasonic sensor
- SG90 servo motor

# What I Built
Added an SG90 servo to rotate the ultrasonic sensor and scan across 180°.

# What I Learned
- Using the Servo.h library
- Servo.attach()
- Servo.write()`
- Using for loops to sweep the servo
- Combining servo angle with ultrasonic distance
- Displaying angle and distance through Serial Monitor

# Result
Successfully created a servo-based scanning system that measures distance at different angles.

# Evidence
- Radar setup photo
- Serial Monitor photo
- Demonstration video

# Next
Digital radar visualization.

