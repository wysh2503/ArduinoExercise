#include <Servo.h>
Servo myServo;
int servoPin = 9;
int servoPos = 90;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Input Servo Position");
  while (Serial.available() == 0) {
  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
  delay(50);
}
