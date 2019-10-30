#include <stdio.h>
#include <windows.h>
#include <math.h>

int i, num, sum=0, mul=0;

int main () {
	printf("Programa 37: Introducir un numero entero e imprimir si es perfecto o no lo es.\n");
	printf("Nota. Un numero perfecto es aquel cuya suma de sus submultiplos es igual al mismo numero.\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\nIntroduzca el numero que desea verificar si es perfecto: ");
	scanf("%d", &num);
    printf("\n");  	
	for(i=1; i<num; i++) {
		mul=num%i;
		if(mul == 0) {
			sum += i;
		}
	}
	if(sum == num){
		printf("\tEl numero %d es perfecto.\n",num);
	}
	else
	printf("\tEl numero %d no es perfecto.\n",num);
	return 0;
} 
