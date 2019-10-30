#include <stdio.h>
#include <windows.h>
#include <math.h>

int mayor = 0;
int i;

int main () {
	int num; 
	printf("Programa 33: Leer X numeros e imprimir el mayor.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nCuantos numeros quieres: ");
	scanf("%d",&num);
	printf("\n");
	int cont[num]; 
	for(i = 0; i < num; i++)
	{
	 printf("Introduce el numero %i: ",i+1);
	 scanf("%i", &cont[i]);
    }
    for(i = 0; i < num; i++){
    	if (cont[i] > mayor){
    		mayor = cont[i];
		}
	}
	printf("\n");
	printf("\tEl numero mayor es: %d\n",mayor);
	return 0;
}

