#include<stdio.h>
#include<conio.h>

int main()
{
	float toma,op,i,dia,no=0,si=0;
	float marca1=0, marca2=0,sum=0;
	
	
	
	for ( i = 1 ; i <=10; i++)
		
	{
		printf("\nTOMA GASEOSA? (4)SI (5)NO:");
		scanf("%f",&toma);
		if(toma==5)
			no++;
		if(toma==4)
		{
			
				printf("de marca prefieren: n");
			printf("(1)PEPSI COLA (2)COCACOLA(3)OTRA:");
			scanf("%f,&op");
			printf("cuantas gaseosas toma un dia:");
			scanf("%f",&dia);
			if (op==1)
				marca1++;
			printf("\npersonas que toman marca 1: %f",marca1);
			if (op==2)
				marca2++;
					
			si++; 
			sum = sum + dia;
			printf("\npersona que no toman gaseosa: %f",no);
			printf("\npersonas que toman marca 1: %f",marca1);
			printf("\npersonas que toman marca 2: %f",marca2);
			printf("\npromedio por dia de consumo: %1f",sum/100);
		}
		
	}
	
	
	
	return 0;
}
