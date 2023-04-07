//
//Prueba con  dht11 con esp8266 y transmision a thinkSpeak
//UNO --- ESP8266
//TX ----- RX
//RX ----- TX
//GND --- GND
//3.3V --- VCC
//3.3V --- CH_PD o EN
//____________________________HIGROMETROS_________________________________________//
int SensorPin = A0; // Se define puerto de arduino para conectar el higrometro-1
int SensorPin2 = A1; // Se define puerto de arduino para conectar el higrometro-2
int SensorPin3 = A2; // Se define puerto de arduino para conectar el higrometro-3
int SensorPin4 = A3; // Se define puerto de arduino para conectar el higrometro-4
int SensorPin5 = A4; // Se define puerto de arduino para conectar el higrometro-5
int SensorPin6 = A5; // Se define puerto de arduino para conectar el higrometro-6
int SensorPin7 = A6; // Se define puerto de arduino para conectar el higrometro-7
int SensorPin8 = A7; // Se define puerto de arduino para conectar el higrometro-8

int riego = 6; // Declaramos el pin para el riego
int riego2 = 7; // Declaramos el pin para el riego
//______________________PELTIER______________________________________________________
//////////////////////////////Celulas de peltier/////////////////////////////////
int celdaP1= 8; //Declaramos una celda de peltier-1
int celdaP2= 9; //Declaramos una celda de peltier-2
int celdaP3= 10; //Declaramos una celda de peltier-3
//_________________________ULTRASONIDO_____________________________
int TRIG = 11;//Emisor ultrasonido
int ECO = 12;//Receptor ultrasonido
int LEDAGUA = 17;//Motobomba del tanque
int DURACION;//varible ultrasonido
int DISTANCIA;//varible ultrasonido
//__________________________LUZ_____________________________________________
int luz = 0; 
int luz2 = 0; 
int luz3 = 0;       
int valor_sensor = 0;       
int valor_limite = 230;
#define LED 20     //LED BOMBILLO DE HUERTA 
#define LDR A8     //EL SENSOR ESTA CONECTADO AL PIN A8
#define LED2 21     //LED BOMBILLO DE HUERTA 
#define LDR2 A9    //EL SENSOR ESTA CONECTADO AL PIN A8
#define LED3 22    //LED BOMBILLO DE HUERTA 
#define LDR3 A10     //EL SENSOR ESTA CONECTADO AL PIN A8

/////////////////////////////////////////////

#include <DHT.h>// Se incluye la libreria dht11
//#define IP "184.106.153.149" // thingspeak.com
//__________________________SE ASIGNA RED WIFI Y LA IP DEL THINGSPEAK______________________________//
#define SSID "FAMILIA_GM" //Nombre de la Red Wifi a la que nos conectamos
#define PASS "0r10n4124" //Contraseña de la Red Wifi
#define IP "184.106.153.149" // thingspeak.com
//___________________________________________VARIABLES A OBTENER______________________________________________________
/////////////////////////////////////////////DHT PISO 1//////////////////////////////////////////////////////////////
String GET_TEMP = "GET /update?key=NPOG9O895XRB81XD&field1="; //Campo de temperatura sensor DHT22 #1 DE REFERENCIAPISO1
String GET_HUM = "GET /update?key=NPOG9O895XRB81XD&field2="; //Campo de humedad sensor DHT22 #1 DE REFENCIA PISO1
/////////////////////////////////////////////DHT PISO 2//////////////////////////////////////////////////////////////
String GET_TEMP2 = "GET /update?key=NPOG9O895XRB81XD&field3="; //Campo de temperatura sensor DHT22 #2 DE REFERENCIAPISO2
String GET_HUM2 = "GET /update?key=NPOG9O895XRB81XD&field4="; //Campo de humedad sensor DHT22 #2 DE REFENCIAPISO2
/////////////////////////////////////////////DHT PISO 3//////////////////////////////////////////////////////////////
String GET_TEMP3 = "GET /update?key=NPOG9O895XRB81XD&field5="; //Campo de temperatura sensor DHT22 #3 DE REFERENCIAPISO3
String GET_HUM3 = "GET /update?key=NPOG9O895XRB81XD&field6="; //Campo de humedad sensor DHT22 #3 DE REFENCIAPISO3
/////////////////////////////////////////////HIGROMETROS PISO1////////////////////////////////////////////////
String GET_HUM4 = "GET /update?key=NPOG9O895XRB81XD&field7="; //Campo de humedad sensor DHT22 #3 DE REFENCIAPISO3
/////////////////////////////////////////////HIGROMETROS PISO2////////////////////////////////////////////////
String GET_HUM5 = "GET /update?key=NPOG9O895XRB81XD&field8="; //Campo de humedad sensor DHT22 #3 DE REFENCIAPISO3

