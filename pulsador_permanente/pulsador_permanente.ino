int PULSADOR = 2; // Variable entera (int)
int LED =3;
int ESTADO = LOW;
void setup() {
  pinMode(PULSADOR,INPUT); //Conecatdo al pulsador, entrada
  pinMode(LED,OUTPUT); // LED , salida


}

void loop() {
  while(digitalRead(PULSADOR)==LOW){
    
  }
  ESTADO = digitalRead(LED);
  digitalWrite(LED,!ESTADO); // CAMBIAMOS EL VALOR DEL LED (!ESTADO)
  while(digitalRead(PULSADOR==HIGH)){
    
  }

}
