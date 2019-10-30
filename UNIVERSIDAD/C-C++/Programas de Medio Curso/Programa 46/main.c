#include <stdio.h>
#include <windows.h>
#include <math.h>

int i, j;

int main () {
	printf("Programa 46: Generar N numeros de la serie: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4... (minimo 4).\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    for(i = 1; i <= 10; i++)
    {
       	for(j = i; j >= 1; j--)
       	{
       		printf("%d\n",i);
		   }
	}
	
	return 0;
}
