// Activity 3 - Ultrasonic Sensor and Motor Vehicle Prototype

// Pin Constants
const int ECHO_PIN = 2;
const int TRIG_PIN = 3;
const int MOTOR_IN1 = 4;
const int MOTOR_IN2 = 5;

// Settings
const int DISTANCE_THRESHOLD = 15; // Centimeters

void setup() {
  Serial.begin(9600);
  
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);
  
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

void moveForward() {
  digitalWrite(MOTOR_IN1, HIGH);
  digitalWrite(MOTOR_IN2, LOW);
}

void moveReverse() {
  digitalWrite(MOTOR_IN1, LOW);
  digitalWrite(MOTOR_IN2, HIGH);
}

void loop() {
  long distance = getDistance();
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if (distance <= DISTANCE_THRESHOLD) {
    // Obstacle detected, move reverse
    moveReverse();
    // Allow it to reverse for a moment before checking again
    delay(500); 
  } else {
    // Path clear, move forward
    moveForward();
  }
  
  delay(50);
}