//__________________________________________________DEFINIMOS TIPO Y PINES DE LOS DHT22___________________________________________________-
const int DHTPin = 2;
const int DHTPin2 = 3;
const int DHTPin3 = 4;
#define DHTTYPE DHT22 //Tipo del Sensor//DHT dht(DHT1PIN, DHT1TYPE); //Declaracion del objeto DHT

DHT dht(DHTPin, DHTTYPE);//DHT22 PISO1

DHT dht2(DHTPin2, DHTTYPE);//DHT22 PISO2

DHT dht3(DHTPin3, DHTTYPE);// DHT22 PISO3
/////////BLOQUE DE CONFIGURACIÓN///////////////////


void setup()
{
 Serial.begin(115200);//_______COMUNICACION SERIAL
 //__________________________DECLARAMOS ENTRADAS Y SALIDAS_________________________//
  pinMode(LED,OUTPUT);//BOMBILLO UV PISO1
  pinMode(LDR,INPUT);//SENSOR DE LUZ PISO1
  pinMode(LED2,OUTPUT);//BOMBILLO UV PISO2
  pinMode(LDR2,INPUT);//SENSOR DE LUZ PISO2
  pinMode(LED3,OUTPUT);//BOMBILLO UV PISO3
  pinMode(LDR3,INPUT);//SENSOR DE LUZ PISO3
  pinMode(TRIG, OUTPUT);//salida pin ultrasonido
  pinMode(ECO, INPUT);//entrada pin ultrasonido
  pinMode(LEDAGUA, OUTPUT);//salida motobomba tanque
//_______________________________COMUNICACION CON LOS DHT__________________________________

 dht.begin(); //Se inicializa sensor DHT
 //dht2.begin(); //Se inicializa sensor DHT
 //analogRead(A0); 
 Serial.begin(115200); //Se inicializa el puerto Serial para comunicarse con el Modulo Wifi ESP8266
 Serial.setTimeout(3000); //Set el Timeout en 3 segundos para Serial.find()
 Serial.println("AT\r"); //PROBAR CON \n\r
  
 delay(2000);
//__________________________COMUNICACION CON WIFI____________________________________________-
 if(Serial.find("OK")){ //Verificar si Modulo Wifi responde
    if(!connectWiFi()){ //Conectarse a la red
       Serial.println("ERROR DE CONEXION WIFI");
    }
 } else {
    Serial.println("MODULO WIFI NO RESPONDE");
 }
 //__________________________________________________________________//

}

void loop(){
//________________________________Ultrasonido__________________________________
  digitalWrite(TRIG, HIGH); //Emite pulzo
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECO, HIGH); //Decuelve valor en microsegundos
  DISTANCIA = DURACION / 55.2; //Valor en centimetros 
  Serial.println(DISTANCIA);
  delay(200); 
  if(DISTANCIA <= 40 && DISTANCIA >= 0) {
    digitalWrite(LEDAGUA, HIGH);
    delay(LEDAGUA * 10);
    digitalWrite(LEDAGUA, LOW);
    }

