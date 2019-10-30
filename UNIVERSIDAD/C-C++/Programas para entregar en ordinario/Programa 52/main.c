#include <stdio.h>
#include <windows.h>
#include <math.h>

int cond, num, suma = 0;

int main () 
{
	printf("Programa 52: Lea num. NEGATIVOS indefinidamente, determine e imprima el mayor de los numeros leidos.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nQuieres ingresar un numero(1 - si, 2 - no): ");
	scanf("%d",&cond);
	while (cond == 1){
		printf("\nIngresa el valor del numero: ");
		scanf("%d",&num);
		if(suma > num){
			suma = num;
		}
		printf("\nQuieres ingresar un numero(1 - si, 2 - no): ");
	    scanf("%d",&cond);	
	}
	printf("\n");
	printf("\tEl numero mas grande o el de mayor valor es: %d",num);
	return 0;
}
