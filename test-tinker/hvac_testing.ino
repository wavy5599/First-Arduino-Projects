#include <Stepper.h>

// Define the number of steps per revolution (specific to your motor)
const int stepsPerRevolution = 2048; // For 28BYJ-48 motor

// Create a Stepper object with IN1–IN4 connected to pins 8–11
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Set the motor speed (adjust as needed)
  myStepper.setSpeed(10); // Speed in RPM
  Serial.begin(9600);
  Serial.println("Stepper Motor Test");
}

void loop() {
  // Rotate motor one full revolution clockwise
  Serial.println("Rotating clockwise...");
  myStepper.step(stepsPerRevolution); 
  delay(1000); // Pause for 1 second

  // Rotate motor one full revolution counterclockwise
  Serial.println("Rotating counterclockwise...");
  myStepper.step(-stepsPerRevolution); 
  delay(1000); // Pause for 1 second
}
