#include<stdio.h>
#include<math.h>

int main (){
	char letra = 'a';//Tamaño 1byte rango 0 a 255
	short b=-15;//Tamaño 2bytes rango -128 a 127
	int c = 1024;//tamaño 2bytes rango -32768 a 32767
	unsigned int d =128;// Tamaño 2bytes rango de 0 a 65535
	long e = 123456;//Tamaños 4bytes rango -2147483648 a 2147483637
	float f = 12345.6773; //Tamaños de 4bytes
	double m = 987642.975672; //Tamaño de 8bytes
	printf("La letra es: %c\n", letra);//char
	printf("La numero es: %i\n", b);//short
	printf("La numero es: %i\n", c);//int
	printf("La numero es: %i\n", d);//unsigned int
	printf("La numero es: %li\n", e);//long
	printf("La numero es: %f\n", f);//float
	printf("La numero es: %lf\n", m);//double
	return 0;
}