//___________________________________________HIGROMETROS PISO 1________________________________________________
int hlim = analogRead((SensorPin+SensorPin2+SensorPin3+SensorPin4)/4); //Se define la variable humedad
int h4 = map(hlim, 0, 1023, 100, 0);
Serial.print("Humedad tierra piso1");
Serial.println(h4);
if(h4>=460) {
    digitalWrite(riego,HIGH);//Activar el riego
  }
  else
  {
    digitalWrite(riego,LOW);//Desactivar el riego
  }
//___________________________________________HIGROMETROS PISO 2____________________________________________
int hlim2 = analogRead((SensorPin5+SensorPin6+SensorPin7+SensorPin8)/4); //Se define la variable humedad
int h5 = map(hlim2, 0, 1023, 100, 0);
Serial.print("Humedad tierra piso2");
Serial.println(h5);

if(h5>=460) {
    digitalWrite(riego2,HIGH);//Activar el riego
  }
  else
  {
    digitalWrite(riego2,LOW);//Desactivar el riego
  }
//______________________________________CONTROL DE LUZ PISO1_______________________________________
valor_sensor = analogRead(LDR); 
  luz = (5.0 * valor_sensor * 100.0)/1024.0; // FORMULA ACTUADOR DEL SENSOR 
  Serial.print(luz);  
  Serial.println(" Luz");             
  delay(300);                       
  
  if (luz >= valor_limite)
  {
    digitalWrite (LED, LOW);  //lED ENCIENDE
  }
  if (luz < valor_limite)
  {
    digitalWrite (LED, HIGH);  //LED APAGA. 
  }
//___________________________________________CONTROL DE LUZ PISO 2__________________________________________
  valor_sensor = analogRead(LDR2); 
  luz2 = (5.0 * valor_sensor * 100.0)/1024.0; // FORMULA ACTUADOR DEL SENSOR 
  Serial.print(luz2);  
  Serial.println(" Luz piso 2");             
  delay(300);                       
  
  if (luz2 >= valor_limite)
  {
    digitalWrite (LED2, LOW);  //lED ENCIENDE
  }
  if (luz2 < valor_limite)
  {
    digitalWrite (LED2, HIGH);  //LED APAGA. 
  }
//___________________________________________CONTROL DE LUZ PISO 3__________________________________________
  valor_sensor = analogRead(LDR3); 
  luz3 = (5.0 * valor_sensor * 100.0)/1024.0; // FORMULA ACTUADOR DEL SENSOR 
  Serial.print(luz2);  
  Serial.println(" Luz piso 2");             
  delay(300);                       
  
  if (luz3 >= valor_limite)
  {
    digitalWrite (LED3, LOW);  //lED ENCIENDE
  }
  if (luz3 < valor_limite)
  {
    digitalWrite (LED3, HIGH);  //LED APAGA. 
  }
//______________________________________________________________________////////
   Serial.println("DHTxx test!"); 
   float h1 = dht.readHumidity(); // Lee la humedad dht11 #1
   float t1 = dht.readTemperature(); //Lee la temperatura
   float h2 = dht.readHumidity(); // Lee la humedad dht22 #2
   float t2 = dht.readTemperature(); //Lee la temperatura
   float h3 = dht.readHumidity(); // Lee la humedad dht22 #3
   float t3 = dht.readTemperature(); //Lee la temperatura
   if (isnan(h1) || isnan(t1)) {
      Serial.println("Failed to read from DHT1 sensor!"); 
   }
      if (isnan(h2) || isnan(t2)) {
      Serial.println("Failed to read from DHT2 sensor!"); 
   }
    if (isnan(h3) || isnan(t3)) {
      Serial.println("Failed to read from DHT3 sensor!"); 
   }
   delay(1000);

   //________________________________________________________________________///
   
  if (t1<=15){
    digitalWrite(celdaP1,HIGH);
  }
  else {
    digitalWrite(celdaP1,LOW);
  }
    if (t2<=15){
    digitalWrite(celdaP2,HIGH);
  }
  else {
    digitalWrite(celdaP2,LOW);
  }
    if (t3<=15){
    digitalWrite(celdaP3,HIGH);
  }
  else {
    digitalWrite(celdaP3,LOW);
  }
