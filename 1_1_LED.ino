#define R_LED 5

void setup() {
  pinMode(R_LED, OUTPUT)
}

void loop() {
  digitalWrite(R_LED, HIGH);
  delay(1000);
  digitalWrtie(R_LED, LOW);
  delay(1000);
}
