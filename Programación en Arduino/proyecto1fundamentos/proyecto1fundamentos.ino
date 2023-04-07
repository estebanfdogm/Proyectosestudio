#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int lcd_key     = 0;

int adc_key_in  = 0;

int piso1=22;
int piso2=23;
int garaje=24;
int publico=25;
/*
#define btnRIGHT  0

#define btnUP     1

#define btnDOWN   2

#define btnLEFT   3

#define btnSELECT 4

#define btnNONE   5*/

int read_LCD_buttons()  // para leer los botones

{ adc_key_in = analogRead(0);      // Leemos A0

  // Mis botones dan:  002, 130, 306,481,720

  // Y ahora los comparamos con un margen comodo

    // Ningun boton pulsado

  if (adc_key_in < 50) lcd_key=1;

  if (adc_key_in < 250) lcd_key=2;

  if (adc_key_in < 450)  lcd_key=3;

  if (adc_key_in < 650)  lcd_key=4;

  if (adc_key_in < 850)  lcd_key=5;



}

void setup()

{

  pinMode(piso1,OUTPUT);
  pinMode(piso2,OUTPUT);
  pinMode(garaje,OUTPUT);
  pinMode(publico,OUTPUT);

   lcd.begin(16, 2);              // Inicializar el LCD
lcd.clear();
  lcd.setCursor(0, 0);

  lcd.print(" PUTO EL QUE  ");     // print a simple message
  lcd.setCursor(0,1);              // Cursor a linea 2, posicion 1
lcd.print(" LO LEA  ");

delay (1000);
lcd.clear();

}

void loop()  {
  
    digitalWrite(piso1, LOW);
    digitalWrite(piso2, LOW);
    digitalWrite(garaje, LOW);
    digitalWrite(publico, LOW);

 switch (lcd_key){
case 1:
if( lcd_key == 1){// LUCES PISO 1
          if (piso1==LOW){
              lcd.setCursor(0, 0);
              lcd.print("ENCENDER");
              lcd.setCursor(4, 1);
              lcd.print("PISO 1");
              digitalWrite(piso1, HIGH);
          }else if(piso1==HIGH) {
              lcd.setCursor(0, 0);
              lcd.print("APAGAR");
              lcd.setCursor(4, 1);
              lcd.print("PISO 1");
              digitalWrite(piso1, HIGH);
          } }
           if (lcd_key == 5) {
   break;
   }
case 2: 
if( lcd_key == 2){// LUCES PISO 1
          if (piso2==LOW){
              lcd.setCursor(0, 0);
              lcd.print("ENCENDER");
              lcd.setCursor(4, 1);
              lcd.print("PISO 2");
              digitalWrite(piso2, HIGH);
          }else if(piso2==HIGH) {
              lcd.setCursor(0, 0);
              lcd.print("APAGAR");
              lcd.setCursor(4, 1);
              lcd.print("PISO 2");
              digitalWrite(piso2, HIGH);
          } }
 if (lcd_key == 5) {
   break;
   }

 case 3: 
if( lcd_key == 3){// LUCES PISO 1
          if (garaje==LOW){
              lcd.setCursor(0, 0);
              lcd.print("ENCENDER");
              lcd.setCursor(4, 1);
              lcd.print("GARAJE");
              digitalWrite(garaje, HIGH);
          }else if(garaje==HIGH) {
              lcd.setCursor(0, 0);
              lcd.print("APAGAR");
              lcd.setCursor(4, 1);
              lcd.print("GARAJE");
              digitalWrite(garaje, HIGH);
          } }
           if (lcd_key == 5) {
   break;
   }
  case 4: 
if( lcd_key == 4){// LUCES PISO 1
          if (publico==LOW){
              lcd.setCursor(0, 0);
              lcd.print("ENCENDER");
              lcd.setCursor(4, 1);
              lcd.print("PUBLICO");
              digitalWrite(garaje, HIGH);
          }else if(garaje==HIGH) {
              lcd.setCursor(0, 0);
              lcd.print("APAGAR");
              lcd.setCursor(4, 1);
              lcd.print("PUBLICO");
              digitalWrite(publico, HIGH);
          } }
           if (lcd_key == 5) {
   break;
   }
 

 return(0);
 
 }

  /*    lcd_key = read_LCD_buttons();

      if( lcd_key == btnRIGHT){// LUCES PISO 1
          if (piso1==LOW){
              lcd.setCursor(0, 0);
              lcd.print("ENCENDER");
              lcd.setCursor(4, 1);
              lcd.print("PISO 1");
              digitalWrite(piso1, HIGH);
          }else if(piso1==HIGH) {
              lcd.setCursor(0, 0);
              lcd.print("APAGAR");
              lcd.setCursor(4, 1);
              lcd.print("PISO 1");
              digitalWrite(piso1, HIGH);
          }
      }
      else if ( lcd_key == btnLEFT ){//LUCES PISO 2

              lcd.print("LEFT   ");
      }
      else if ( lcd_key == btnUP){//LUCES GARAJE

              lcd.print("UP    ");
      }
      else if ( lcd_key == btnDOWN){//LUCES PUBLICAS

              lcd.print("DOWN  ");
      }
      else if ( lcd_key == btnSELECT){// APAGADO GENERAL

              lcd.print("SELECT");
      }
*/
   }