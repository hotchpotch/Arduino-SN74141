
#include "SN74141.h"

#define A_PIN 5
#define B_PIN 7
#define C_PIN 8
#define D_PIN 6

SN74141 sn74141(A_PIN, B_PIN, C_PIN, D_PIN);

void setup() {
  Serial.begin(9600);
  sn74141.begin();
}

void loop() {
  for (uint8_t i = 0; i < 10; i++) {
    Serial.print("outputPin: ");
    Serial.println(i);
    sn74141.outputPin(i);
    delay(1000);
  }
}

