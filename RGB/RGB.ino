int LR=9;
int LV=10;
int LA=11;

void setup() {
 pinMode(LR, OUTPUT);
 pinMode(LV, OUTPUT);
 pinMode(LA, OUTPUT);

}

void loop() {
  miColor(255,255,0);//amarillo
  delay(2000);

  miColor(0,255,255);//celeste
  delay(2000);

  miColor(255,192,118);//amarillo
  delay(2000);

  
  
 
  

}



void miColor(int rojo, int verde, int azul){
  analogWrite(LR,rojo);
  analogWrite(LA,azul);
  analogWrite(LV,verde);
}
