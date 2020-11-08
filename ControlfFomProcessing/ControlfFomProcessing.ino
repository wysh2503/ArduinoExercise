int RED = 8;
int YEL = 9;
int BLU = 10;
String value;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YEL, OUTPUT);
  pinMode(BLU, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  while (Serial.available()==0){
  }
    value = Serial.readString();
    if (value =="red"){
      digitalWrite(RED, HIGH);
    }
    else if (value =="yellow"){
      digitalWrite(YEL, HIGH);
    }
    else if (value =="blue"){
      digitalWrite(BLU, HIGH);
    }
    else if (value =="alloff"){
      digitalWrite(RED, LOW);
      digitalWrite(YEL, LOW);
      digitalWrite(BLU, LOW);
    }
}
