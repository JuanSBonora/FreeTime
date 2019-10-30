#include <stdio.h>
#include <windows.h>
#include <math.h>

int num;
int i;
int sum = 0;

int main () {
	printf("Programa 39: Leer un numero e indicar si el numero es primo o no.\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    printf("Dame el valor: ");
    scanf("%d",&num);
    printf("\n");
    for(i = 1; i <= num; i ++)
    {
    	if(num%i==0)
    	{
    	  sum ++;
		}
	}
	if (sum > 2)
	{
		printf("\t%d No es un numero primo",num);
	}
	else{
		printf("\t%d Es un numero primo",num);
	}
	return 0;
}
