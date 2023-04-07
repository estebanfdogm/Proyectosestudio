//PINES ASIGANDOS EN EL ARDUINO
int PinIN1 = 2;
int PinIN2 = 3;
int PinIN3 = 4;
int PinIN4 = 7;
void setup() {
  // inicializar la comunicación serial a 9600 bits por segundo:
  Serial.begin(9600);
  // configuramos los pines como salida
  pinMode(PinIN1, OUTPUT);
  pinMode(PinIN2, OUTPUT);
}

void loop() {
  MotorStop1();
  MotorStop2();
  Serial.println("Motor Detenido");
  delay(10000);  //DELAY DEL TIEMPO DETENIDO

  
  MotorHorario1();
  MotorHorario2();
  Serial.println("Giro del Motor en sentido horario");
  delay(30000);//DELAY DEL TIEMPO EN MOVIMIENTO
  

  
}

void MotorHorario1()
{
  digitalWrite (PinIN1, HIGH);
  digitalWrite (PinIN2, LOW);
}
void MotorAntihorario1()
{
  digitalWrite (PinIN1, LOW);
  digitalWrite (PinIN2, HIGH);
}

void MotorStop1()
{
  digitalWrite (PinIN1, LOW);
  digitalWrite (PinIN2, LOW);
}

void MotorHorario2()
{
  digitalWrite (PinIN3, HIGH);
  digitalWrite (PinIN4, LOW);
}
void MotorAntihorario2()
{
  digitalWrite (PinIN3, LOW);
  digitalWrite (PinIN4, HIGH);
}

void MotorStop2()
{
  digitalWrite (PinIN3, LOW);
  digitalWrite (PinIN4, LOW);
}
