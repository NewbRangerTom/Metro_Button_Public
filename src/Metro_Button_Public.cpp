//This button sketch is a template for adding multiple locations to the
//weather display sketch.

#include <Arduino.h>

// variables

int buttonPin = 8;
int buttonPin1 = 12;
int buttonPin2 = 13;
int buttonNew;
int buttonNew1;
int buttonNew2;
int buttonOld = 1;
int buttonOld1 = 1;
int buttonOld2 = 1;

// get the city code number from https://openweathermap.org/
// searching for the city after you login will add the city
// code to the browser address bar.
// example:  https://openweathermap.org/city/5879400

const char* ID  = "city_1"; // city 1
const char* ID1 = "city_2"; // city 2
const char* ID2 = "city_3"; // city 3
const char* ID3 = "city_4"; // city 4
const char* ID4 = "city_5"; // city 5
const char* ID5 = "city_6"; // city 6

String LOCATION_ID = "const char*";

int dt = 1000;
int dbt = 100;  // try this at 200 7/23/2020

void setup() {
  // to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
 
}

void loop() {
  // to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  buttonNew1 = digitalRead(buttonPin1);
  buttonNew2 = digitalRead(buttonPin2);

  if (buttonOld == 0 && buttonNew == 1) {
    if (LOCATION_ID != ID) {
      Serial.print("city_1 ");
      Serial.println(LOCATION_ID = ID);
      LOCATION_ID = ID;
    }
  }
  if (buttonOld == 1 && buttonNew == 1) {
    if (LOCATION_ID != ID1 && LOCATION_ID != ID2) {
      Serial.print("city_2 ");
      Serial.println(LOCATION_ID = ID1);
      LOCATION_ID = ID1;
    }
  }
  if (buttonOld1 == 0 && buttonNew1 == 1) {
    if (LOCATION_ID != ID2) {
      Serial.print("city_3 ");
      Serial.println(LOCATION_ID = ID2);
      LOCATION_ID = ID2;
    }
  }
  if (buttonOld1 == 1 && buttonNew1 == 1) {
    if (LOCATION_ID != ID3) {
      Serial.print("city_4 ");
      Serial.println(LOCATION_ID = ID3);
      LOCATION_ID = ID3;
    }
  }
  if (buttonOld2 == 0 && buttonNew2 == 1) {
    if (LOCATION_ID != ID4) {
      Serial.print("city_5 ");
      Serial.println(LOCATION_ID = ID4);
      LOCATION_ID = ID4;
    }
  }
  if (buttonOld2 == 1 && buttonNew2 == 1) {
    if (LOCATION_ID != ID5) {
      Serial.print("city_6 ");
      Serial.println(LOCATION_ID = ID5);
      LOCATION_ID = ID5;
    }
  }
  else {
  }
buttonOld = buttonNew;
buttonOld1 = buttonNew1;
buttonOld2 = buttonNew2;
delay(dbt);
}
