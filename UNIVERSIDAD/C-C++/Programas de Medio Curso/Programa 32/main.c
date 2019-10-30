#include <stdio.h>
#include <windows.h>
#include <math.h>

int num, cont, fact = 1;

int main () {
	printf("Programa 32: Calcular e imprimir el factorial de un numero.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nEscribe un numero para calcular su factorial: ");
	scanf("%d",&num);
	printf("\n");
	for(cont = num; cont >= 1; cont--)
	{
	fact = fact * cont;
	}
	printf("El factorial de %d = %d\n",num ,fact);
	return 0;
}

