# Claude Project Guide

This repository is a reusable template for Arduino electronics and robotics activities.

## Core Behavior

When helping with this project, act as an Arduino project assistant. Keep the workspace organized, beginner-friendly, and ready for Arduino IDE.

For every new activity:

1. Read `Activity.md` first.
2. Update `docs/connections.md` with the correct components, pin mapping, and Mermaid wiring diagrams.
3. Create an Arduino sketch folder inside `arduino/`.
4. Name the sketch folder and `.ino` file exactly the same.
5. Keep documentation and code synchronized whenever pins, modules, or behavior change.

## Arduino Sketch Rules

Arduino IDE expects this structure:

```text
arduino/
  ProjectName/
    ProjectName.ino
```

Use a clear PascalCase folder name based on the activity title.

Examples:

- `LineFollowerRobot/LineFollowerRobot.ino`
- `ObstacleAvoidingCar/ObstacleAvoidingCar.ino`
- `TrafficLightSystem/TrafficLightSystem.ino`
- `UltrasonicDistanceSensor/UltrasonicDistanceSensor.ino`

Do not keep generic placeholder sketch folders such as `RobTemplate`.

## Code Style

- Define pin constants near the top of the sketch.
- Use readable names like `TRIG_PIN`, `ECHO_PIN`, `LEFT_MOTOR_IN1`, and `BUZZER_PIN`.
- Add short comments for hardware sections and non-obvious logic.
- Keep `setup()` focused on pin modes, Serial setup, and initialization.
- Keep `loop()` focused on the repeated project behavior.
- Prefer simple functions when behavior repeats.
- Include `Serial.begin(9600)` when sensor values or debugging output are useful.

## Documentation Rules

Always update `docs/connections.md` when creating or editing a sketch.

The connections document should include:

- Component list
- Pin assignment table
- Power and ground notes
- Mermaid wiring diagram
- Mermaid signal flow diagram when useful
- Questions or assumptions for uncertain wiring

Use Mermaid fenced blocks:

```mermaid
flowchart LR
    Arduino["Arduino Uno"]
    Sensor["Sensor Module"]
    Output["Output Module"]

    Arduino -- "5V" --> Sensor
    Arduino -- "GND" --> Sensor
    Sensor -- "Signal to D2" --> Arduino
    Arduino -- "D9 signal" --> Output
```

## Activity File Rules

`Activity.md` should describe the project assignment clearly:

- Project title
- Description
- Objectives
- Required components
- Pin assignment
- Expected behavior
- Build checklist
- Observations
- Submission notes

If the user gives a project idea, fill in missing sections with reasonable placeholders and mark uncertain details as assumptions.

## Safety Checks

- Never connect motors directly to Arduino pins.
- Use a driver module for DC motors and steppers.
- Use resistors for external LEDs.
- Check voltage requirements before connecting sensors and modules.
- Keep all grounds connected together.
- Mention external power when motors, servos, or high-current modules are used.

## Expected Workflow

When asked to start or convert a project:

1. Identify the project name from `Activity.md` or the user's request.
2. Create `arduino/<ProjectName>/<ProjectName>.ino`.
3. Write a clean starter sketch for the project.
4. Update `docs/connections.md`.
5. Update `Activity.md` if project details are missing or outdated.
6. Report the created sketch path and documentation path.

