#include <stdio.h>

int main() {
	int edad;
	printf ("Se le aplica tres vacunas\n");
	scanf("%i",&edad);
	
	if (edad >= 0 && edad <= 7){
		printf ("Se le aplica tres vacunas");
		printf ("Fiebre amarilla \n Tetano \n Rotavirus ");
	}
	else if (edad <=8 && edad>=12){
		printf ("Se le aplica tres vacunas");
		printf ("pfaizer \n tetano\n ");
	}
	else if (edad <=13 && edad>=20){
		printf ("Se le aplica tres vacunas");
		printf ("\n Rabia");
	}
	else {
		printf ("Ingrese una edad en los valores establecidos");
	}
	return 0;
}

