const int RED_PIN = 11;
const int GREEN_PIN = 10;
const int BLUE_PIN = 9;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void showColor(bool r, bool g, bool b) {
  digitalWrite(RED_PIN, r ? HIGH : LOW);
  digitalWrite(GREEN_PIN, g ? HIGH : LOW);
  digitalWrite(BLUE_PIN, b ? HIGH : LOW);
}

void loop() {
  showColor(true, false, false);   // Red
  delay(700);
  showColor(false, true, false);   // Green
  delay(700);
  showColor(false, false, true);   // Blue
  delay(700);
  showColor(true, true, false);    // Yellow
  delay(700);
  showColor(false, true, true);    // Cyan
  delay(700);
  showColor(true, false, true);    // Magenta
  delay(700);
  showColor(true, true, true);     // White
  delay(700);
  showColor(false, false, false);  // Off
  delay(500);
}
