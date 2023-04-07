#include <stdio.h>

int main() {
	
	double a;
	double b;
	double c;
	
	printf ("Ingrese los tres numeros\n");
	scanf ("%lf", &a);
	scanf ("%lf", &b);
	scanf ("%lf", &c);
	
	if (a<b){
		if (a<c){
			if(b<c){
				printf ("El orden de los numero es %.lf, %.lf, %.lf\n", a,b,c);
			}
			else {
				printf ("El orden de los numero es %.lf, %.lf, %.lf\n", a,c,b);
			}
		}
	}
	else if (a>c){
			if (b>c){
				printf ("El orden de los numero es %.lf, %.lf, %.lf\n", c,b,a);
			}else{
				printf ("El orden de los numero es %.lf, %.lf, %.lf\n", b,c,a);
			}
			
			
		}
	return 0;
}

