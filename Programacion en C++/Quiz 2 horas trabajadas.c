#include <stdio.h>

int main() {
	double htrabajada, sueldo, sueldoe,hextra;
	printf("Ingrese las horas trabajadas\n");
	scanf ("%lf",&htrabajada);
	if (htrabajada<=40){
		sueldo=htrabajada*20;
		printf ("El sueldo para las horas ingresadas es %.2lf\n", sueldo);
	}else if (htrabajada>40){
		hextra=htrabajada-40;
		sueldo=(40*20)+hextra*30;
		printf ("El sueldo para las horas ingresadas es %.2lf\n \nlas horas extra trabajadas son %.1lf", sueldo, hextra);
	}
	return 0;
}

