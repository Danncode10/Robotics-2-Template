#include <Servo.h>

// Activity 3 - Ultrasonic Sensor and Servo Motor Prototype

// Pin Constants
const int ECHO_PIN = 2;
const int TRIG_PIN = 3;
const int SERVO_PIN = 4;

// Settings
const int DISTANCE_THRESHOLD = 3; // Centimeters
const int SERVO_LEFT_POS = 0;     // Degrees
const int SERVO_RIGHT_POS = 180;  // Degrees

Servo myServo;

void setup() {
  Serial.begin(9600);
  
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  myServo.attach(SERVO_PIN);
  
  // Set initial position
  myServo.write(SERVO_LEFT_POS);
  
  Serial.println("System starting...");
}

long getDistance() {
  // Send 10us pulse to trigger pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Measure time for echo to return
  long duration = pulseIn(ECHO_PIN, HIGH, 30000); // 30ms timeout
  
  // Calculate distance in cm (Speed of sound is 340 m/s or 29 us/cm)
  if (duration == 0) return 999; // If timeout, return large distance
  return duration / 29 / 2;
}

void loop() {
  long distance = getDistance();
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if (distance > DISTANCE_THRESHOLD) {
    // Path clear (distance > 3cm), servo stays in left
    myServo.write(SERVO_LEFT_POS);
  } else {
    // Obstacle detected (distance <= 3cm), servo goes right
    myServo.write(SERVO_RIGHT_POS);
  }
  
  delay(50);
}
