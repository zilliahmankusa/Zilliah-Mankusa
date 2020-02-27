#include <Wire.h>
#include <Stepper.h>
#include <PubSubClient.h>
#include "AntaresEthernetShield.h"
#define projectName "moissensor"
#define deviceName "MQ-2"

//Identifiakasi setiap sensor
int redLed = 8;
int buzzer = 9;
int sensor = A0;   


// sensor flame 
void setup() {
Serial.begin(9600);
  pinMode(led, OUTPUT);
}
 
void loop() {
  nilaisensor = analogRead(sensor);
  Serial.print("Data yang terbaca :");
  Serial.println(nilaisensor);
  digitalWrite(led, HIGH);
  delay(nilaisensor);
  digitalWrite(led, LOW);
  delay(nilaisensor);
}

//sensor MQ2
int smokeA0 = A0;
int batasNilai = 100;
int pos = 0;
int analogSensor ;
void setup()
{
  Serial.begin(9600);
  pinMode(smokeA0, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(redLed, OUTPUT);
}
    
void gas(){
  int analogSensor = analogRead(smokeA0);
  Serial.println(analogSensor);
  if (analogSensor > 100)
     
  {
    //lampu led nyala
    digitalWrite(redLed, HIGH);
    //buzzer bunyi
    tone(buzzer, 2000, 1000);
  }
  else
  { 
    digitalWrite(redLed, LOW);

    //buzzer off
    noTone(buzzer);
  }
} 
