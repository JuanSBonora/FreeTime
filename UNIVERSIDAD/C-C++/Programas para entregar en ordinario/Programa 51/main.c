#include <stdio.h>
#include <windows.h>
#include <math.h>

int cond, num, cont = 0, suma = 0;
float prom;

int main () 
{
	printf("Programa 51: Calcula la suma y el promedio de una serie indefinida de numeros.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nQuieres ingresar un numero(1 - si, 2 - no): ");
	scanf("%d",&cond);
	while (cond == 1){
		printf("\nIngresa el valor del numero: ");
		scanf("%d",&num);
		suma = suma + num;
		cont ++;
		printf("\nQuieres ingresar un numero(1 - si, 2 - no): ");
	    scanf("%d",&cond);	
	}
	if(cont != 0){
		prom = (float)suma / (float)cont;
		printf("\n");
		printf("\tLa suma de los numeros es: %d",suma);
		printf("\tEl promedio de los numeros es: %.3f", prom);
	}
	return 0;
}
