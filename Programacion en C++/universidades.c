#include <stdio.h>

int main() {

	char carrera;
	int opcion;
	
	printf ("\t\t----Programa de informacion sobre carreras universitarias----\n");
	printf ("\t\t----Seleccione una de las siguientes carreras----\n");
	printf ("\t\t\t E. Ingenieria Electronoca \nt\t\t\t C. Ingenieria Civil\n\t\t\t S. Ingenieria de Sistemas\n\t\t\t M. Medicina\n");
	scanf ("%c", &carrera);
	
	switch (carrera){
	case 'E':
		printf ("\t\t E. Ingenieria Electronoca \n");
		printf ("\t\t\t 1. Presupuesto por universidades\t\t\t \n\t\t\t 2. Duracion de la carrera en semestres\n\t\t\t 3. Duracion de la carrera en años \n\t\t\t 4. Especializaciones\n");
		scanf  ("%i", &opcion);
		switch (opcion){
	    case 1: 
			printf ("\t\t 1. Presupuesto por universidades");
			printf ("\n\t\t\t - Universidad Javeriana $10.000.000\n\t\t\t - Universidad Sergio Arboleda $9.000.000");
			printf ("\n\t\t\t - Universidad Manuela Beltran $8.000.000\n\t\t\t - Universidad Piloto $7.000.000");
			printf ("\n\t\t\t - Universidad Escuela de Ingenieria $7.000.000\n\t\t\t - Universidad Central $5.000.000");
			printf ("\nEsperamos la informacion le sea de utilidad");
			break;
		case 2:
			printf ("\t\t 2. Duracion de la carrera en semestres");
			printf ("\n\t\t\t -La duracion de la carrera es de 10 semestres dependiendo la universidad");
			printf ("Esperamos la informacion le sea de utilidad");
			break;
		case 3:
			printf ("\t\t 3. Duracion de la carrera en semestres");
			printf ("\n\t\t\t -La duracion de la carrera es de 5 años dependiendo la universidad y el cumplimiento del estudiante con el plan curricular");
			printf ("Esperamos la informacion le sea de utilidad");
			break;
		case 4:	
			printf ("\t\t 4. Especializaciones");
			printf ("\n\t\t\t - Telecomuicaciones\n\t\t\t - Biomedica");
			printf ("\n\t\t\t - Automatizacion Industrial\n\t\t\t - Energias Renovable");
			printf ("\n\t\t\t - Domotica\n\t\t\t - Gerencia de Proyectos");
			printf ("\n\t\t\t¡¡Esperamos la informacion le sea de utilidad!!");
			break;
		default: printf("\nLos datos ingresados no son validos");
		}
		break;
	case 'C':
		printf ("\t\t C. Ingenieria Civil \n");
		printf ("\t\t\t 1. Presupuesto por universidades\t\t\t \n\t\t\t 2. Duracion de la carrera en semestres\n\t\t\t 3. Duracion de la carrera en años \n\t\t\t 4. Especializaciones\n");
		scanf  ("%i", &opcion);
				
		switch (opcion){
		case 1: 
			printf ("\t\t 1. Presupuesto por universidades");
			printf ("\n\t\t\t - Universidad Javeriana $12.000.000\n\t\t\t - Universidad Sergio Arboleda $10.000.000");
			printf ("\n\t\t\t - Universidad Manuela Beltran $9.000.000\n\t\t\t - Universidad Piloto $8.000.000");
			printf ("\n\t\t\t - Universidad Escuela de Ingenieria $7.000.000\n\t\t\t - Universidad Central $5.000.000");
			printf ("Esperamos la informacion le sea de utilidad");
			break;
		case 2:
			printf ("\t\t 2. Duracion de la carrera en semestres");
			printf ("\n\t\t\t -La duracion de la carrera es de 10 semestres dependiendo la universidad");
			printf ("Esperamos la informacion le sea de utilidad");
			break;
		case 3:
			printf ("\t\t 3. Duracion de la carrera en semestres");
			printf ("\n\t\t\t -La duracion de la carrera es de 5 años dependiendo la universidad y el cumplimiento del estudiante con el plan curricular");
			printf ("Esperamos la informacion le sea de utilidad");
			break;
		case 4:	
			printf ("\t\t 4. Especializaciones");
			printf ("\n\t\t\t - Puentes\n\t\t\t - Edificios");
			printf ("\n\t\t\t - Gestion de contratos \n\t\t\t - Obras publicas");
			printf ("\n\t\t\t - Estructuras Renovables\n\t\t\t - Gerencia de Proyectos");
			printf ("\n\t\t\t¡¡Esperamos la informacion le sea de utilidad!!");
			break;
		default: printf("Los datos ingresados no son validos");
		}
		
		break;
		
	case 'S':
		printf ("\t\t C. Ingenieria de Sistemas \n");
		printf ("\t\t\t 1. Presupuesto por universidades\t\t\t\n \t\t\t 2. Duracion de la carrera en semestres\n\t\t\t 3. Duracion de la carrera en años \n\t\t\t 4. Especializaciones\n");
		scanf  ("%i", &opcion);
		switch (opcion){
			case 1: 
				printf ("\t\t 1. Presupuesto por universidades");
				printf ("\n\t\t\t - Universidad Javeriana $12.000.000\n\t\t\t - Universidad Sergio Arboleda $10.000.000");
				printf ("\n\t\t\t - Universidad Manuela Beltran $9.000.000\n\t\t\t - Universidad Piloto $8.000.000");
				printf ("\n\t\t\t - Universidad Escuela de Ingenieria $7.000.000\n\t\t\t - Universidad Central $5.000.000");
				printf ("Esperamos la informacion le sea de utilidad");
				break;
			case 2:
				printf ("\t\t 2. Duracion de la carrera en semestres");
				printf ("\n\t\t\t -La duracion de la carrera es de 10 semestres dependiendo la universidad");
				printf ("Esperamos la informacion le sea de utilidad");
				break;
			case 3:
				printf ("\t\t 3. Duracion de la carrera en semestres");
				printf ("\n\t\t\t -La duracion de la carrera es de 5 años dependiendo la universidad y el cumplimiento del estudiante con el plan curricular");
				printf ("Esperamos la informacion le sea de utilidad");
				break;
			case 4:	
				printf ("\t\t 4. Especializaciones");
				printf ("\n\t\t\t - Software\n\t\t\t - Hardware");
				printf ("\n\t\t\t - BigData \n\t\t\t - Creacion de proyectos");
				printf ("\n\t\t\t - Innovacion\n\t\t\t - Gerencia de Proyectos");
				printf ("\n\t\t\t¡¡Esperamos la informacion le sea de utilidad!!");
				break;
			default: printf("Los datos ingresados no son validos");
				}
				
		break;
	case 'M':
		printf ("\t\t M. Medicina\n");
		printf ("\t\t\t 1. Presupuesto por universidades\t\t\t\n \t\t\t 2. Duracion de la carrera en semestres\n\t\t\t 3. Duracion de la carrera en años \n\t\t\t 4. Especializaciones\n");
		scanf  ("%i", &opcion);
	
		switch (opcion){
			case 1: 
				printf ("\t\t 1. Presupuesto por universidades");
				printf ("\n\t\t\t - Universidad Javeriana $30.000.000\n\t\t\t - Universidad Sergio Arboleda $20.000.000");
				printf ("\n\t\t\t - Universidad Manuela Beltran $18.000.000\n\t\t\t - Universidad Piloto $15.000.000");
				printf ("\n\t\t\t - Universidad Central $13.000.000");
				printf ("Esperamos la informacion le sea de utilidad");
				break;
			case 2:
				printf ("\t\t 2. Duracion de la carrera en semestres");
				printf ("\n\t\t\t -La duracion de la carrera es de 12 semestres dependiendo la universidad");
				printf ("Esperamos la informacion le sea de utilidad");
				break;
			case 3:
				printf ("\t\t 3. Duracion de la carrera en semestres");
				printf ("\n\t\t\t -La duracion de la carrera es de 6 años dependiendo la universidad y el cumplimiento del estudiante con el plan curricular");
				printf ("Esperamos la informacion le sea de utilidad");
				break;
			case 4:	
				printf ("\t\t 4. Especializaciones");
				printf ("\n\t\t\t - Neurologia\n\t\t\t - Pediatria");
				printf ("\n\t\t\t - Anesteologia \n\t\t\t - Ginecologia");
				printf ("\n\t\t\t - Ortopedia \n\t\t\t - Gerencia de Hospitales");
				printf ("\n\t\t\t¡¡Esperamos la informacion le sea de utilidad!!");
				break;
		default: printf("Los datos ingresados no son validos");
	}
		break;
	default:printf("Los datos ingresados no son validos");
	}	
	
	
	return 0;
}

