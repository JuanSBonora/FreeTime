#include <stdio.h>
#include <windows.h>
#include <math.h>

float la, lb, lc;

int main () {
		printf("Programa 11: Se conocen los lados de un triangulo y se desea imprimir que tipo ");
	printf("de triangulo es.\n (Equilatero, isosceles o escaleno).");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor del primer lado del triangulo: ");
	scanf("%d",&la);
	printf("\nDame el valor del segundo lado del triangulo: ");
	scanf("%d",&lb);
	printf("\nDame el valor del tercer lado del triangulo: ");
	scanf("%d",&lc);
	if (la==lb && la==lc)
	{
		printf("\nEl triangulo es equilatero");
	}
	else 
	{
		if(la==lb||lb==lc||la==lc)
		{
			printf("\nEl triangulo es isosceles");
		}
		else
		{
			printf("\nEl triangulo es escaleno");
		}
	}
	return 0;
}
