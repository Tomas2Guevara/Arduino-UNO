void setup() {
  pinMode(12, OUTPUT); //Amarillo
  pinMode(10, OUTPUT); //rojo
  pinMode(8, OUTPUT);  //Azul     
}

void loop(){
  digitalWrite(8,HIGH);
  delay(5000);
  digitalWrite(8,LOW);
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(5000);
  digitalWrite(10,LOW);
  
  
  
}
