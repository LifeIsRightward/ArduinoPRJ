int notes[] = {392, 392, 330, 349, 392, 440, 440, 392, 392, 523, 659, 587, 523, 587}; // 음계 HZ 해당 배열
int times[] = {500, 500, 250, 250, 500, 500, 500, 1000, 500, 500, 500, 250, 250, 1500};
void setup() {
}

void loop() {
  for(int i = 0; i<14; i++){
    tone(8, notes[i], times[i]);
    delay(times[i]+200); // 유지시간은 실행시간보다 조금 더 길게하는게 좋다.
    noTone(8);
  }
}
