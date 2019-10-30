#include <stdio.h>
#include <math.h>
#include <windows.h>

int main (){
	printf("Programa 59: Leer N numeros e imprimirlos de forma inversa.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	int n;
	printf("Dame la cantidad de elementos del vector: ");
	scanf("%d",&n);
	int vector[n];
	    for(int i = 0; i < n; i++){
	    	printf("\nDame el valor del elemento %d: ", i);
			scanf("%d", &vector[i]); 
		} 
		printf("\n");
		printf("\tLos elementos del vector acomodados de forma inversa son: \n");
		for (int i = n-1; i >= 0; i--){
			printf("\t%d\n", vector[i]);
		}
	return 0;
}
