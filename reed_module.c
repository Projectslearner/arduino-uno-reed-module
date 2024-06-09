/*
    Project name : Reed module
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-reed-module
*/

const int led = 12;       // Define the LED pin
const int digitalPin = 2; // Define the digital interface for the reed module
const int analogPin = A1; // Define the analog interface for the reed module
int digitalVal;            // Variable to store digital readings
int analogVal;             // Variable to store analog readings

void setup()
{
  pinMode(led, OUTPUT);        // Set LED pin as output
  pinMode(digitalPin, INPUT);  // Set digital pin for reed module as input
  Serial.begin(9600);          // Initialize serial communication
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if (digitalVal == HIGH) // If magnetic field is detected
  {
    digitalWrite(led, HIGH); // Turn ON Arduino's LED
  }
  else
  {
    digitalWrite(led, LOW); // Turn OFF Arduino's LED
  }

  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // Print analog value to serial monitor

  delay(100); // Delay for stability
}
