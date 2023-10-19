void setup() {
  // Sets up the LED pins as outputs
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // Alternates the LEDs
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(250);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(250);
}
