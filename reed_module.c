/*
    Project name : Arduino Uno Reed Module
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-reed-module
*/

const int reedPin = 2;  // Digital pin connected to the reed switch module

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(reedPin, INPUT);  // Set reed pin as input
}

void loop() {
  int reedState = digitalRead(reedPin);  // Read reed switch state
  
  if (reedState == HIGH) {
    Serial.println("Reed switch closed (magnet detected)");
  } else {
    Serial.println("Reed switch open (no magnet)");
  }
  
  delay(500);  // Delay for readability
}
