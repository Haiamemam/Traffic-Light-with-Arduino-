int pinNum[] = {10,11,12};

int delayH = 1000;
int delayL = 50;

void setup() {
  for (int i =0; i<3; i++){
pinMode(pinNum[i], OUTPUT);
}
}

void loop() {
  for (int i =0; i<3; i++){
  digitalWrite (pinNum[i], HIGH);
  delay(delayH);
  digitalWrite (pinNum[i], LOW); 
  delay(delayL);
  }
}
