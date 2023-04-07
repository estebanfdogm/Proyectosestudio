#include <stdio.h>

int main() {
#define l 'lu'
#define m 'ma'
#define M 'mi'
#define j 'ju'
#define v 'vi'
#define s 'sa'
#define d 'do'

char dia;
char opcion;

	
	printf("\t Ingrese las primeras iniciales del dia de la semana\n ");
	scanf ("%s", &dia);
	
	
	switch(dia){
	case 'l': printf("El dia es lunes\n");
	break;
	case 'm': printf("El dia es martes\n");
	break;
	case 'M': printf("El dia es miercoles\n");
	break;
	case 'j': printf("El dia es jueves\n");
	break;
	case 'v': printf("El dia es viernes\n");
	break;
	case 's': printf("El dia es sabado\n");
	break;
	case 'd': printf("El dia es domingo\n");
	break;
	
	default: printf("No ingreso una opcion valida\n");
	}
	
	
	return 0;
}

