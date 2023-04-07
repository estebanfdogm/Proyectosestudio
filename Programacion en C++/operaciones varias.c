#include <stdio.h>
#include <math.h>


int main (){
	double resta=0;
	double multi=0;
	double suma=0;
	double div=0;
	double pot=0;
	double raizx=0;
	double raizy=0;
	double senx=0;
	double seny=0;
	double cosx=0;
	double cosy=0;
	double senhx=0;
	double senhy=0;
	double coshx=0;
	double coshy=0;
	double tanx=0;
	double tany=0;
	double atanx=0;
	double atany=0;	
	double y=0;
	double x=0;
	
	
	printf("Ingrese el primer valor \n");
		scanf("%lf", &x);
	printf("Ingrese el segundo valor \n");
		scanf("%lf", &y);
	
//Operaciones//
		resta=x-y;
		multi=x*y;
		suma=x+y;
		div=x/y;
		pot=pow(x,y);
		raizx=sqrt(x);
		raizy=sqrt(y);
		senx=sin(x);
		seny=sin(y);
		cosx=cos(x);
		cosy=cos(y);
		tanx=tan(x);
		tany=tan(y);
		senhx=sinh(x);
		senhy=sinh(y);
		coshx=cosh(x);
		coshy=cosh(y);
		atanx=atan(x);
		atany=atan(y);
		
	printf("El resultado de la SUMA X+Y es: %.2lf\n", suma);
	printf("\n");
	printf("El resultado de la RESTA X-Y es: %.2lf\n", resta);
	printf("\n");
	printf("El resultado de la MULTIPLICACION X*Y es: %.2lf\n", multi);
	printf("\n");
	printf("El resultado de la DIVISION X/Y es: %.2lf\n", div);
	printf("\n");
	printf("El resultado de la POTENCIA DE X^Y es: %.2lf\n", pot);
	printf("\n");
	printf("El resultado de la RAIZ DE X es: %.2lf\n", raizx);
	printf("\n");
	printf("El resultado de la RAIZ DE Y es: %.2lf\n", raizy);
	printf("\n");
	printf("El resultado de la SENO DE X es: %.2lf\n", senx);
	printf("\n");
	printf("El resultado de la SENO DE Y es: %.2lf\n", seny);
	printf("\n");
	printf("El resultado de la COSENO DE X es: %.2lf\n", cosx);
	printf("\n");
	printf("El resultado de la COSENO DE Y es: %.2lf\n", cosy);
	printf("\n");
	printf("El resultado de la TANGENTE DE X es: %.2lf\n", tanx);
	printf("\n");
	printf("El resultado de la TANGENTE DE Y es: %.2lf\n", tany);
	printf("\n");
	printf("El resultado de la SENOHIPER DE X es: %.2lf\n", senhx);
	printf("\n");
	printf("El resultado de la SENOHIPER DE Y es: %.2lf\n", senhy);
	printf("\n");
	printf("El resultado de la COSENOHIPER DE X es: %.2lf\n", coshx);
	printf("\n");
	printf("El resultado de la COSENOHIPER DE Y es: %.2lf\n", coshy);
	printf("\n");
	printf("El resultado de la ARCOTANGENTE DE X es: %.2lf\n", atanx);
	printf("\n");
	printf("El resultado de la ARCOTANGENTE DE Y es: %.2lf\n", atany);
		
		
		
		
	
	
	
	return 0;
}
