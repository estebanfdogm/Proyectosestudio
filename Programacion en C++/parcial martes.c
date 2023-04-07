#include <stdio.h>
#include <math.h>
int main() {
#define tta 'a'
#define ttb 'b'
#define ttc 'c'
#define ttd 'd'
#define tte 'e'
	float metros;
	float antenas;
	char tipo;
	
	float nuevas;
	float ta=2600; //metros antena tipo a
	float tb=19000;//metros antena tipo b
	float tc=1500;//metros antena tipo c
	float td=19600;//metros antena tipo d
	float te=6500;//metros antena tipo e
    float metrosfaltan;
	
	printf("#######################Ingrese el TIPO de las nuevas antenas ################################\n");
	scanf ("%c", &tipo);
	printf("#######################Ingrese la CANTIDAD EN METROS cuadrados############################### \n");
	scanf ("%f", &metros);
	printf("#######################Ingrese la cantidad de ANTENAS VIEJAS#################################\n");
	scanf ("%f", &antenas);
	
	metrosfaltan=(metros-(antenas*11700));
	if (tipo == tta && antenas > 0){
		nuevas= (metrosfaltan/ta);
		if (nuevas<0){
		printf ("Total de antenas tipo a son: 0");
		}
		else printf ("Total de antenas tipo a son: %.f\n", nuevas);
	}
	else if (tipo == ttb && antenas > 0){
		nuevas= (metrosfaltan/tb);
		if (nuevas<0){
			printf ("Total de antenas tipo a son: 0");
		}
		
		else printf ("Total de antenas tipo a son: %.f\n", nuevas);
	}
	else if (tipo== ttc && antenas > 0){
		
		nuevas= (metrosfaltan/tc);
		if (nuevas<0){
			printf ("Total de antenas tipo a son: 0");
		}
		else printf ("Total de antenas tipo a son: %.f\n", nuevas);
	}
	else if (tipo== ttd && antenas > 0){
		
		nuevas= (metrosfaltan/td);
		if (nuevas<0){
			printf ("Total de antenas tipo a son: 0");
		}
		else printf ("Total de antenas tipo a son: %.f\n", nuevas);
	}
	else if (tipo== tte && antenas > 0){
		
		nuevas= (metrosfaltan/te);
		if (nuevas<0){
			printf ("Total de antenas tipo a son: 0");
		}
		else printf ("Total de antenas tipo a son: %.f\n", nuevas);
	}
	else{
		printf ("Error en los datos");
	}
	return 0;
}

