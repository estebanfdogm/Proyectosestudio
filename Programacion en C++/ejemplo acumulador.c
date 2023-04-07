#include <stdio.h>

int main() {
	int acumulador=0;
	int sueldo;
	
	printf("\nIngrese su sueldo");
	scanf ("%i", &sueldo);
acumulador += sueldo;
printf("\nIngrese su sueldo");
scanf ("%i", &sueldo);
acumulador += sueldo;	
printf("\nIngrese su sueldo");
scanf ("%i", &sueldo);
acumulador += sueldo;
	printf ("\nSu sueldo total %i", acumulador);
	return 0;
}

