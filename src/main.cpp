#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "GeefNaam") {
      digitalWrite(13, HIGH);
      Serial.println("Jeremy");
    }
    else {
      Serial.println("Oeps");
    }
  }
}
