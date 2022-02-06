#include <Key.h>
#include <Keypad.h>

const byte Filas = 4;
const byte Columnas = 4;
char keys[Columnas][Filas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinFilas[Columnas] = {9,8,7,6};
byte pinColumnas[Filas] = {5,4,3,2};

Keypad teclado = Keypad (makeKeymap(keys), pinFilas, pinColumnas, Filas, Columnas );
char Tecla; 
char Clave[7];
char Clave_M[7] = "123456";
byte Indice = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Tecla = teclado.getKey();
  if (Tecla){
    Clave [Indice] = Tecla;
    Indice++;
    Serial.print(Tecla);
  }
  if (Indice == 6){
    if (!strcmp(Clave, Clave_M)){
      Serial.println(" Correcta");
      Indice = 0;
       }
    else{
      Serial.println(" Incorrecta");
      Indice = 0;
    }
  }
  
  
}
