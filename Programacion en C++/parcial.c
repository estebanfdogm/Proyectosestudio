#include <stdio.h>

int main() {
	int tiempo, caja, caja2,caja3;
	int cajainv=2000; 
	int punto;
	printf("-------------sistema de inventarios de caja----------------------------------");
	printf("\nIngrese el tiempo de despacho y despues ingrese la cantidad de cajas despachadas");
//	scanf("%i",& tiempo);
//	scanf("%i",& caja);
	
while (punto < 20){
		
		printf("\n punto %i",punto);
		if (punto == 1){
			while (caja < 100){
				punto++;
				caja2++;
				caja3=cajainv-caja2;
				
				printf("Caja# %i", caja2);
				printf("Punto de distribucion %i", punto);
				printf("Total de cajas en inventario %i", cajainv);
				printf("Total de cajas despachadas %i", caja2);	
				printf("Tiempo de despacho %i", tiempo);
			}
		}
	
}
	
	

	
	
	
	
	
	

		
		




	
	
	return 0;
}

