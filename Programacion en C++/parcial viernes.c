#include <stdio.h>

int main() {
	double am;
	double p;
	printf("\n\n");

	printf("\n\t\t\tPROGRAMA DEL MINISTERIO DE ADRICULTURA Y DESARROLLO RURAL");
	printf("\n\t\t\t          PARA RECUPERACION DE SUELOS                    ");
	printf("\n***************************************************************************************\n");

	printf("\nIngrese la ALTURA SOBRE EL NIVEL DEL MAR\n");
	scanf ("%lf", &am);
	printf("Ingrese la PRECIPITACION\n");
	scanf ("%lf", &p);
	
	printf ("\n \t\t\t SU TERRENO ES; ");
	
	if (am>400 && am<=800 && p>1800 && p<2599){
		printf ("\n \t\t\t SUMAMENTE APTO");
		
	}
	else if (am>800 && am<=999 && p>2600 && p<3199 || p<1799 && p>=1500){
		printf ("\n \t\t\t MODERADAMENTE APTO");
	}
	else if (am>=1000 && am<1200 && p>3200 && p<3800 || p>1200 && p<1499){
		printf ("\n \t\t\t MARGINALMENTE APTO");
	}
	else if (am>1200 && p<1200 || p>3800){
		printf ("\n \t\t\t   NO APTO");
	}
	else printf ("\n \t\t\t  NO APTO");
	
	
	
	
	return 0;
}

