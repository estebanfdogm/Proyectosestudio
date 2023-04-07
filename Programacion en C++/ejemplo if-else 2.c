#include <stdio.h>

int main() {
	int x=0;
	int y=0;
	
	printf("Ingrese el numero\t");
	scanf ("%i",&x);
	printf("\nIngrese el numero\t");
	scanf ("%i",&y);

	if (x>y){
		
		printf("%i mayor a %i", x, y);
	}
	else if (x<y){
		printf("%i menor a %i", x, y);
	}
	else {
		printf("%i igual %i", x, y);
	}
	
	
	return 0;
}

