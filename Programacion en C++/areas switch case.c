#include <stdio.h>
#include <math.h>
int main() {
	int caso;
	double base;
	double altura;
	double lado;
	double radio;
	double area;
	printf ("Ingrese la selección de la figura:\n ");
	printf ("\t 1. Area del triangulo.\n ");
	printf ("\t 2. Area del cuadrado.\n ");
	printf ("\t 3. Area del circulo.\n ");
	
	scanf("%i", &caso);
	
	switch (caso){
	case 1: {
		printf ("\t 1. Area del triangulo.\n ");
		printf ("\tIngrese la base del triangulo\n");
		scanf ("%lf", &base);
		printf ("\tIngrese la altura del triangulo\n");
		scanf ("%lf", &altura);
		
		area=((base*altura)/2);
	    
		printf ("\tEl area del triangulo es: %.lf\n", area);
		break;
	}
	case 2: {
		printf ("\t 2. Area del cuadrado.\n ");
		printf ("\tIngrese un lado del cuadrado\n");
		scanf ("%lf", &lado);
		
		area=(lado*lado);
		
		printf ("\tEl area del cuadrado es: %.lf\n", area);
		break;
	}

		case 3: {
		printf ("\t 3. Area del circulo.\n ");
		printf ("\tIngrese el radio del circulo\n");
		scanf ("%lf", &radio);
		radio = pow(radio,2);
		area=(3.14*(radio));
		
		printf ("\tEl area del circulo es: %.lf\n", area);
		break;
		
	}
		
	default: printf ("Revise e ingrese nuevamente\n");
	}
	
	
	
	return 0;
}

