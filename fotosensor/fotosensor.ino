int Sensor = 0;
int Led = 3;
int Valor;
int PWM;

void setup() {
 pinMode(Led, OUTPUT);

}

void loop() {
 Valor = analogRead(Sensor);
 PWM = map(Valor, 0, 1023, 0, 255);
 analogWrite(Led, PWM);
// if (Valor < 500){    para prender y apagar
 // digitalWrite(Led,HIGH);
 // delay(1000);
// }
// digitalWrite(Led,LOW);

}
