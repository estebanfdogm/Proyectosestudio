#include <stdio.h>


int main() {
	
	
	double P=0;
	double g=0;
	double pd=0;
	double t=0;
	
	printf("\nPRESUPUESTO DE UNA CLINICA.\n");
	
	
	//Interacción con el usuario
	printf ("\n *Ingrese el presupuesto total: ");
	scanf ("%lf",&P);
	


	//Operaciones matemáticas
	g = P * 0.40; 
	pd = P * 0.35;
	t = P * 0.25;
	
	printf ("\n\tEL TOTAL A PAGAR AREA DE TOTAL ES: %.0lf",P);
	printf ("\n\tEL TOTAL A PAGAR AREA DE GINECOLOGIA ES: %.0lf",g);
	printf ("\n\tEL TOTAL A PAGAR AREA DE PEDIATRIA ES: %.0lf",pd);
	printf ("\n\tEL TOTAL A PAGAR AREA DE TRAUMATOLOGIA ES: %.0lf",t);
	
	return 0;
}
	
