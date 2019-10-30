#include <stdio.h>
#include <windows.h>
#include <math.h>

int val, resul;
float val1, val2;

int main () {
	printf("Programa 23: Calcular el valor de f(x).");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor inicial de f(x) en enteros: ");
	scanf("%d",&val);
	printf("\n");
		if(val >= 4)
		{
		resul = val%4;
	    switch (resul)
	    {
		case 0:
			{
		    	val = pow(val,3);	
				printf("\tEl nuevo valor segun f(x) = x^3 es: %d",val);		
			}break;
		case 1:
			{
				val1 = ((pow(val,2) - 14) / pow(val,2));
				printf("\tEl nuevo valor segun f(x) = (x^2 - 14)/ x^2 es: %.2f",val1);	
			}break;
		case 2:
			{
				val = pow(val,3) + 5;	
				printf("\tEl nuevo valor segun f(x) = x^3 + 5 es: %d",val);		
			}break;
		case 3:
			{
				val2 = sqrt(val);	
				printf("\tEl nuevo valor segun f(x) = raiz cuadrada de x es: %.2f", val2);		
			}break;
	    } 
		}
	    else
	    {
	    	printf("\tIngresa otro valor diferente.");
		} 
	return 0;
}
