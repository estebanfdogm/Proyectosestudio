#include <stdio.h>

int main() {
	double f=0;
	double c=0;
	double k=0;
	
	printf("Ingrese el dato en grados Celsius \n");
		scanf ("%lf", &c);
		
		f=(1.8*c+32);
		k=(c+273.15),
			
	printf("La temperatura en Celsius es:  %.2lf\n\n", c);
	printf("La temperatura en Fahrenheit es:  %.2lf\n\n", f);
	printf("La temperatura en Kelvin es:  %.2lf\n\n", k);
	return 0;
}

