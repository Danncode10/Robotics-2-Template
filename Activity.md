# Activity

## Project Title

Activity 3 - Ultrasonic Sensor and Motor Vehicle Prototype

## Project Description

Create a prototype for a vehicle that will use a motor to move forward. Use an ultrasonic sensor to detect an obstacle. If an obstacle is detected within an appropriate distance, make the vehicle reverse.

## Objectives

- Connect an ultrasonic sensor to detect distances to obstacles.
- Connect a motor (DC motor via motor driver or continuous servo) to propel a vehicle.
- Program the Arduino to move the vehicle forward by default.
- Program the Arduino to read distance from the ultrasonic sensor and reverse the motor when an obstacle is within a set distance threshold.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Ultrasonic Sensor (e.g., HC-SR04) | To detect obstacles |
| 1 | Motor Driver Module / Shield | To drive the motor (if using DC motor) |
| 1 | Motor (DC Motor or Servo) | For vehicle movement |
| 1 | External Power Supply | For the motor/driver (e.g., 9V Battery or battery pack) |
| 1 | Breadboard | For circuit connections |
| 1 | USB cable | |
| 10+ | Jumper wires | |

## Pin Assignment

*(Assuming HC-SR04 Ultrasonic Sensor and a generic Motor Driver with 2 control pins for 1 motor)*

| Arduino Pin | Connected Component | Purpose |
| --- | --- | --- |
| D2 | Ultrasonic ECHO pin | Read reflected pulse |
| D3 | Ultrasonic TRIG pin | Trigger ultrasonic pulse |
| D4 | Motor Driver IN1 (or Servo signal pin) | Motor direction control 1 |
| D5 | Motor Driver IN2 | Motor direction control 2 (if applicable) |
| 5V | Ultrasonic VCC | Sensor power |
| GND | All component grounds | Common ground |

## Expected Behavior

When the sketch starts, the motor rotates in a direction that moves the vehicle forward. The ultrasonic sensor continuously checks the distance ahead. When an obstacle is detected within the set threshold (e.g., 15 cm), the motor direction reverses to back the vehicle away.

## Build Checklist

- [ ] Components prepared
- [ ] Wiring completed (ensure common grounds)
- [ ] Code uploaded
- [ ] Distance threshold tuned
- [ ] Project tested
- [ ] Documentation updated

## Observations

Observe the responsiveness of the ultrasonic sensor and the transition speed of the motor switching from forward to reverse.

## Submission Notes

Submit the Arduino sketch folder `arduino/UltrasonicMotorPrototype/` and this activity documentation.
