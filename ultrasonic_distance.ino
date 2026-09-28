const int trigPin= 11;
const int echoPin= 10;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);

digitalWrite(trigPin,LOW); 
long duration = pulseIn(echoPin,HIGH);
float distance = duration* 0.0343/2;
Serial.print("Distance:");
Serial.print(distance);
Serial.println("cm");
delay(100);

}
