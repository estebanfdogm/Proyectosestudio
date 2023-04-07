#include <DHT.h>
#include <DHT_U.h>




int const dht22=4;
}


#define DHTPIN 3
#define DHTTYPE DHT22   
DHT dht(DHTPIN, DHTTYPE);
int const Ledext=11;
int const ext=12 ;
int const hum=4;
void setup() {
  Serial.begin(9600); 
  Serial.println("DHTxx test!");
  dht.begin();
  pinMode(Ledext,OUTPUT);
  pinMode(ext,OUTPUT);
   Serial.begin(9600);


 pinMode(dht22,INPUT);

}

void loop() {
float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit
  float f = dht.readTemperature(true);
  
  // no se reconoce el sensor (intenta de nuevo).
  if (isnan(h) ||isnan(t)|| isnan(f)) {
    Serial.println("Fallo en el sensor, no se puede leer !");
    return;
  }

  // calcular indice de calor
  // enviar calculo indice de calor !
  float hi = dht.computeHeatIndex(f, h);

  Serial.print("Humedad: "); 
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperatura: "); 
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Indice de calor: ");
  Serial.print(hi);
  Serial.println(" *F");  
    lcd.setCursor (0, 0);
  lcd.print ("Hum.a y temp");
  lcd.setCursor (0, 1);
  delay(1000);
if (t>=30.00){
  digitalWrite(Ledext,HIGH); 
  digitalWrite(ext,HIGH);
  }
else {
  digitalWrite(ext,LOW);
  digitalWrite(Ledext,LOW); 
}

delay(100);
}
