#include <stdio.h>

int main() {
	
	int dato1=0;
	int dato2=1000;
	int dato3=0;
	
	printf ("Ingrese el intervalo del decremento, se hara desde 1000\n");
	scanf ("%i", &dato1);
	
	while (dato2 > 0){
		dato3 = dato1;
		dato2 = dato2 - dato3;
		printf ("\n %i", dato2);
	}
	
	
	
	
	return 0;
}
