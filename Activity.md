# Activity

## Project Title

Alternating Eight LEDs

## Project Description

Create an Arduino circuit with 8 LEDs. LEDs 1, 3, 5, and 7 turn on at the same time, then switch off while LEDs 2, 4, 6, and 8 turn on. The two LED groups continue alternating repeatedly.

## Objectives

- Connect 8 external LEDs to Arduino digital output pins.
- Use current-limiting resistors to protect the LEDs and Arduino pins.
- Program the Arduino to alternate odd-numbered and even-numbered LED groups.

## Required Components

| Quantity | Component | Notes |
| --- | --- | --- |
| 1 | Arduino Uno / compatible board | Main controller |
| 1 | Breadboard | For LED circuit connections |
| 1 | USB cable |  |
| 8 | LEDs | Any color |
| 8 | 220 ohm resistors | One resistor for each LED |
| 9+ | Jumper wires | 8 signal wires plus ground wire |

## Pin Assignment

| Arduino Pin | Connected Component | Purpose |
| --- | --- | --- |
| D2 | LED 1 anode through 220 ohm resistor | Odd LED group |
| D3 | LED 2 anode through 220 ohm resistor | Even LED group |
| D4 | LED 3 anode through 220 ohm resistor | Odd LED group |
| D5 | LED 4 anode through 220 ohm resistor | Even LED group |
| D6 | LED 5 anode through 220 ohm resistor | Odd LED group |
| D7 | LED 6 anode through 220 ohm resistor | Even LED group |
| D8 | LED 7 anode through 220 ohm resistor | Odd LED group |
| D9 | LED 8 anode through 220 ohm resistor | Even LED group |
| GND | LED cathodes / breadboard ground rail | Common ground |

## Expected Behavior

When the sketch starts, LEDs 1, 3, 5, and 7 light together. After 0.5 seconds, those LEDs turn off and LEDs 2, 4, 6, and 8 light together. The pattern repeats continuously.

## Build Checklist

- [ ] Components prepared
- [ ] Wiring completed
- [ ] Code uploaded
- [ ] Project tested
- [ ] Documentation updated

## Observations

Record whether the odd and even LED groups alternate correctly. If an LED does not light, check its polarity, resistor connection, jumper wire, and assigned Arduino pin.

## Submission Notes

Submit the Arduino sketch folder `arduino/AlternatingEightLEDs/` and this activity documentation.
