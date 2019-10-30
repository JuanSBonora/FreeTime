#include <stdio.h>
#include <windows.h>
#include <math.h>

int contador, x;

int main () {
	printf("Programa 26: Imprimir los numeros del 1 hasta X numero.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor X hasta el que se va a imprimir: ");
	scanf("%d",&x);
	printf("\n");
	for(contador = 1; contador <= x; contador ++)
	{
		printf("%d\n",contador);
	}
	return 0;
}

