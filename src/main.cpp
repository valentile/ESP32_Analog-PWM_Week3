#include <Arduino.h>

int potPin = 36;
int ledPin[] = {23,19,18,5,17,16,4,0};

void setup() {
  for(int i =0;i<8;i++ ){
    pinMode(ledPin[i],OUTPUT);
  }
}

void loop() {
  /*
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){
    ledcWrite(0, dutyCycle);
    delay(10);
  }
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(0, dutyCycle);
    delay(10);
  }*/
 /*
 int potValue = analogRead(potPin);
  int dutyCycle = map(potValue, 0, 4095, 0, 255);
  ledcWrite(0, dutyCycle);
  delay(10);
  */
 int val_Analog = analogRead(potPin);
 if(val_Analog < 500){
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],LOW);
  digitalWrite(ledPin[2],LOW);
  digitalWrite(ledPin[3],LOW);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
 }
 else if(val_Analog > 501 && val_Analog < 1000){
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],LOW);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
 }
 else if(val_Analog > 1001 && val_Analog < 2000){
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],HIGH);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
 }
 else if(val_Analog > 2001){
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],HIGH);
  digitalWrite(ledPin[5],HIGH);
  digitalWrite(ledPin[6],HIGH);
  digitalWrite(ledPin[7],HIGH);
 }
}