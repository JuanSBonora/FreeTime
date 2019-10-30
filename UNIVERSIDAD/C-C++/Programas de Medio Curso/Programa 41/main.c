#include <stdio.h>
#include <windows.h>
#include <math.h>

int i,nuevo = 0, actual = 0, x = 0;

int main () {
	printf("Programa 41: Generar N numeros de la serie: 2, 6, 8, 24 , 26... (minimo 4).\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    for(i = 0; i < 10; i++)
    {
    	printf("%d\n",actual);
    	nuevo = actual + 2;
    	printf("%d\n",nuevo);
    	x = nuevo * 3;
    	actual = x;
	}
	
	return 0;
}
