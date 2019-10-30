#include <stdio.h>
#include <windows.h>
#include <math.h>

int num, mult, cont, sum;

int main () {
	printf("Programa 38: Generar los numeros del 1 al 500 e imprimir todos los numeros perfectos que hay en ese rango y cuantos son.");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    sum=0;
	cont=0;
	printf("Los numeros perfectos entre 1 y 500 son: \n");
	for (num=1; num<=500; num++)
	{
		sum=0;
		for (mult=1; mult<num; mult++)
		{
			if(num%mult==0)
			{
			sum=sum+mult;
		    }
		}
		if (sum==num)
		{
			printf("%d\n", num);
			cont++;
		}
	}
	printf("\tSon %d en total", cont);
return 0;
}
