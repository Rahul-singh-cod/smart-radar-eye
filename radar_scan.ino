#include<Servo.h>

Servo radarServo;
const int trigPin=13;
const int echoPin=12;
const int ServoPin=8;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
radarServo.attach(ServoPin);                                                                                                                                                                                                                                          
Serial.begin(9600);
}

void loop() {
// Sweep from (0 to 180)degrees
for(int angle =180;angle>=0;angle--){

  radarServo.write(angle);
  delay(40);

// trigger ultrasonic measurement
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin,LOW);

  long duration = pulseIn(echoPin,HIGH);

  float distance= duration*0.0343/2;

  Serial.print("Angle:");
  Serial.print(angle);
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
  }
 // Sweep back from (180 to 0)degrees
for(int angle =0;angle<=180;angle++){

  radarServo.write(angle);
  delay(40);

// trigger ultrasonic measurement
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin,LOW);

  long duration = pulseIn(echoPin,HIGH);

  float distance= duration*0.0343/2;

  Serial.print("Angle:");

  Serial.print(angle);
  
  Serial.print("Distance:");
  
  Serial.print(distance);
  
  Serial.println("cm");
  }
}