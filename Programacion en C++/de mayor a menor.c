#include <stdio.h>

int main() {
	
	double a;
	double b;
	double c;
	
	printf ("Ingrese los tres numeros\n");
	scanf ("%lf", &a);
	scanf ("%lf", &b);
	scanf ("%lf", &c);
	
	if (a<b && a<c){
		if (b<c){
			printf ("%.lf, %.lf, %.lf\n", c,b,a);
		} else { printf ("%.lf, %.lf, %.lf\n", b,c,a);
		
		}
	}
	else if (b<a && b<c){
		if (a<c){
			printf ("%.lf, %.lf, %.lf\n", c,a,b);
		}else {
			printf ("%.lf, %.lf, %.lf\n", a,c,b);
		}
	}
	else if (c<a && c<b){
		if (a<b){
			printf ("%.lf, %.lf, %.lf\n", b,a,c);
		}else {
			printf ("%.lf, %.lf, %.lf\n", a,b,c);
		}
	}
	
	return 0;
}
