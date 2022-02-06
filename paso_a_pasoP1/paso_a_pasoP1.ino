int I1 = 8; //asociamos cada pin del driven a cada pin de arduino
int I2 = 9;
int I3 = 10;
int I4 = 11;
int dl = 20; //predefinimos un delay de 20 ms, NO puede ser menor a 10 ms.
// PASO COMPLETO SIMPLE
int paso[4][4] =
{ 
  {1,1,0,0}, //matriz
  {0,1,1,0},
  {0,0,1,1},
  {1,0,0,1}
};

void setup() {
  pinMode(I1, OUTPUT ); // I1 = A - I2 = B, etc
  pinMode(I2, OUTPUT );
  pinMode(I3, OUTPUT );
  pinMode(I4, OUTPUT );

}

void loop() {
  // FORMA DE PASO COMPLETO simple(para hacer un giro del rotor exterioir, repetir esto 512 veces) 
  for (int i = 0; i<512; i++){
    for (int j = 0; j<4; j++){
      digitalWrite(I1, paso[j][0]); // PASO 
      digitalWrite(I2, paso[j][1]);
      digitalWrite(I3, paso[j][2]);
      digitalWrite(I4, paso[j][3]);
      delay(dl);
    }
  }
  
//-------------- FIN DEL CICLO ---------
// PARA DAR OTRA VUELTA, DESENERGIZAR LAS BOBINAS 
  digitalWrite(I1, LOW); // DETENCIÓN DE 5 SEG
  digitalWrite(I2, LOW);
  digitalWrite(I3, LOW);
  digitalWrite(I4, LOW);
  delay(5000);

}
