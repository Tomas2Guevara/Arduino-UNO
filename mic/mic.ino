int mic =2;
int Led = 3;
int val;
int estado;
int nivel;


void setup() {
  pinMode(mic, INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin (9600);

}

void loop() {
  val = digitalRead(mic);
  if ( val == HIGH){
    estado = digitalRead(Led);
    digitalWrite(Led, !estado);
    delay(500);
  }
  
  

}
