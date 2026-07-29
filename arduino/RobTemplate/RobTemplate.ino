/*
  Project: RobTemplate
  Subject: Arduino Electronics / Robotics

  Fill in:
  - Project behavior
  - Component list
  - Pin assignments
  - Test notes
*/

// Pin assignments
const int LED_PIN = 13;

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);

  Serial.println("RobTemplate started");
}

void loop() {
  // Replace this sample blink behavior with your project logic.
  digitalWrite(LED_PIN, HIGH);
  delay(500);

  digitalWrite(LED_PIN, LOW);
  delay(500);
}

