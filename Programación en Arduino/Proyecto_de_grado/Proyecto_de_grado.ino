#include <DHT.h> // LIBRERIA DHT22
#define DHTTYPE DHT22  // DEFINICON DEL SENSOR
int SensorPin = A0; // Se define puerto de arduino para conectar el higrometro
const int DHTPin = 5;    

DHT dht(DHTPin, DHTTYPE);
void setup() {
 Serial.begin(9600);// Comunicacion serial
  Serial.println("DHTxx test!");// Impresion de inicio
Serial1.begin(19200);//segunda comunicacion serial
  dht.begin();//comunicacion con DHT22

}

void loop() {
  DHT22; higrometro;

}

void higrometro () {
    int humedad = analogRead(SensorPin); //Se define la variable humedad
  Serial1.println(humedad); //Permite imprimir los datos 

  if(humedad=460) 
  {
    digitalWrite(13,HIGH);//Hechar agua
  }
  else
  {
    digitalWrite(13,LOW);//No hechar agua
  }
  delay(1000);
  
}
void DHT22 (){
  delay(2000);//Tiempo de actualizacion de la lectura
  float h = dht.readHumidity(); // lecturas de humedad
  float t = dht.readTemperature();//lecturas de temperatura

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!"); // Informa si no hay conexion con el sensor
    return;
  }


  Serial.print("Humidity: "); // Imprime texto humedad 
  Serial.print(h);//Imprime valor de la humedad
  Serial.print(" %\t");
  Serial.print("Temperature: "); //Imprime texto temperatura 
  Serial.print(t);//Imprime valor de la temperatura
  Serial.print(" *C ");//Imprime la escala de la temperatura 
}
