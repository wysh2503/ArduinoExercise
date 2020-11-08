int analogPin = A5;
int data = 0;
int LED = 9;
int val;
char userInput;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  Serial.println(val);
  if (val>530){
    val = 530;
  }
  if (val<200){
    val = 200;
  }
  data = map(val,200,530,0,255);
  analogWrite(LED, data);
  delay(100);
}
