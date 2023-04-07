#include <stdio.h>

int main() {
	double min, min1, min2, min3;
	printf ("Ingrese minutos de la llamada\n");
	scanf ("%lf", & min);
	
	if (min <= 3){
		printf ("El valor de la llamada es 300");
	}
	else {
		min1=min-3;
		min2=min1*150;
		min3=300+min2;
		printf ("El valor de la llamada es %.1lf\n", min3);
	}
	
	return 0;
}

