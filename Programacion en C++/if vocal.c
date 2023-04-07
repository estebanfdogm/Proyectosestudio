#include <stdio.h>

int main() {
	char vocalentra;
	
	printf ("Ingrese el dato\n");
	scanf("%c", & vocalentra);
	
	if (vocalentra== 'a' || vocalentra == 'e'|| vocalentra == 'i' || vocalentra == 'o' ||vocalentra == 'u'){
		
		printf("La vocal es: %c\n", vocalentra);
	}
	else {
		printf("el %c ingresado no es una vocal\n: ", vocalentra);
	}
	
	return 0;
}
