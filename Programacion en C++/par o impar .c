#include <stdio.h>
#include <math.h>
int main() {
	int x=0;
	
	printf("Ingrese el numero\t");
	scanf ("%i",&x);
	
	if (x%2==0){
		printf("\n El numero %i es par\n",x);
		
	}
	else {
		printf("\n El numero %i es impar\n",x);
	}
	
	return 0;
}

