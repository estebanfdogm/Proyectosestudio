#include <stdio.h>

int main() {
	
	char seleccion1;
	int seleccion2;

	
	printf ("\t\t----Programa para comprar un plan de datos----\n");
	printf ("\t\t----Seleccione uno de los siguientes planes ----\n");
	printf ("\t\t\t A. Plan basico $30.000\n\t\t\t B. Plan medio $50.000\n\t\t\t C. Plan completo $60.000\n\t\t\t D. Plan Ultra $100.000\n");
	scanf ("%c", &seleccion1);
	
	while (seleccion1 != 'F'){
	switch (seleccion1){
	case 'A':
		printf ("\t\t A. Plan basico $30.000\n");
		printf ("\t\t Incluye: \n\t\t\t -10GB \n\t\t\t -100min \n\t\t\t -SMS ilimitados \n");
		printf ("¿Desea este plan? 1.SI o 2.NO \n");
		scanf ("%i", &seleccion2);
		
		if (seleccion2 == 1){
			printf ("¡Usted ha adquirido el plan exitosamente!\n");
			break;
		}
		else if (seleccion2==2){
			printf ("Esperamos que otro plan sea de su agrado\n");
			break;
		}
		else {printf ("No selecciono una opcion valida\n");}
		break;
	case 'B':
		printf ("\t\t B. Plan medio $50.000\n");
		printf ("\t\t Incluye: \n\t\t\t -30GB \n\t\t\t -500min \n\t\t\t -SMS ilimitados\n\t\t\t -Whatsapp Chat \n");
		printf ("¿Desea este plan? 1.SI o 2.NO \n");
		scanf ("%i", &seleccion2);
		if (seleccion2==1){
			printf ("¡Usted ha adquirido el plan exitosamente!\n");
		}
		else if (seleccion2==2){
			printf ("Esperamos que otro plan sea de su agrado\n");
		}
		else {printf ("No selecciono una opcion valida\n");}
		break;
	case 'C':
		printf ("\t\t C. Plan completo $60.000\n");
		printf ("\t\t Incluye: \n\t\t\t -50GB \n\t\t\t -1000min \n\t\t\t -SMS Ilimitados\n\t\t\t -Whatsapp Ilimitado\n\t\t\t -Facebook Ilimitado \n");
		printf ("¿Desea este plan? 1.SI o 2.NO \n");
		scanf ("%i", &seleccion2);
		if (seleccion2==1){
			printf ("¡Usted ha adquirido el plan exitosamente!\n");
		}
		else if (seleccion2==2){
			printf ("Esperamos que otro plan sea de su agrado\n");
		}
		else {printf ("No selecciono una opcion valida\n");}
		break;
	case 'D':
		printf ("\t\t D. Plan Ultra $100.000\n");
		printf ("\t\t Incluye: \n\t\t\t - Datos Ilimitados \n\t\t\t - Minutos Ilimitados \n\t\t\t - SMS Ilimitados\n\t\t\t - Redes sociales Ilimitadas \n");
		printf ("¿Desea este plan? 1.SI o 2.NO \n");
		scanf ("%i", &seleccion2);
		if (seleccion2==1){
			printf ("¡Usted ha adquirido el plan exitosamente!\n");
			break;
		}
		else if (seleccion2==2){
			printf ("Esperamos que otro plan sea de su agrado\n");
		}
		else {printf ("No selecciono una opcion valida\n");}
		break;
		
	default: printf ("No selecciono una opcion valida\n");
	}} printf ("Programa finalizado\n");
	
	return 0;
}