//______________________________________________________PISO 1_______________________________________________________________________
 char bufferTemperatura[8]; //Crear buffer temporal para convertir float a string
 String temperatura = dtostrf(t1, 8, 3, bufferTemperatura); //Convertir de float a String 8 = longitud de String, 3 = numero de decimales
 updateTemperatura(temperatura); //Actualizar temperatura
 delay(9000); //Thingspeak nos pide un MINIMO de 15 segundos entre cada actualizacion

 char bufferHumedad[8]; //Crear buffer temporal para convertir float a string
 String humedad = dtostrf(h1, 8, 2, bufferHumedad); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad(humedad); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
 Serial.println("LEE PISO1"); 

//______________________________________________________PISO 2_______________________________________________________________________
 char bufferTemperatura2[8]; //Crear buffer temporal para convertir float a string
 String temperatura2 = dtostrf(t2, 8, 3, bufferTemperatura2); //Convertir de float a String 8 = longitud de String, 3 = numero de decimales
 updateTemperatura2(temperatura2); //Actualizar temperatura
 delay(9000); //Thingspeak nos pide un MINIMO de 15 segundos entre cada actualizacion

 char bufferHumedad2[8]; //Crear buffer temporal para convertir float a string
 String humedad2 = dtostrf(h2, 8, 2, bufferHumedad2); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad2(humedad2); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
  Serial.println("LEE PISO2"); 
//______________________________________________________PISO 3_______________________________________________________________________
 char bufferTemperatura3[8]; //Crear buffer temporal para convertir float a string
 String temperatura3 = dtostrf(t3, 8, 3, bufferTemperatura3); //Convertir de float a String 8 = longitud de String, 3 = numero de decimales
 updateTemperatura3(temperatura3); //Actualizar temperatura
 delay(9000); //Thingspeak nos pide un MINIMO de 15 segundos entre cada actualizacion

 char bufferHumedad3[8]; //Crear buffer temporal para convertir float a string
 String humedad3 = dtostrf(h3, 8, 2, bufferHumedad3); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad3(humedad3); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
  Serial.println("LEE PISO3"); 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//______________________________________________________PISO 1 HIGROMETROS_______________________________________________________________________
 char bufferHumedad4[8]; //Crear buffer temporal para convertir float a string
 String humedad4 = dtostrf(h4, 8, 2, bufferHumedad4); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad4(humedad4); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
  Serial.println("LEE YL69 PISO1"); 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
