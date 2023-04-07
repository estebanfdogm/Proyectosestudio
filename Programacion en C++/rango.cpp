#include <stdio.h>

int main() {
	int edad=0;
	printf ("Se le aplica tres vacunas\n");
	scanf("%i", & edad);
	
	if (edad <= 0 && edad >= 7){
		printf ("Se le aplica tres vacunas");
		printf ("pfaizer \n tetano\n ");
	}
	else if (edad <=8 && edad>=12){
		printf ("Se le aplica tres vacunas");
		printf ("pfaizer \n tetano\n ");
	}
	else if (edad <=13 && edad>=20){
		printf ("Se le aplica tres vacunas");
		printf ("\n Rabia");
	}
	return 0;
}

