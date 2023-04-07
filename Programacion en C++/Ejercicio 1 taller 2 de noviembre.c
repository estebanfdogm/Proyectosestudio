#include <stdio.h>

int main() {
	int dia,sis;
	
	printf ("\nIngrese la presión Sistólica\n");
	scanf ("%i", &sis);
	printf ("Ingrese la presión Diastólica\n");
	scanf ("%i", &dia);
	
	if (sis<80 && dia<60){
		printf ("\n Categoria \n ");
		printf ("\tHipotensión\n");
		printf ("\n Alerta \n ");
		printf ("\t Naranja \n");
	}else if(sis>=80 && sis<120 && dia>=60 && dia<80){
		printf ("\n Categoria \n ");
		printf ("\t Optima \n");
		printf ("\n Alerta \n ");
		printf ("\t Verde \n");
	}else if (sis>=120 && sis<130 && dia>=80 && dia<85){
		printf ("\n Categoria \n ");
		printf ("\t Normal\n");
		printf ("\n Alerta \n ");
		printf ("\t Verde \n");
	}else if (sis>=130 && sis<140 && dia>=5 && dia<90){
		printf ("\n Categoria \n ");
		printf ("\t Normal Alta\n");
		printf ("\n Alerta \n ");
		printf ("\t Amarilla \n");
	}else if (sis>=140 && sis<160 && dia>=90 && dia<100){
		printf ("\n Categoria \n ");
		printf ("\t Hipertensión Grado 1\n");
		printf ("\n Alerta \n ");
		printf ("\t Naranja \n");
	}else if (sis>=160 && sis<180 && dia>=100 && dia<110){
		printf ("\n Categoria \n ");
		printf ("\t Hipertensión Grado 2\n");
		printf ("\n Alerta \n ");
		printf ("\t Roja \n");
	}else if (sis>=180 && dia>=110){
		printf ("\n Categoria \n ");
		printf ("\t Hipertensión Grado 3\n");
		printf ("\n Alerta \n ");
		printf ("\t Roja \n");
	}else if (sis>=140 && dia<90){
		printf ("\n Categoria \n ");
		printf ("\t Hipertensión Sistólica Aislada \n");
		printf ("\n Alerta \n ");
		printf ("\t Naranja \n");
	}else {
		printf("No se puede determinar la categoria\n");
		printf ("Alerta Gris");
	}
	
	return 0;
}

