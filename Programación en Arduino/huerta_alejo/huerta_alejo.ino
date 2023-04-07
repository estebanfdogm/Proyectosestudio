
#include <DHT_U.h>

#include <DHT.h>

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
int riego = 6; // Declaramos el pin para el riego
int luz = 0; 
int valor_sensor = 0;       
int valor_limite = 230;
#define LED 5     //LED BOMBILLO DE HUERTA 
#define LDR A2     //EL SENSOR ESTA CONECTADO AL PIN A8
//__________________________SE ASIGNA RED WIFI Y LA IP DEL THINGSPEAK______________________________//
#define SSID ".....?" //Nombre de la Red Wifi a la que nos conectamos
#define PASS "1000458477Es." //Contraseña de la Red Wifi
#define IP "184.106.153.149" // thingspeak.com
//___________________________________________VARIABLES A OBTENER______________________________________________________
/////////////////////////////////////////////DHT PISO 1//////////////////////////////////////////////////////////////
String GET_TEMP = "GET /update?key=CXBUHPUK9NEWUU88&field1="; //Campo de temperatura sensor DHT22 #1 DE REFERENCIAPISO1
String GET_HUM = "GET /update?key=CXBUHPUK9NEWUU88&field2="; //Campo de humedad sensor DHT22 #1 DE REFENCIA PISO1
String GET_HUM4 = "GET /update?key=CXBUHPUK9NEWUU88&field3="; //Campo de humedad higrometro
//__________________________________________________DEFINIMOS TIPO Y PINES DE LOS DHT22___________________________________________________-
const int DHTPin = 3;
const int DHTPin2 = 4;
#define DHTTYPE DHT22 //Tipo del Sensor//DHT dht(DHT1PIN, DHT1TYPE); //Declaracion del objeto DHT

DHT dht(DHTPin, DHTTYPE);//DHT22 PISO1

DHT dht2(DHTPin2, DHTTYPE);//DHT22 PISO2
void setup() {
  pinMode(LED,OUTPUT);//BOMBILLO UV PISO1
  pinMode(LDR,INPUT);//SENSOR DE LUZ PISO1
  //_______________________________COMUNICACION CON LOS DHT__________________________________

 dht.begin(); //Se inicializa sensor DHT
 //dht2.begin(); //Se inicializa sensor DHT
 //analogRead(A0); 
 Serial.begin(115200); //Se inicializa el puerto Serial para comunicarse con el Modulo Wifi ESP8266
 Serial.setTimeout(3000); //Set el Timeout en 3 segundos para Serial.find()
 Serial.println("AT\r"); //PROBAR CON \n\r
  
 delay(2000);
 //__________________________COMUNICACION CON WIFI____________________________________________-
 if (Serial.find("OK")){ //Verificar si Modulo Wifi responde
    if (!connectWiFi()) { //Conectarse a la red
       Serial.println("ERROR DE CONEXION WIFI");}
 } else 
    Serial.println("MODULO WIFI NO RESPONDE");
 
}

void loop() {
  
  //___________________________________________HIGROMETROS PISO 1________________________________________________
int hlim = analogRead((SensorPin+SensorPin2)/2); //Se define la variable humedad
int h4 = map(hlim, 0, 1023, 100, 0);
Serial.print("Humedad tierra");
Serial.println(h4);
if(h4>=460) {
    digitalWrite(riego,HIGH);//Activar el riego
  }
  else
  {
    digitalWrite(riego,LOW);//Desactivar el riego
  }
//______________________________________CONTROL DE LUZ PISO1_______________________________________
valor_sensor = analogRead(LDR); 
  luz = (5.0 * valor_sensor * 100.0)/1024.0; // FORMULA ACTUADOR DEL SENSOR 
  Serial.print(luz);  
  Serial.println(" Luz");             
  delay(300);                       
  
  if (luz <= valor_limite)
  {
    digitalWrite (LED, LOW);  //lED ENCIENDE
  }
  if (luz > valor_limite)
  {
    digitalWrite (LED, HIGH);  //LED APAGA. 
  }

//__________________________Test de conexion de los DHT22___________________________////////
   Serial.println("DHTxx test!"); 
   float h1 = dht.readHumidity(); // Lee la humedad dht11 #1
   float t1 = dht.readTemperature(); //Lee la temperatura
   float h2 = dht.readHumidity(); // Lee la humedad dht22 #2
   float t2 = dht.readTemperature(); //Lee la temperatura

   if (isnan(h1) || isnan(t1)) {
      Serial.println("Failed to read from DHT1 sensor!"); 
   }
      if (isnan(h2) || isnan(t2)) {
      Serial.println("Failed to read from DHT2 sensor!"); 
   }
   delay(1000);

//__________________________________________PROCESANDO VARIABLES PARA TS_______________________________________________________________________
 //DHT22 TEMPERATURA AMBIENTE
 char bufferTemperatura[8]; //Crear buffer temporal para convertir float a string
 String temperatura = dtostrf(t1, 8, 3, bufferTemperatura); //Convertir de float a String 8 = longitud de String, 3 = numero de decimales
 updateTemperatura(temperatura); //Actualizar temperatura
 delay(9000); //Thingspeak nos pide un MINIMO de 15 segundos entre cada actualizacion
//DHT22 HUMEDAD AMBIENTE
 char bufferHumedad[8]; //Crear buffer temporal para convertir float a string
 String humedad = dtostrf(h1, 8, 2, bufferHumedad); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad(humedad); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
 Serial.println("CONVERSION DE DATOS DHT22");
//HIGROMETROS  
 char bufferHumedad4[8]; //Crear buffer temporal para convertir float a string
 String humedad4 = dtostrf(h4, 8, 2, bufferHumedad4); //Convertir de float a string 8 = longitud de String, 3 = numero de decimales
 updateHumedad4(humedad4); //Actualizar humedad
 delay(9000); //Hacer una medicion cada 20 segundos
  Serial.println("CONVERSION DE DATOS DEL HIGROMETRO");  
}





  //______________________CONEXION Y ENVIO DE DATOS A TS____________________________________________
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



//_________________________________________________COMANDOS AT DEL MODULO WIFI_______________________________________________________
    boolean connectWiFi (){
  
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








