#include <DHT.h>
#include <DHT_U.h>

int sensor = 2;
int Temp;
int Hum;
DHT dht(sensor, DHT11);

 
 
 
 void setup() {
  Serial.begin(9600); //lamo al display del IDE
  dht.begin(); //inicio el sensor
}

void loop() {
  Temp = dht.readTemperature();
  Hum = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(Temp);
  Serial.print(" Humedad: ");
  Serial.println(Hum);
  delay(500);

}
