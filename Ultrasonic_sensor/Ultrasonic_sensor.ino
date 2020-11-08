//Measure distance from HC-SR04 ultrasonic sensor
//Use speed of sound = 343 m/s
int trigPin = 12;
int echoPin = 11;
int pingTravTime;
float pingTravDist;
float distToTarget;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTravTime = pulseIn(echoPin,HIGH);
delay(25);
pingTravDist = 350.*pingTravTime/1000000.;
distToTarget = pingTravDist/2.*100.;
if (distToTarget >200 || distToTarget<5){
  Serial.println("Out of Range");
  }
  else {
  Serial.print("Measured distance = ");
  Serial.print(distToTarget);
  Serial.println(" cm");
  delay(500);
  }
}
