#include <stdio.h>

int main() {
#define si 'S'
#define no  'N'
	
	
		
		char ayunas;
		float glucosa;
		printf("\n\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
		printf("\n\t\t *                                                                           *");
		printf("\n\t\t *     sistema para la detección temprana de una enfermedad en específico    *");  
		printf("\n\t\t *                        siendo estas la diabetes                           *");
		printf("\n\t\t *                                                                           *");
		printf("\n\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
		printf("\n\n\n\t\t\t   DIJITE 'S' SI SE ENCUNTRA EN AYUNAS PARA LA TOMA DE EXAMENES ");
		printf("\n\n\n\t\t\t   DIJITE 'N' SI NO SE ENCUNTRA EN AYUNAS PARA LA TOMA DE EXAMENES ");
		scanf("%c",&ayunas);
		
		printf("\n\n\n\t\t\t             DIJITE SU NIVEL DE GLUCOSA EN SANGRE:");
		scanf("%f",&glucosa);
		
		if (ayunas==si && glucosa<70){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--HIPOGLUSEMIA--____\a");
		}
		
		else if (ayunas==si && glucosa>=70 && glucosa<100){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--SIN DIABETES--____\a");
			
		}
		else if (ayunas==si && glucosa>=100 && glucosa<125){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--PRE DIABETES--____\a");	
		}
		else if (ayunas==si &&  glucosa>=125){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--DIABETES--____\a");

			
		}
		else if (ayunas==no && glucosa<140){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--SIN DIABETES--____\a");
			
		}
		else if (ayunas==no && glucosa>=140 && glucosa<200){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--PRE DIABETES--____\a");
			
		}
		else if (ayunas==no && glucosa>=200){
			printf("\n\n\n\t\t\tSu estado de diabetes es ____--DIABETES--____\a");
			
		}
		
		else if (ayunas!=si && ayunas!=no){
			printf("\n\n\n\t\t\t#######HA INGRESADO UN VALOR ERRONEO INTENTE NUEVAMENTE#######\a\a\a");
		}
			
	
	return 0;
}

