#include <stdio.h>
#include <math.h>

int main (){
	
	
double notatotal=0;
double corte1=0;
double corte2=0;
double corte3=0;
double trabajo1=0;
double trabajo2=0;
double trabajo3=0;
double trabajo4=0;
double trabajo5=0;
double trabajot=0;
double parcial1=0;
double parcialt1=0;
double parcialt2=0;
double parcialt3=0;
double exp1=0;
double exp2=0;
double exp3=0;
double expt=0;
double parcial2=0;
double quiz1=0;
double quiz2=0;
double quizt=0;
double quizt1=0;
double parcial3=0;

		printf("PRIMER CORTE\n");
			printf("Ingrese la nota de los trabajos que se realizaron\n");
			printf("Trabajo 1\n");
			scanf("%lf", &trabajo1);
			printf("Trabajo 2\n");
			scanf("%lf", &trabajo2);
			printf("Trabajo 3\n");
			scanf("%lf", &trabajo3);
			printf("Trabajo 4\n");
			scanf("%lf", &trabajo4);
			printf("Trabajo 5\n");
			scanf("%lf", &trabajo5);
			printf("Ingrese la nota del primer parcial\n");
			scanf("%lf", &parcial1);
		printf("SEGUNDO CORTE\n");
			printf("Ingrese la nota de las exposiciones\n");
			printf("Exposicion 1\n");
			scanf("%lf", &exp1);
			printf("Exposicion 2\n");
			scanf("%lf", &exp2);
			printf("Exposicion 3\n");
			scanf("%lf", &exp3);
			printf("Ingrese la nota del segundo parcial\n");
			scanf("%lf", &parcial2);
		printf("TERCER CORTE\n");
			printf("Ingrese la nota de los quices\n");
			printf("Quiz 1\n");
			scanf("%lf", &quiz1);
			printf("Quiz 2\n");
			scanf("%lf", &quiz2);
			printf("Ingrese la nota del tercer parcial\n");
			scanf("%lf", &parcial3);
			
		//Operaciones//
		//CORTE 1
		trabajot=(trabajo1+trabajo2+trabajo3+trabajo4+trabajo5)/5;
		trabajot=trabajot*0.15;
		printf("Total de los trabajos es: %.3lf\n",trabajot);
		parcialt1=parcial1*0.20;
		printf("Total del primer parcial es es: %.3lf\n",parcialt1);
		corte1=trabajot+parcialt1;
		printf("Total del PRIMER CORTE es: %.3lf\n",corte1);
		//CORTE 2
		expt=(exp1+exp2+exp3)/3;
		expt=expt*0.15;
		printf("Total de las expociciones es: %.3lf\n",expt);
		parcialt2=parcial2*0.20;
		printf("Total del segundo parcial es es: %.3lf\n",parcialt2);
		corte2=expt+parcialt2;
		printf("Total del SEGUNDO CORTE es: %.3lf\n",corte2);
		//CORTE 3
		quizt1=(quiz1+quiz2)/2;
		quizt=quizt1*0.10;
		
		printf("Total de los quicez es: %.3lf\n",quizt);
		parcialt3=parcial3*0.20;
		printf("Total del tercer parcial es: %.3lf\n",parcialt3);
		corte3=quizt+parcialt3;
		printf("Total del TERCER CORTE es: %.3lf\n",corte3);
		//NOTA FINAL
		notatotal=corte1+corte2+corte3;
		
		printf("su NOTA FINAL es: %.3lf\n",notatotal);
return 0;	
}

