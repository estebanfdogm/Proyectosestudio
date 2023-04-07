#include <stdio.h>
#include <math.h>
double c,t1,il,ih,bp1,bph,ica;
int main() {
	
	
	printf("Ingrese la concentración O3 1H\n");
	scanf("%lf", &c);
	
	if (c>=0.125 && c<0.165){//CONDICION PARA ASIGNAR DATOS DEL RANGO 0.125-0.165
		//printf("rango1");
		il=101;
		ih=150;
		bp1=0.125;
		bph=0.164;
		t1=((ih-il)/(bph-bp1));
		ica=(t1*(c-bp1)+il);
			if (ica>=0 && ica<=50 ){
				printf("\n%.2lf VERDE", ica);
			}
			else if (ica>50 && ica<=100 ){
				printf("\n%.2lf AMARILLO", ica);
			}
			else if (ica>100 && ica<=150 ){
				printf("\n%.2lf NARANJA", ica);
			}
			else if (ica>150 && ica<=200 ){
				printf("\n%.2lf ROJO", ica);
			}
			else if (ica>200 && ica<=300 ){
				printf("\n%.2lf MORADO", ica);
			}
			else if (ica>300 ){
				printf("\n%.2lf MARRON", ica);
			}}
	else if(c>=0.165 && c<0.205){//CONDICION PARA ASIGNAR DATOS DEL RANGO 0.165-0.205
		//printf("rango2");
		il=151;
		ih=200;
		bp1=0.165;
		bph=0.204;
		t1=((ih-il)/(bph-bp1));
		ica=(t1*(c-bp1)+il);
		//printf("ica prueba %.2lf", ica	);
			if (ica>=0 && ica<=50 ){
				printf("\n%.2lf VERDE", ica);
			}
			else if (ica>50 && ica<=100 ){
				printf("\n%.2lf AMARILLO", ica);
			}
			else if (ica>100 && ica<=150 ){
				printf("\n%.2lf NARANJA", ica);
			}
			else if (ica>150 && ica<=200 ){
				printf("\n%.2lf ROJO", ica);
			}
			else if (ica>200 && ica<=300 ){
				printf("\n%.2lf MORADO", ica);
			}
			else if (ica>300 ){
				printf("\n%.2lf MARRON", ica);
			}}
		
	else if(c>=0.205&& c<0.405){//CONDICION PARA ASIGNAR DATOS DEL RANGO 0.205-0.405
		//printf("rango3");
			il=201;
			ih=300;
			bp1=0.205;
			bph=0.404;
			t1=((ih-il)/(bph-bp1));
			ica=(t1*(c-bp1)+il);
				if (ica>=0 && ica<=50 ){
					printf("\n%.2lf VERDE", ica);
				}
				else if (ica>50 && ica<=100 ){
					printf("\n%.2lf AMARILLO", ica);
				}
				else if (ica>100 && ica<=150 ){
					printf("\n%.2lf NARANJA", ica);
				}
				else if (ica>150 && ica<=200 ){
					printf("\n%.2lf ROJO", ica);
				}
				else if (ica>200 && ica<=300 ){
					printf("\n%.2lf MORADO", ica);
				}
				else if (ica>300 ){
					printf("\n%.2lf MARRON", ica);
				}}
	else if(c>=0.405&& c<0.505){//CONDICION PARA ASIGNAR DATOS DEL RANGO 0405-0.505
		//printf("rango4");
			il=301;
			ih=400;
			bp1=0.405;
			bph=0.504;
			t1=((ih-il)/(bph-bp1));
			ica=(t1*(c-bp1)+il);
				if (ica>=0 && ica<=50 ){
					printf("\n%.2lf VERDE", ica);
				}
				else if (ica>50 && ica<=100 ){
					printf("\n%.2lf AMARILLO", ica);
				}
				else if (ica>100 && ica<=150 ){
					printf("\n%.2lf NARANJA", ica);
				}
				else if (ica>150 && ica<=200 ){
					printf("\n%.2lf ROJO", ica);
				}
				else if (ica>200 && ica<=300 ){
					printf("\n%.2lf MORADO", ica);
				}
				else if (ica>300 ){
					printf("\n%.2lf MARRON", ica);
				}}	
	else if(c>=0.505&& c<0.605){//CONDICION PARA ASIGNAR DATOS DEL RANGO 0.505-0.605
		//printf("rango5");
			il=401;
			ih=500;
			bp1=0.505;
			bph=0.604;
			t1=((ih-il)/(bph-bp1));
			ica=(t1*(c-bp1)+il);
				if (ica>=0 && ica<=50 ){
					printf("\n%.2lf VERDE", ica);
				}
				else if (ica>50 && ica<=100 ){
					printf("\n%.2lf AMARILLO", ica);
				}
				else if (ica>100 && ica<=150 ){
					printf("\n%.2lf NARANJA", ica);
				}
				else if (ica>150 && ica<=200 ){
					printf("\n%.2lf ROJO", ica);
				}
				else if (ica>200 && ica<=300 ){
					printf("\n%.2lf MORADO", ica);
				}
				else if (ica>300 ){
					printf("\n%.2lf MARRON", ica);
				}}	
		
		
		
		
	
	return 0;
}
