#include <stdio.h>
#include <windows.h>
#include <math.h>

int num1, num2;

int main () {
		printf("Programa 13: Leer dos numeros enteros e imprimir si el  primero es multiplo del segundo ");
	printf(", o si el segundo es multiplo\n del primero o si no son multiplos.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor del primer numero: ");
	scanf("%d",&num1);
	printf("\nDame el valor del segundo numero: ");
	scanf("%d",&num2);
	if(num1 != num2)
	{
		if(abs(num1) > abs(num2))
		{
		    if(num1%num2==0)
		    {
			printf("\nEl numero %d es multiplo de %d",num1,num2);
		    }
		    else 
		    {
			printf("\nEl numero %d no es multiplo de %d", num1, num2);
		    }
	    }
    	else if (abs(num1) < abs(num2))
	    {
		    if(num2%num1==0)
		    {
			printf("\nEl numero %d es multiplo de %d",num2,num1);
		    }
		    else 
		    {
			printf("\nEl numero %d no es multiplo de %d", num2, num1);
		    }
	    }
	}
	else
	{
	printf("\nIngresa un valor diferente.");
	}
	return 0;
}

