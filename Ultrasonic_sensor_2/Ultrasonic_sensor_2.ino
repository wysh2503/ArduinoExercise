#include <NewPing.h>
#define TRIGGER_PIN_0 8
#define ECHO_PIN_0    8
#define MAX_DISTANCE  500

NewPing sensor0(TRIGGER_PIN_0, ECHO_PIN_0, MAX_DISTANCE);

float distance0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance0 = sensor0.ping_cm();
  delay(20);

  Serial.print("Distance 0 = ");
  if (distance0 >=500 || distance0<=2){
    Serial.println("Out of Range");
  }
  else {
    Serial.print(distance0*10.);
    Serial.println(" mm");
    delay(500);
  }
}
