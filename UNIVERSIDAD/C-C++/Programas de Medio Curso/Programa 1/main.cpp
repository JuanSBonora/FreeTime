#include <stdio.h>
#include <windows.h>
#include <math.h>

int main ()
{
	int num1, num2, num3, suma, resta, mult;
	printf("Programa 1: Suma, resta y multiplica tres numeros.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian \t Matricula: 1889085\n");
	printf("\nDame el valor del primer numero: ");
	scanf("%d", &num1);
		printf("\nDame el valor del segundo numero: ");
	    scanf("%d", &num2);
		printf("\nDame el valor del tercer numero: ");
	scanf("%d", &num3);
	suma = num1 + num2 + num3;
	resta = num1 - num2 - num3;
	mult = num1 * num2 * num3;
	printf ("\nSuma = %d \t Resta = %d \t Multiplicacion = %d\n", suma, resta, mult);
	return 0;
}
