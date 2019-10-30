#include <stdio.h>
#include <windows.h>
#include <math.h>

int contador;
int valor; 
int suma = 0;
float prom;
int par = 0;

int main () {
	printf("Programa 31: Leer X numeros, solo calcular e imprimir el promedio de los pares.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor X hasta el que se va a promediar: ");
	scanf("%d",&valor);
	printf("\n");
	for(contador = 1; contador <= valor; contador ++)
	{
		if (contador%2 == 0)
		{
		suma = suma + contador;	
		par ++;
	    }
	}
	prom = ((float)suma/(float)par);
	printf("\tEl resultado del promedio de los pares es: %.2f\n",prom);
	return 0;
}
