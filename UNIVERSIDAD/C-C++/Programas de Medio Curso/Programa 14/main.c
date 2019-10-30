#include <stdio.h>
#include <windows.h>
#include <math.h>

int A, B, C;
float x1, x2;

int main () {
		printf("Programa 14: Calculo de las raices de la ecuacion cuadratica.\n");
		printf("Nota. Ecuacion cuadratica: Ax^2 + Bx + C = 0");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor de A: ");
	scanf("%d",&A);
	printf("\nDame el valor de B: ");
	scanf("%d",&B);
	printf("\nDame el valor de C: ");
	scanf("%d",&C);
	
	if (A != 0)
	{
	 x1 = ((-B) + sqrt((pow(B,2)) - (4*A*C)))/(2*A);
	 x2 = ((-B) - sqrt((pow(B,2)) - (4*A*C)))/(2*A);
	 
	 if(x1 == x2)
	 {
	 	printf("\nEl unico valor posible para x es: %.2f",x1);
	 } else{
	 printf("\nEl valor del primer resultado de x es: %.2f",x1);
	 printf("\nEl valor del segundo resultado de x es: %.2f",x2);
	 }
    } 
	else {
		x1 = (-C)/B;
		printf("\nEs una ecuacion lineal, solo despeja x\n");
		printf("Aun asi el resultado de x es: %.2f",x1);
	}
	return 0;
	}
