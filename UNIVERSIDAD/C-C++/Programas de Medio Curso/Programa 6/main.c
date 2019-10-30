#include <stdio.h>
#include <windows.h>
#include <math.h>

int n;

main () 
{
	printf("Programa 6: Elabore un programa que lea el valor de un numero entero positivo, determine e imprima si es par o impar.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el numero: ");
	scanf("%d",&n);
	if (n>0)
	{
		if(n%2==0)
		{
			printf("\nEl numero es par\n");
		}
		else
		{
			printf("\nEl numero es impar\n");
		}
	}
	else
	{
		printf("\nSolo numeros positivos\n");
	}
	return 0;
}

