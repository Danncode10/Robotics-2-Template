# Activity

## Project Title

Activity 3 - Ultrasonic Sensor and Servo Motor Prototype

## Project Description

Create a prototype that uses an ultrasonic sensor to detect obstacles and a servo motor to react. If the distance to an obstacle is greater than 3cm, the servo stays in the leftmost position. If an obstacle is detected within 3cm, the servo moves to the rightmost position.

## Objectives

- Connect an ultrasonic sensor to detect distance.
- Connect a servo motor to the Arduino.
- Program the Arduino to read distance from the ultrasonic sensor.
- Program the servo to stay in the left position (0 degrees) when distance > 3cm, and move to the right position (180 degrees) when distance <= 3cm.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Ultrasonic Sensor (e.g., HC-SR04) | To detect obstacles |
| 1 | 9G Servo Motor | To visually indicate detection |
| 1 | Breadboard | For circuit connections |
| 1 | USB cable | |
| 10+ | Jumper wires | |

## Pin Assignment

| Arduino Pin | Connected Component | Purpose |
| --- | --- | --- |
| D2 | Ultrasonic ECHO pin | Read reflected pulse |
| D3 | Ultrasonic TRIG pin | Trigger ultrasonic pulse |
| D4 | Servo Signal | Control servo position |
| 5V | Ultrasonic & Servo VCC | Component power |
| GND | All component grounds | Common ground |

## Expected Behavior

When the sketch starts, the ultrasonic sensor continuously checks the distance ahead. As long as the distance is greater than 3 cm, the servo motor remains positioned to the left (0 degrees). If an object comes within 3 cm, the servo motor swings to the right (180 degrees) and stays there until the obstacle is removed.

## Build Checklist

- [ ] Components prepared
- [ ] Wiring completed (ensure common grounds)
- [ ] Code uploaded
- [ ] Distance threshold tuned to 3cm
- [ ] Project tested
- [ ] Documentation updated

## Observations

Observe the responsiveness of the ultrasonic sensor and the speed at which the servo moves between the left and right positions.

## Submission Notes

Submit the Arduino sketch folder `arduino/UltrasonicServoPrototype/` and this activity documentation.
