int Pir = 2;
int Rele=3;
int Estado = 0;


void setup() {
  pinMode(Pir, INPUT);
  pinMode(Rele, OUTPUT);
  delay(20000); //teimpo que tarda el sensor en iniciarse

}

void loop() {
  Estado = digitalRead(Pir);
  if (Estado == HIGH){
    digitalWrite(Rele, LOW);
    delay(4000);
  }else{
    digitalWrite(Rele, HIGH);
  }

}
