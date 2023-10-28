void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); //Trig - 초음파 발생
  pinMode(3, INPUT); //Echo - 신호를 받아야함.
}

void loop() {
  analogWrite(9, 0); //루프를 돌때마다 처음은 꺼놓은 상태.
  analogWrite(10, 0);
  analogWrite(11, 0);

  digitalWrite(2, HIGH); //초음파 - Trig는 HIGH가 들어오면 신호가 발사됨.
  delayMicroseconds(10);//아두이노보드를 찰나만 멈춤 - HIGH신호를 잠깐 멈춤. 계속보내면 언제보낸건지 모르니까 ㅇㅇ
  digitalWrite(2, LOW); // 초음파 그만 발사해 Trig!!라는 뜻 LOW를 줘서 이제 Trig는 초음파를 발사하지않음.

  long duration = pulseIn(3, HIGH); //신호가 들어오는 3번핀이 HIGH가 되는 시간을 duration으로 반환 3번은 Echo핀임.
  //Echo핀에 초음파가 들어오는걸 확인하는게 pulseIn 함수임.
  if(duration == 0){ //측정이 안되면 아래문장들은 실행안하게끔 loop로 바로 돌아가게 해줌.
    return; // loop로 돌아감
  }

  long distance = duration / 58.2; //58.2인 이유 초음파는 29.1 마이크로초에 1cm를 감. 왔다 갔다니까 2배를 곱하니까 58.2 마이크로초 
  char pr[12];
  sprintf(pr, "distance = %d", distance);
  Serial.println(pr);
  delay(200); 
  
  if(distance < 10){
    analogWrite(11, 255);
  }else if(distance <20){
    analogWrite(10, 255);
  }else if(distance <30){
    analogWrite(9, 255);
  }
  delay(100);
}
