int Rele = 2;

void setup() {
 pinMode(Rele, OUTPUT);

}

void loop() {
  digitalWrite (Rele, LOW);
  delay(5000);
  digitalWrite(Rele, HIGH);
  delay(5000);
}
