#include <stdio.h>
#include <windows.h>
#include <math.h>

int contador;
int valor; 
int suma = 0;
float prom;

int main () {
	printf("Programa 30: Leer X numeros calcular e imprimir el promedio.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor X hasta el que se va a promediar: ");
	scanf("%d",&valor);
	printf("\n");
	for(contador = 0; contador <= valor; contador ++)
	{
		suma = suma + contador;	
	}
	prom = ((float)suma/(float)valor);
	printf("\tEl resultado del promedio de dichos numeros es: %.2f\n",prom);
	return 0;
}
