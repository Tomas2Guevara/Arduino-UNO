int Trig = 10;
int Eco = 9;
int LED = 3;
int Duracion;
int Distancia;


void setup() {
  pinMode(Trig, OUTPUT);
  pinMode(Eco, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600); //llamamos al display integrado del IDE, el valor 9600 es la velocidad de comunicación
 
 

}

void loop() {
  digitalWrite(Trig, HIGH); //LAs primeras lineas depende de las intruscciones del fabricante
  delay(1);
  digitalWrite(Trig, LOW);
  Duracion = pulseIn(Eco,HIGH); // mide el tempo en el que ocurre la emisión/recepción
  Distancia = Duracion / 58.2; // valor numerico que depende del sensor
  Serial.println(Distancia);
  delay(200);
  if(Distancia <=20 && Distancia>=0){  //sirve para hacer cosas de acuerdo a la distancia
    digitalWrite(LED,HIGH);
    delay(Distancia*10);
    digitalWrite(LED, LOW);
  }
  


 
}
