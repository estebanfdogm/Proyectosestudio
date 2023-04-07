#include <stdio.h>
#include <math.h>

int main (){
	double x=0;
	double y =0;
	double mul=0;
	double pot=0;
	
	
	printf ("\t\tIngrese un mumero para x\n");
	scanf ("%lf", &x);
	
	printf ("\t\tIngrese un mumero para y\n");
	scanf ("%lf", &y);
	
	
	mul= x*y;
	pot = pow (x,y);

	printf ("\t El resultado de la multiplicacion es: %.lf\n", mul);
	printf ("\t El resultado de la potencia es: %.lf\n", pot);
	
	return 0;
}

