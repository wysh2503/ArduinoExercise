int analogPin = A3;
int data = 0;
float data1;
char userInput;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    userInput = Serial.read();
      if (userInput == 'g');{
        data = analogRead(analogPin);
        data1 = map(data, 0,1023, 0 ,5.);
        Serial.print(data);
        Serial.print("Input Voltage at A3 = ");
        Serial.println(data1);
      }
  }
  
}
