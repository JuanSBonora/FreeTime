#include <stdio.h>
#include <windows.h>
#include <math.h>

int contador, x; 
int suma = 0;
int impar = 0;

int main () {
	printf("Programa 29: Leer X numeros e imprimir la suma de los que sean impares y decir cuantos son.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor X hasta el que se va a sumar: ");
	scanf("%d",&x);
	printf("\n");
	for(contador = 1; contador <= x; contador ++)
	{
		if (contador%2 != 0)
		{
		suma = suma + contador;	
		impar ++;
     	}
	}
	printf("\tEl resultado de la suma es: %d\n",suma);
	printf("\tLa cantidad de numeros impares que se sumaron fueron: %d",impar);
	return 0;
}
