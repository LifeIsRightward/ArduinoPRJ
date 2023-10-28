void setup() {
 Serial.begin(9600);
 pinMode(2, OUTPUT);
 pinMode(3, INPUT);
 //pinMode(8, OUTPUT);

}

void loop() {
  digitalWrite(2, LOW); // 더 정확한 값을 위해서 초기화 시키기 위함임. 잠깐 꺼뒀다 다시 실행시킬거임 ㅇㅇ
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  long duration = pulseIn(3, HIGH); //purseIn 펄스가 들어왔다. 3번의 에코핀에 HIGH로
  if(duration == 0){
    return;
  }

  long distance = duration / 58.2; // 29.1 마이크로 초 : 1cm = 실제 걸린 시간 : x(거리) | 시간 = 거리 / 29.1 마이크로 초 근데 갔다 왔으니까 58.2 마이크로 초

  char pr[12];
  sprintf(pr, "distance = %d", distance);
  Serial.println(pr);

  if(distance <10){
    tone(8, 262, 1000);
    delay(80);
    noTone(8);
  }else if(distance <20){
    tone(8, 262, 1000);
    delay(300);
    noTone(8);
  }else if(distance <30){
    tone(8, 262, 1000);
    delay(600);
    noTone(8);
  }
}
