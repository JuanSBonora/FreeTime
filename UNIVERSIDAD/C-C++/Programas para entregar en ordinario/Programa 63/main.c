#include <stdio.h>
#include <math.h>
#include <windows.h>

int n, i, cont = 0, tot = 0;
float prom;

int main (){
	printf("Programa 63: Leer N numeros, y calcular el promedio de lo siguiente:\n"); 
	printf("mayores que el promedio, menores que el promedio, mayores que el promedio y pares, menores que el promedio y pares\n");
		printf("mayores que el promedio e impares y menores que el promedio e impares.\n");  
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Dame la cantidad de numeros: ");
	scanf("%d",&n);
	int x[n];
	for(i = 0; i < n; i++){
		printf("Dame el valor del elemento %i: ",i+1);
		scanf("%d",&x[i]);
		cont ++;
		tot = tot + x[i];	
	}
	prom = (float)tot/(float)cont;
	printf("\nEl promedio  es: %.2f\n", prom);
	for(i = 0; i < n; i++){
		if(x[i] > prom){
			printf("\tEl numero es mayor a el promedio: %i\n", x[i]);
		}
		if(x[i] < prom){
			printf("\tEl numero es menor a el promedio: %i\n", x[i]);
		}
		if(x[i] > prom && x[i]%2 == 0){
			printf("\tEl numero es mayor que el promedio y par: %i\n", x[i]);
		}
		if(x[i] < prom && x[i]%2 == 0){
			printf("\tEl numero es menor que el promedio y par: %i\n", x[i]);
		}
		if(x[i] > prom && x[i]%2 != 0){
			printf("\tEl numero es mayor que el promedio e impar: %i\n", x[i]);
		}
		if(x[i] < prom && x[i]%2 != 0){
			printf("\tEl numero es menor que el promedio e impar: %i\n", x[i]);
		}
	}
	return 0;
}
