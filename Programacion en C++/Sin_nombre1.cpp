#include <stdio.h>
#include <math.h>

int main (){
	double a;
	double b;
	double c;
	double resul1=0;
	double resul2=0;
	double raiz=0;
	double pot=0;
	double ay=0;
	double ay2=0;
	
	printf ("Ingrese 3 valores para hacer la funcion solicitada:\n ");
	scanf ("%lf",&a);
	scanf ("%lf",&b);
	scanf ("%lf",&c);
	

	pot= pow (b,2);
	ay = 4*a*c;
	ay2 = pot-ay;
	raiz = sqrt (ay2);
	
	resul1 = (-b+raiz)/(2*a);
	resul2 = (-b-raiz)/(2*a);
	
	printf ("El resultado de X1 es: %.4lf\n", resul1);
	printf ("El resultado de X2 es: %.4lf\n", resul2);
	return 0;
}
