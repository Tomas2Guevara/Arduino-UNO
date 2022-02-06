int X;
int Y;
int Led_izq = 3; 
int Led_der = 5;
int Led_abj = 6;
int Led_arb = 9;
int Puls = 10;
int Led_sw = 11;
int sw;

void setup() {
  pinMode(Led_izq, OUTPUT);
  pinMode(Led_der, OUTPUT);
  pinMode(Led_abj, OUTPUT);
  pinMode(Led_arb, OUTPUT);
  pinMode(Led_sw, OUTPUT);
  pinMode(Puls, INPUT);
}

void loop() {
 X = analogRead(A0);
 Y = analogRead(A1);
 sw = digitalRead(Puls);
 if (X>=0 && X<=480){
  analogWrite(Led_izq, map(X, 0, 480, 255, 0));
 } else {
  analogWrite(Led_izq, 0);
 }
  if (X>=520 && X<=1023){
  analogWrite(Led_der, map(X, 520, 1023, 0, 255));
 } else {
  analogWrite(Led_der, 0);
 }
  if (Y>=520 && Y<=1023){
  analogWrite(Led_arb, map(X, 520, 1023, 0, 255));
 } else {
  analogWrite(Led_arb, 0);
 }
 if (Y>=0 && Y<=480){
  analogWrite(Led_abj, map(X, 0, 480, 255, 0));
 } else {
  analogWrite(Led_abj, 0);
 }
 digitalWrite(Led_sw, !sw);

}
