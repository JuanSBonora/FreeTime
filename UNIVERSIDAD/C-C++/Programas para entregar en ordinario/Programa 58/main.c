#include <stdio.h>
#include <math.h>
#include <windows.h>

int vector[100];

int main (){
	printf("Programa 58: Almacenar los numeros del 1 al 100 en un arreglo unidimensional e imprimirlos.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	for(int i = 1; i <= 100; i ++){
		vector[i] = i;
		printf("\n%d", vector[i]);
    }
	return 0;
}
