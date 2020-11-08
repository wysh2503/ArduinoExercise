/*Example sketch to control a 28BYJ-48 stepper motor with ULN2003 driver board, 
AccelStepper and Arduino UNO: number of steps/revolutions. 
More info: https://www.makerguides.com
No acceleration/decceleration control*/
// Include the AccelStepper library:
#include <AccelStepper.h>

// Motor pin definitions:
#define motorPin1  8      // IN1 on the ULN2003 driver
#define motorPin2  9      // IN2 on the ULN2003 driver
#define motorPin3  10     // IN3 on the ULN2003 driver
#define motorPin4  11     // IN4 on the ULN2003 driver

// Define the AccelStepper interface type; 4 wire motor in FULL step mode:
#define MotorInterfaceType 4

// Initialize with pin sequence IN1-IN3-IN2-IN4 for using the AccelStepper library with 28BYJ-48 stepper motor:
AccelStepper stepper = AccelStepper(MotorInterfaceType, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
  // Set the maximum steps per second: (unstable if step/sec over 500)
  stepper.setMaxSpeed(500);
}

void loop() {
  // Set the current position to 0:
  stepper.setCurrentPosition(0);
  // Run the motor forward at 500 steps/second until the motor reaches 2048 steps (1 revolution):
  while (stepper.currentPosition() != -2048) {
    stepper.setSpeed(-500);
    stepper.runSpeed();
  }
  delay(1000);
  // Reset the position to 0:
  stepper.setCurrentPosition(0);
  // Run the motor backwards at 500 steps/second until the motor reaches -2048 steps (1 revolution):
  while (stepper.currentPosition() != 2048) {
    stepper.setSpeed(500);
    stepper.runSpeed();
  }
  delay(1000);
  // Reset the position to 0:
  stepper.setCurrentPosition(0);
  // Run the motor forward at 500 steps/second until the motor reaches 4096 steps (2 revolutions):
  while (stepper.currentPosition() != -4096) {
    stepper.setSpeed(-500);
    stepper.runSpeed();
  }
  delay(3000);
}
