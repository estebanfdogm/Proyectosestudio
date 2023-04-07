#include <stdio.h>

int main() {
	double x;
	double y;
	
	printf("Ingrese la altura sobre el mar\n");
	scanf ("%lf", &x);
	printf("Ingrese la precipitacion\n");
	scanf ("%lf", &y);
	
	if (x>400 && x<=800 && y>1800 && y<2599){
		printf ("\n sumamente apto");
		
	}
	else if (x>800 && x<=999 && y>2600 && y<3199 || y<1799 && y>=1500){
		printf ("\n moderadamente apto");
	}
	else if (x>=1000 && x<1200 && y>3200 && y<3800 || y>1200 && y<1499){
		printf ("\n marginalmente apto");
	}
	else if (x>1200 && y<1200 || y>3800){
		printf ("\n no apto");
	}
	else printf ("\n no apto");
	
	
	
	
	return 0;
}

