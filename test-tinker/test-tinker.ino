const int ledPin = 11;  // Pin where the LED is connected

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  delay(2000);                // Wait for 2 seconds

  digitalWrite(ledPin, LOW);   // Turn the LED off
  delay(2000);                // Wait for 2 seconds
}



