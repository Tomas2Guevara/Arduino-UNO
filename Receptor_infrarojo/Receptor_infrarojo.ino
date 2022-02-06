#include <IRremote.h>    // importa libreria IRremote
#define B_1 0x7308CF //decinimos a B-1 como el codigo del boón 1 (0x para dontar que es hexagesimal)
#define B_2 0xB304CF
#define B_3 0x330CCF

int SENSOR = 11;        // sensor KY-022 a pin digital 11  
int LR = 2;
int LV = 3;
int LA = 4; 
void setup() { 
  Serial.begin(9600);             // inicializa comunicacion serie a 9600 bps
  IrReceiver.begin(SENSOR, DISABLE_LED_FEEDBACK);     // inicializa recepcion de datos
  pinMode(LR, OUTPUT); // declaro los leds como salidas
  pinMode(LV, OUTPUT);
  pinMode(LA, OUTPUT);
  
} 

void loop() { 
   if (IrReceiver.decode()) {        // si existen datos ya decodificados
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // imprime valor en hexadecimal en monitor
    if (IrReceiver.decodedIRData.decodedRawData == B_1)   // si codigo recibido es igual a Boton_1
    digitalWrite(LR, !digitalRead(LR)); // enciende o apaga componente rojo

    if (IrReceiver.decodedIRData.decodedRawData == B_2)   // si codigo recibido es igual a Boton_2
    digitalWrite(LV, !digitalRead(LV)); // enciende o apaga componente verde

    if (IrReceiver.decodedIRData.decodedRawData == B_3)   // si codigo recibido es igual a Boton_3
    digitalWrite(LA, !digitalRead(LA)); // enciende o apaga componente azul
    
    IrReceiver.resume();        // resume la adquisicion de datos
  }
  delay (100);            // breve demora de 100 ms.
}
