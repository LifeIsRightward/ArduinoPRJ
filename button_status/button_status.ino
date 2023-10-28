int setStatus = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);

}

void loop() {
  if(digitalRead(4) == HIGH){
    if(setStatus == 0){
      digitalWrite(13, HIGH);
      setStatus = 1;
    }else{
      digitalWrite(13, LOW);
      setStatus = 0;
    }
    delay(1000);
  }
}
