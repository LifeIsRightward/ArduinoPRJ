void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int light = map(analogRead(A0), 0, 1023, 255, 0);
  analogWrite(9, light);

  char pr[12];
  sprintf(pr, "Light = %d", analogRead(A0));
  Serial.println(pr);
  delay(150);
}
