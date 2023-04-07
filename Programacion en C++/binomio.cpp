#include <stdio.h>
#include <math.h>

int main (){
	
double a=0;
double b=0;
double pota=0;
double potb=0;
double centro=0;
double result=0;


	printf ("Ingrese un valor para A\n");
	scanf ("%lf", &a);
	printf ("Ingrese un valor para B\n");
	scanf ("%lf", &b);
		
		pota= pow(a,2);
		potb= pow(b,2);
		centro=2*a*b;
		
		result=pota+centro+potb;
		
	printf ("El resultado del binomio es: %.2lf\n", result);	
return 0;

}
