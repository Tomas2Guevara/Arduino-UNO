#include <Stepper.h>

Stepper m1 (2048, 8, 10, 9, 11);// pasos completos, pines conectados (tener en cuenta el detalle de inversión)


void setup() {
  m1.setSpeed(2); // velocidad en RPM (min 1 max 3)
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()){ // ideal para verificar cantidad de pasos
    int pasos = Serial.parseInt();
    Serial.println(pasos);
    m1.step(pasos);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,0);
  }
 /**
  m1.step(512);//cantidad de pasos del motor
  delay(2000);

  m1.step(-512);//cantidad de pasos del motor (reversa)
  delay(2000);
*/


}
