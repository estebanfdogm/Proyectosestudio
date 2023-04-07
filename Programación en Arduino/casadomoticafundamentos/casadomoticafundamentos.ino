#include <IRremote.h> 
// le asignamos un macro a cada codigo IR 
#define boton1 0x23B9CD46
#define boton2 0x7F1288A
#define boton3 0xBB565681
#define boton4 0xCCCF97BA
#define boton5 0xD3F363A6
#define boton6 0xF3AE5DD
#define boton7 0x60EA0AC0
#define boton8 0x6D15C8DE
/*
#define apagargaraje 0x60EA0AC0
#define encenderazotea 0x6D15C8DE
#define apagarazotea 0x5631B62D
#define encenderpublica 0x31F4380E
#define apagarpublica 0xD8C28EA7
#define modofiesta 0x40782C6A
*/

#define piso1 2
#define piso2 3
#define garaje 4
#define azotea 5
#define publica 6
#define sensor 10
int variablec;
IRrecv irrecv(sensor);
decode_results codigo;
void setup() { 
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(piso1, OUTPUT);
  pinMode(piso2, OUTPUT);
  pinMode(garaje, OUTPUT);
  pinMode(azotea, OUTPUT);
  pinMode(publica, OUTPUT);
  digitalWrite(piso1, HIGH);
digitalWrite(piso2, HIGH);
digitalWrite(azotea, HIGH);
digitalWrite(garaje, HIGH);
digitalWrite(publica, HIGH);
delay(1000);
digitalWrite(piso1, LOW);
digitalWrite(piso2, LOW);
digitalWrite(azotea, LOW);
digitalWrite(garaje, LOW);
digitalWrite(publica, LOW);
delay(1000);
} 
void loop() { 
  if (irrecv.decode(&codigo)) {
    Serial.println(codigo.value, HEX);
if (codigo.value == boton1 ){
Serial.println("APAGAR TODO");
digitalWrite(piso1, !digitalRead(piso1));
digitalWrite(piso2, !digitalRead(piso2));
digitalWrite(azotea, !digitalRead(azotea));
digitalWrite(garaje, !digitalRead(garaje));
digitalWrite(publica, !digitalRead(publica));  }
//////////////
else if (codigo.value == boton2){
Serial.println("ENCENDER PISO1");
digitalWrite(piso1, !digitalRead(piso1));}
//////////////////////
else if (codigo.value == boton3){
digitalWrite(piso2, !digitalRead(piso2));}
////////////////
else if (codigo.value == boton4){
digitalWrite(garaje,!digitalRead(garaje));}
////////////////7
else if (codigo.value == boton5){
digitalWrite(azotea, !digitalRead(azotea));}
/////////////
else if (codigo.value == boton6){
digitalWrite(publica, !digitalRead(publica)); }
////////////////7
else if (codigo.value == boton7){
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
modo_fiesta(100);
}
else if(codigo.value == boton8){
digitalWrite(piso1, LOW);
digitalWrite(piso2, LOW);
digitalWrite(azotea, LOW);
digitalWrite(garaje, LOW);
digitalWrite(publica, LOW);
}
irrecv.resume();
}
delay(100);

}


  

void modo_fiesta(int tiempo){
digitalWrite(piso1, LOW);
digitalWrite(piso2, HIGH);
digitalWrite(azotea, LOW);
digitalWrite(garaje, LOW);
digitalWrite(publica, LOW);
delay(tiempo);
digitalWrite(piso1, HIGH);
digitalWrite(piso2, LOW);
digitalWrite(azotea, LOW);
digitalWrite(garaje, LOW);
digitalWrite(publica, LOW);
delay(tiempo);
digitalWrite(piso1, LOW);
digitalWrite(piso2, LOW);
digitalWrite(azotea, HIGH);
digitalWrite(garaje, LOW);
digitalWrite(publica, LOW);
delay(tiempo);
digitalWrite(piso1, LOW);
digitalWrite(piso2, LOW);
digitalWrite(azotea, LOW);
digitalWrite(garaje, HIGH);
digitalWrite(publica, LOW);
delay(tiempo);
digitalWrite(piso1, LOW);
digitalWrite(piso2, LOW);
digitalWrite(azotea, LOW);
digitalWrite(garaje, LOW);
digitalWrite(publica, HIGH);
delay(tiempo);
digitalWrite(piso1, LOW);
digitalWrite(piso2, HIGH);
digitalWrite(azotea, LOW);
digitalWrite(garaje, HIGH);
digitalWrite(publica, LOW);
delay(tiempo);
digitalWrite(piso1, LOW);
digitalWrite(piso2, LOW);
digitalWrite(azotea, HIGH);
digitalWrite(garaje, LOW);
digitalWrite(publica, HIGH);
delay(tiempo);
digitalWrite(piso1, LOW);
digitalWrite(piso2, HIGH);
digitalWrite(azotea, LOW);
digitalWrite(garaje, HIGH);
digitalWrite(publica, LOW);
delay(tiempo);
digitalWrite(piso1, HIGH);
digitalWrite(piso2, LOW);
digitalWrite(azotea, HIGH);
digitalWrite(garaje, LOW);
digitalWrite(publica, HIGH);
delay(tiempo);
}
