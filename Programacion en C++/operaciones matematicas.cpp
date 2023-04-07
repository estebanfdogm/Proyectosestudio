#include<stdio.h>
#include<math.h>
//macros
#define PI 3.1416

int y = 5; //variable global 
int main(){
	int x = 10;//varible local
	float suma = 0;
	float multi =0;
	float resta = 0;
	
	suma = x + PI;
	multi = x*y*PI;
	resta = x-PI;
	printf ("el resultado de la suma es: %.f\n", suma);
	printf ("el resultado de la multiplicacion es: %.f\n", multi);
	printf ("el resultado de la resta es: %.f\n", resta);
	
	return 0;
}
