#include <stdio.h>
#include <stdlib.h>

int i,num;
double actual=1.0, anterior=0.0, fibonacci=1.0;
	
int main()
{
		printf("Programa 44: Generar N numeros de la serie Fibonacci.\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\tIndique hasta que serie quiere que se ejecute Fibonacci: ");
	scanf("%d", &num);
	for (i=0;i<num;i++)
	{	
     	printf("\n");
	    printf("%.0f", fibonacci);
		fibonacci = actual + anterior;
		anterior= actual;
		actual = fibonacci;
	}
	
	printf("\n");
	return 0;
}
