int LED = 3;
int BRILLO; 
int Pot = 0;

void setup() {
 pinMode(LED,OUTPUT );
 // Las entrdas analógicas no requieren inicialización (Pot)
}

void loop() {
  BRILLO = analogRead(Pot)/4; //Dividimos por 4 ya que el potencion¿metro admite un rango 4 veces mayor que el led
  analogWrite(LED,BRILLO);
  

 
 }
