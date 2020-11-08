#include <Servo.h>
Servo myServo;
int servoPin = 9;
int servoPos = 90;
int analogPin = A3;
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(analogPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  servoPos = map(val,0,1023,160,0);
  myServo.write(servoPos);
  delay(50);
}
