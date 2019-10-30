#include <stdio.h>
#include <math.h>
#include <windows.h>

int n, i, j, temp;

int main (){
	printf("Programa 62: Leer N numeros, para posteriormente ordenarlos ascendentemente(metodo del apuntador)\n"); 
	printf("e imprimirlos ya ordenados.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Dame la cantidad de elementos del vector: ");
	scanf("%d",&n);
	int x[n];
	for(i = 0; i < n; i++){
		printf("Dame el valor del elemento %i: ",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n");
	for(i = 0; i < n; i++){
		printf("%5d", x[i]);
	}
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(x[j] > x[i]){
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	printf("\nEl nuevo vector queda: \n");
	for(i = 0; i < n; i++){
		printf("%5d",x[i]);
	}
	return 0;
}
