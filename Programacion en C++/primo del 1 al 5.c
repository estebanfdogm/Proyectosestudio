#include <stdio.h>

int main() {
	
	int a;
	
	printf ("Ingrese un numero\n");
	scanf ("%i", &a);
	
	if (a==2 || a==3 || a==5){
		printf ("El numero %i es primo", a);
	}
	else {
		printf ("El numero %i es no primo", a);
	}
	
	return 0;
}