//______________________________________________________PISO 2 HIGROMETROS_______________________________________________________________________
 char bufferHumedad5[8]; //Crear buffer temporal para convertir float a string
 String humedad5 = dtostrf(h5, 8, 2, bufferHumedad5); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad5(humedad5); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
  Serial.println("LEE YL69 PISO2");

}
  //_____________________________________________PISO 1____________________________________________
    void updateTemperatura(String temperatura)//sensor 1-temperatura//
    {  
    String cmd = "AT+CIPSTART=\"TCP\",\""; //Crear el comando para comenzar una conexion TCP
    cmd += IP; //IP del sitio a conectarse (thingspeak.com)
    cmd += "\",80"; //Puerto (80)
    Serial.println(cmd); //Crear conexion
    delay(5000); //Darle 2 segundos para responder
  
    if(Serial.find("ERROR")){
    return; //No se pudo conectar
}
    temperatura.trim(); //Remover espacios e.g. "____30.00" >> "30.00"
    cmd = GET_TEMP; //Crear datos a enviar
    cmd += temperatura; //Agregar la temperatura leida
    cmd += "\r\n"; //Agregar caracteres de newline y Carriage return
    Serial.print("AT+CIPSEND="); //Indicar cuantos datos se enviaran por TCP
    Serial.println(cmd.length()); //Tamaño de los datos a enviar por TCP
    delay(5000);
  
    if(Serial.find(">")){
    Serial.print(cmd); //Enviar datos
    }
    else{
    Serial.println("AT+CIPCLOSE"); //No se pudo ejecutar, cerrar conexion TCP
 }
}
  
    void updateHumedad(String humedad)//sensor 1-humedad
    {
    String cmd = "AT+CIPSTART=\"TCP\",\"";
    cmd += IP;
    cmd += "\",80";
    Serial.println(cmd);
    delay(5000);  
    if(Serial.find("ERROR")){
    return;
 }
 
    humedad.trim();
    cmd = GET_HUM;
    cmd += humedad;
    cmd += "\r\n";
    Serial.print("AT+CIPSEND=");
    Serial.println(cmd.length());
    delay(5000);
    if(Serial.find(">")){
    Serial.print(cmd);
 }
    else{ Serial.println("AT+CIPCLOSE");
 }
 Serial.println("COMUNICACION PISO1"); }
