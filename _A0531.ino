#include "pitches.h" 
#define R 9
#define G 10
#define B 11
int Evangelion[] = {
 NOTE_A3,NOTE_C4,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_D4,NOTE_D4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_E4,
 NOTE_E4,NOTE_G4,NOTE_A4,NOTE_D4,NOTE_C4,NOTE_G4,NOTE_G4,NOTE_E4,NOTE_G4,NOTE_G4,NOTE_A4,0}; 
int noteDurations[] = {
 1,1,2,1.5,2,2,2,2,2,2,4,1,
 1,1,2,1.5,2,2,2,2,2,1.5,1,1};
 int toneSpeed = 300;   // 設定音速
 void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
 int thisNote = 0;
 while (Evangelion[thisNote] >0) { 
int noteDuration = toneSpeed / noteDurations[thisNote];
  tone(8, Evangelion[thisNote], noteDuration);
  int pauseBetweenNotes = noteDuration * 1.30;
  delay(pauseBetweenNotes);
  analogWrite(R,random(256));
  analogWrite(G,random(256));
  analogWrite(B,random(256));
        // 準備下一個音調 
     thisNote++;
    
  }
  noTone(8);  // 播完後靜音

}
 void loop() {
  noTone(8);
}
