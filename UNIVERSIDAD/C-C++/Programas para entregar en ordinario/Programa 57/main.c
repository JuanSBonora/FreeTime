#include <stdio.h>
#include <math.h>
#include <windows.h>

int n, i, suma;
int vector[50];

int main (){
	printf("Programa 57: Elabore un programa que lea los elementos de un vector, los imprima y la suma entre ellos.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Dame la cantidad de elementos del vector: ");
	scanf("%d",&n);
	    for(i = 0; i < n; i++){
	    	printf("\nDame el valor del elemento %d: ", i);
			scanf("%d", &vector[i]); 
		} 
		printf("\n");
		printf("\tLos elementos de los vectores fueron: \n");
		for (i = 0; i < n; i++){
			printf("\t%d\n", vector[i]);
			suma = suma + vector[i];
		}
		printf("\n\tEl resultado de la suma de todos los elementos es: %d",suma); 
	return 0;
}
