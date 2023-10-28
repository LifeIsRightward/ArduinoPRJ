int Red = 6;
int Green = 5;
int Blue = 3;
int isClicked = 0;
void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT);
}

void loop() {
 int btn = digitalRead(12);
 analogWrite(Red, 0);
 analogWrite(Green, 0);
 analogWrite(Blue, 0);
 
 int in = map(analogRead(A0), 0,1023, 262, 494);
 int LedIn = map(analogRead(A0), 0, 1023, 0, 255);
   
 char pr[30];
 sprintf(pr, "ZodoTranslateToin = %d", in);
 Serial.println(pr);
if(btn == HIGH){
  if(isClicked == 0){
      if(in < 293){
    analogWrite(Red, LedIn);
    tone(8, 262, 300);
    delay(400);
    noTone(8);
  }else if(in < 331){
    analogWrite(Red, LedIn);
    tone(8, 294, 300);
    delay(400);
    noTone(8);
  }else if(in < 350){
    analogWrite(Red, LedIn);
    tone(8, 330, 300);
    delay(400);
    noTone(8);
  }
  else if(in < 393){
    analogWrite(Red, LedIn);
    tone(8, 349, 300);
    delay(400);
    noTone(8);
  }
  else if(in < 441){
    analogWrite(Red, LedIn);
    tone(8, 392, 300);
    delay(400);
    noTone(8);
  }
  else if(in < 495){
    analogWrite(Red, LedIn);
    tone(8, 440, 300);
    delay(400);
    noTone(8);
  }
  else if(in < 524){
    analogWrite(Red, LedIn);
    tone(8, 494, 300);
    delay(400);
    noTone(8);
  }
  isClicked = 1;
  }else{
    analogWrite(Red, 0);
    isClicked = 0;
   }
}
  
}
  
