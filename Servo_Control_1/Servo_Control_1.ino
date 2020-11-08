#include <Servo.h>
Servo myServo;
int servoPos = 90;
int servoPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(10);
  delay(2000);
  myServo.write(45);
  delay(500);
  myServo.write(90);
  delay(500);
  myServo.write(135);
  delay(500);
  myServo.write(160);
  delay(2000);
  myServo.write(135);
  delay(500);
  myServo.write(90);
  delay(500);
  myServo.write(45);
  delay(500);
}