//_____________________________________________PISO 2____________________________________________

    void updateTemperatura2(String temperatura2)//sensor 2-temperatura//
    {  
    String cmd = "AT+CIPSTART=\"TCP\",\""; //Crear el comando para comenzar una conexion TCP
    cmd += IP; //IP del sitio a conectarse (thingspeak.com)
    cmd += "\",80"; //Puerto (80)
    Serial.println(cmd); //Crear conexion
    delay(5000); //Darle 2 segundos para responder
  
    if(Serial.find("ERROR")){
    return; //No se pudo conectar
}
    temperatura2.trim(); //Remover espacios e.g. "____30.00" >> "30.00"
    cmd = GET_TEMP2; //Crear datos a enviar
    cmd += temperatura2; //Agregar la temperatura leida
    cmd += "\r\n"; //Agregar caracteres de newline y Carriage return
    Serial.print("AT+CIPSEND="); //Indicar cuantos datos se enviaran por TCP
    Serial.println(cmd.length()); //Tamaño de los datos a enviar por TCP
    delay(5000);
  
    if(Serial.find(">")){
    Serial.print(cmd); //Enviar datos
    }
    else{
    Serial.println("AT+CIPCLOSE"); //No se pudo ejecutar, cerrar conexion TCP
 }
}
  
    void updateHumedad2(String humedad2)//sensor 2-humedad
    {
    String cmd = "AT+CIPSTART=\"TCP\",\"";
    cmd += IP;
    cmd += "\",80";
    Serial.println(cmd);
    delay(5000);  
    if(Serial.find("ERROR")){
    return;
 }
 
    humedad2.trim();
    cmd = GET_HUM2;
    cmd += humedad2;
    cmd += "\r\n";
    Serial.print("AT+CIPSEND=");
    Serial.println(cmd.length());
    delay(5000);
    if(Serial.find(">")){
    Serial.print(cmd);
 }
    else{ Serial.println("AT+CIPCLOSE");
 }
Serial.println("COMUNICACION PISO2");}
//_____________________________________________PISO 3____________________________________________
void updateTemperatura3(String temperatura3)//sensor 3-temperatura//
    {  
    String cmd = "AT+CIPSTART=\"TCP\",\""; //Crear el comando para comenzar una conexion TCP
    cmd += IP; //IP del sitio a conectarse (thingspeak.com)
    cmd += "\",80"; //Puerto (80)
    Serial.println(cmd); //Crear conexion
    delay(5000); //Darle 2 segundos para responder
  
    if(Serial.find("ERROR")){
    return; //No se pudo conectar
}
    temperatura3.trim(); //Remover espacios e.g. "____30.00" >> "30.00"
    cmd = GET_TEMP3; //Crear datos a enviar
    cmd += temperatura3; //Agregar la temperatura leida
    cmd += "\r\n"; //Agregar caracteres de newline y Carriage return
    Serial.print("AT+CIPSEND="); //Indicar cuantos datos se enviaran por TCP
    Serial.println(cmd.length()); //Tamaño de los datos a enviar por TCP
    delay(5000);
  
    if(Serial.find(">")){
    Serial.print(cmd); //Enviar datos
    }
    else{
    Serial.println("AT+CIPCLOSE"); //No se pudo ejecutar, cerrar conexion TCP
 }
}
  
    void updateHumedad3(String humedad3)//sensor 3-humedad
    {
    String cmd = "AT+CIPSTART=\"TCP\",\"";
    cmd += IP;
    cmd += "\",80";
    Serial.println(cmd);
    delay(5000);  
    if(Serial.find("ERROR")){
    return;
 }
 
    humedad3.trim();
    cmd = GET_HUM3;
    cmd += humedad3;
    cmd += "\r\n";
    Serial.print("AT+CIPSEND=");
    Serial.println(cmd.length());
    delay(5000);
    if(Serial.find(">")){
    Serial.print(cmd);
 }
    else{ Serial.println("AT+CIPCLOSE");
 }
Serial.println("COMUNICACION PISO3");}
//______________________________________YL69 PISO1______________________________________________
   void updateHumedad4(String humedad4)//sensor 1-humedad
    {
    String cmd = "AT+CIPSTART=\"TCP\",\"";
    cmd += IP;
    cmd += "\",80";
    Serial.println(cmd);
    delay(5000);  
    if(Serial.find("ERROR")){
    return;
 }
 
    humedad4.trim();
    cmd = GET_HUM4;
    cmd += humedad4;
    cmd += "\r\n";
    Serial.print("AT+CIPSEND=");
    Serial.println(cmd.length());
    delay(5000);
    if(Serial.find(">")){
    Serial.print(cmd);
 }
    else{ Serial.println("AT+CIPCLOSE");
 }
Serial.println("COMUNICACION YL69 PISO 1");}
//////////////////////////////////////////////////////////////////////////////////////////////
//______________________________________YL69 PISO2______________________________________________
   void updateHumedad5(String humedad5)//sensor 1-humedad
    {
    String cmd = "AT+CIPSTART=\"TCP\",\"";
    cmd += IP;
    cmd += "\",80";
    Serial.println(cmd);
    delay(5000);  
    if(Serial.find("ERROR")){
    return;
 }
 
    humedad5.trim();
    cmd = GET_HUM5;
    cmd += humedad5;
    cmd += "\r\n";
    Serial.print("AT+CIPSEND=");
    Serial.println(cmd.length());
    delay(5000);
    if(Serial.find(">")){
    Serial.print(cmd);
 }
    else{ Serial.println("AT+CIPCLOSE");
 }
Serial.println("COMUNICACION YL69 PISO 2");}
//////////////////////////////////////////////////////////////////////////////////////////////
//_________________________________________________COMANDOS AT DEL MODULO WIFI_______________________________________________________
    boolean connectWiFi(){
  
    Serial.println("AT+CWMODE=3"); //Configurar Modulo Wifi ESP8266 en Modo 3 = Station + Access Point (Trasmitir y Recibir)
    delay(2000); //Darle tiempo para ejecutar comando
  
    String cmd="AT+CWJAP=\""; //
    cmd+=SSID;
    cmd+="\",\"";
    cmd+=PASS;
    cmd+="\"";
   
    Serial.println(cmd);
    delay(10000); //Darle 10 segundos para conectarse
  
    if(Serial.find("OK")){ 
    return true; //Conexión exitosa
 }
    else{
    return false; //No se pudo conectar
 }
Serial.println("COMUNICACION WIFI");}
