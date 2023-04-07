#include <stdio.h>
#include <math.h>

int main (){
	
	double base = 25;
	double exp=5;
	double pot=0;
	
	pot = pow(25,5);
	
	printf ("la potencia es: %.3lf\n", pot);
	
	
	double x =25;
	double raiz=0;
	raiz = sqrt(x);
	printf ("la raiz de %.lf es: %.lf\n", x, raiz);
	
	double y=12;
	double logaritmo=0;
	double logaritmod=0;
	logaritmo = log(y);
	logaritmod = log10(y);
	printf ("logaritmo de %.lf es: %.2}lf\n", y, logaritmo);
	printf ("logaritmo base 10 de %.lf es: %.2lf\n", y, logaritmod);
	return 0;
}
