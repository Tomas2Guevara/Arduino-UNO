#include <Servo.h>
Servo servo1;
int pinServo = 7;
int PulsoMin = 650; //1 milisegudo = 0° (se expresa en micro segundo)
int PulsoMax = 2500; //2 milisegudo = 0° (se expresa en micro segundo)
int ValorPot;
int Angulo;
int Pot = 0; 
void setup() {
  servo1.attach(pinServo, PulsoMin, PulsoMax);
  //Las entradas analogicas no requieren iniciación
}

void loop() {
 ValorPot = analogRead(Pot); // leemos el potenciometro
 Angulo = map(ValorPot, 0, 1023, 0, 180);//map cambia los valores del pot (0-1023) a angulo (0-180)
 servo1.write(Angulo);
 delay(30);
}
