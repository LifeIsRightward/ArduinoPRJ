void setup() {
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
 int isClick = digitalRead(8);

 if(isClick == HIGH){
    digitalWrite(2, HIGH);
    delay(1000);
    analogWrite(3, 255);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
    analogWrite(3, 0);
    delay(1000);
 }else{
    digitalWrite(2, LOW);
    analogWrite(3, 0);
 }
}
