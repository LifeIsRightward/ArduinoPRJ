void setup() {
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  int Do = digitalRead(2);
  int Re = digitalRead(4);
  int Me = digitalRead(7);

  if(Do == HIGH){
    tone(8, 262, 500);
    delay(600);
    noTone(8);
  }
  if(Re == HIGH){
    tone(8, 294, 500);
    delay(600);
    noTone(8);
  }
  if(Me == HIGH){
    tone(8, 330, 500);
    delay(600);
    noTone(8);
  }
}
