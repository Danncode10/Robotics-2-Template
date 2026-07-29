const byte LED_PINS[] = {2, 3, 4, 5, 6, 7, 8, 9};
const byte LED_COUNT = sizeof(LED_PINS) / sizeof(LED_PINS[0]);
const unsigned long BLINK_INTERVAL_MS = 500;

bool oddLedGroupOn = true;
unsigned long previousMillis = 0;

void setup() {
  for (byte index = 0; index < LED_COUNT; index++) {
    pinMode(LED_PINS[index], OUTPUT);
  }

  updateLedGroups();
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= BLINK_INTERVAL_MS) {
    previousMillis = currentMillis;
    oddLedGroupOn = !oddLedGroupOn;
    updateLedGroups();
  }
}

void updateLedGroups() {
  for (byte index = 0; index < LED_COUNT; index++) {
    bool isOddNumberedLed = (index % 2 == 0);
    bool shouldTurnOn = isOddNumberedLed == oddLedGroupOn;

    digitalWrite(LED_PINS[index], shouldTurnOn ? HIGH : LOW);
  }
}
