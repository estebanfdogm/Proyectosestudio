#include <stdio.h>

int main() {
	int valor;
	printf ("Ingrese el valor\n");
	scanf	("%i", &valor);
	
	switch (valor){
		
	case 1:{
	printf ("Este es el valor 1\n");
	break;
	}
	case 2:{
		printf ("Este es el valor 2\n");
		break;
	}
	default: printf ("no selecciono ningun valor \n");
	break;
	}
	
	
	
	
	return 0;
}

