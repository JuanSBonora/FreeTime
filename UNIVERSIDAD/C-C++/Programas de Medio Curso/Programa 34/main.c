#include <stdio.h>
#include <windows.h>
#include <math.h>

int i, j, k;

int main () {
	int num; 
	printf("Programa 34: Generar las tablas de multiplicar del 1 al 10.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    for(i = 1; i <= 10; i++)
	{
		printf("Tabla de multiplicar del %i\n",i);
		for(j = 1; j <= 1; j++)
		{
		k = i*j;
		printf("%d * %d = %d\n",i,j,k);
		}
	}
	return 0;
}

