int red = 11;
int green = 10;
int blue = 9;
int r = 0, g = 0, b = 0;
 
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
}

void loop() {
  int isBlue = digitalRead(4);
  int isGreen = digitalRead(3);
  int isRed = digitalRead(2);
  
  if(isRed == HIGH){
//    analogWrite(red, 50);
//    analogWrite(green, 0);
//    analogWrite(blue, 0);
//    delay(1000);
//    analogWrite(red, 0);
      r+=10;
      g = 0;
      b = 0;
      if(r > 255){
        r = 0;
      }
  }
  if(isGreen == HIGH){
//    analogWrite(red, 0);
//    analogWrite(green, 50);
//    analogWrite(blue, 0);
//    delay(1000);
//    analogWrite(green, 0);
      r = 0;
      g+=10;
      b = 0;
      if(g > 255){
        g = 0;
      }
  }
  if(isBlue == HIGH){
//    analogWrite(red, 0);
//    analogWrite(green, 0);
//    analogWrite(blue, 50);
//    delay(1000);
//    analogWrite(blue, 0);
      r = 0;
      g = 0;
      b+=40;
      if(b > 255){
        b = 0;
      }
  }

  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);
  delay(10);
  
}
