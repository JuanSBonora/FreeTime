#include <stdio.h>
#include <windows.h>
#include <math.h>

int i,nuevo = 0, actual = 1, x = 0, next = 0;

int main () {
	printf("Programa 42: Generar N numeros de la serie: 1, 3, 9, 8, 10, 30... (minimo 4).\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    for(i = 0; i < 10; i++)
    {
    	printf("%d\n",actual);
    	nuevo = actual + 2;
    	printf("%d\n",nuevo);
    	x = nuevo * 3;
    	printf("%d\n",x);
    	next = x - 1;
    	actual = next;
	}
	
	return 0;
}
