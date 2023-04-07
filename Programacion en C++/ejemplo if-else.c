#include <stdio.h>
#include <math.h>
int main() {
	int x=0;
	int y=0;
	int z=0;
	
	printf("Ingrese el numero\t");
	scanf ("%i",&x);
	printf("\nIngrese el numero\t");
	scanf ("%i",&y);	
	
	if ( x % y == 0 ){
		z = x/y;
		printf ("\nEl numero es divisible y el resultado es:  ,%i", z);
	}
	else {
		printf ("\nEl numero no es divisible");
	}
	
	return 0;
}

