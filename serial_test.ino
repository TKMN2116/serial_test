void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(300 + random(50));
  Serial.print(',');
  Serial.print(300 + random(50));
  Serial.print("\n");
  delay(500);
}
