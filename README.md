# Arduino Electronics / Robotics Project Template

Use this folder as the starting point for each Arduino electronics or robotics activity.

## Folder Guide

- `Activity.md` - the project brief, objectives, requirements, and checklist.
- `arduino/<ProjectName>/<ProjectName>.ino` - the main Arduino sketch created for each activity.
- `docs/connections.md` - wiring notes and Mermaid diagrams for the circuit.
- `CLAUDE.md` - behavior guide for Claude when working on Arduino projects.
- `AGENTS.md` - agent entry point that points to `CLAUDE.md`.
- `.claude/commands/make-schema.md` - command prompt for generating Mermaid wiring schemas.

## Quick Start

1. Fill in `Activity.md` with the assigned project details.
2. Create a sketch folder using the project name, such as `arduino/LineFollowerRobot/LineFollowerRobot.ino`.
3. Update `docs/connections.md` with components, pin mapping, and wiring diagram.
4. Open the `.ino` file in Arduino IDE.
5. Test one component at a time before combining the full robot behavior.

## Arduino Naming Rule

The Arduino sketch folder and `.ino` file must have the same name:

```text
arduino/
  ProjectName/
    ProjectName.ino
```
