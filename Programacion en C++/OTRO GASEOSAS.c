#include <stdio.h>
#include <conio.h>
int main() {
	
	float toma,op,i,dia,no=0,si=0;
	float marca1=0, marca2=0,sum=0, marca3=0;
	int otro = 0;
	
	while(otro == 0){
		
		printf("\nTOMA GASEOSA? (4)SI (5)NO:");
		scanf("%f",&toma);	
			
	if(toma==5){
		no++;}
	if(toma==4)
	{
		i++;
		printf("de marca prefieren: n");
		printf("(1)PEPSI COLA (2)COCACOLA(3)OTRA:");
		scanf("%f",&op);
		printf("cuantas gaseosas toma un dia:");
		scanf("%f",&dia);
		sum = sum + dia;
		sum = (sum/i);
		if (op==1){
			marca1++;
			printf("\npersona que no toman gaseosa: %.f",no);
			printf("\npersonas que toman marca 1: %.f",marca1);
			printf("\npersonas que toman marca 2: %.f",marca2);
			printf("\npersonas que toman marca 3: %.f",marca3);
			printf("\npromedio por dia de consumo: %.1f",sum);
		}
		if (op==2){
			marca2++;
		si++; 
		printf("\npersona que no toman gaseosa: %.f",no);
		printf("\npersonas que toman marca 1: %.f",marca1);
		printf("\npersonas que toman marca 2: %.f",marca2);
		printf("\npersonas que toman marca 3: %.f",marca3);
		printf("\npromedio por dia de consumo: %.1f",sum);
		}
		if (op==3){
			marca3++;
			si++;
			printf("\npersona que no toman gaseosa: %.f",no);
			printf("\npersonas que toman marca 1: %.f",marca1);
			printf("\npersonas que toman marca 2: %.f",marca2);
			printf("\npersonas que toman marca 3: %.f",marca3);
			printf("\npromedio por dia de consumo: %.1f",sum);
		}
		
	}
	printf	 ("\n------ Ingrese 0 para continuar con el programa o 9 para finalizar-----");
	scanf ("%i", & otro);
	
if (otro != 0 && otro != 9){
   return 0;
}
}
return 0;
	
}
