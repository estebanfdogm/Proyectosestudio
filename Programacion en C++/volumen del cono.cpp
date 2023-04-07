#include <stdio.h>
#include <math.h>

int main (){
double pi=3.1415;
double r=0;
double a=0;
double dd=0.33333;
double vol=0;


	printf ("Ingrese el valor del radio\n");
	scanf ("%lf", &r);		
	printf ("Ingrese el valor de la altura\n");
	scanf ("%lf", &a);  
	
	r=pow (r,2);
	
	vol=dd*pi*r*a;
	
	printf ("El volumen del cono: %.2lf\n", vol);
	
	return 0;
}
