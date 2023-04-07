#include <stdio.h> 

int main() {
	double a; 
	printf("Introduce un número:\n");
	
	scanf("%lf", &a);

	if(a == 0){
		printf("El numero %.lf es Neutro", a);
	}else if(a > 0){
		printf("El numero %.lf es Positivo", a);
	}else{
		
		printf("El numero %.lf es Negativo", a);
	}
	return 0;
}
