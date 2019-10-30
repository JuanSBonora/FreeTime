#include <stdio.h>
#include <windows.h>
#include <math.h>

int num;
int i;
int sum = 0;

int main () {
	printf("Programa 40: Leer un numero e imprimir todos sus submultiplos.\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    printf("Dame el valor: ");
    scanf("%d",&num);
    printf("\n");
    printf("Los submultiplos de %d son: \n",num);
    for(i = 1; i < num; i++)
    {
    	if (num%i == 0)
    	{
    		printf("%d\n",i);
		}
	}
	return 0;
}
