#include <stdio.h>
#include <windows.h>
#include <math.h>

int i, actual = 3, nuevo = 0;

int main () {
	printf("Programa 45: Generar N numeros de la serie: 3, 6, 9, 12, 15, 36, 21... (minimo 4).\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    for(i = 1; i <= 5; i++)
    {
    	printf("%d\n", actual);
    	nuevo = actual + 3;
    	actual = nuevo;
	}
	
	return 0;
}
