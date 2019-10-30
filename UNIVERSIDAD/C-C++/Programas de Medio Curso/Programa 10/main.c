#include <stdio.h>
#include <windows.h>
#include <math.h>

float  prom; 
int mult, sum, num1, num2, num3, prod;

int main () {
		printf("Programa 10: Se tienen tres numeros enteros y se desea calcular e imprimir la suma, ");
	printf("el producto, el promedio, el\n mayor y el menor de ellos.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor del primer numero: ");
	scanf("%d",&num1);
	printf("\nDame el valor del segundo numero: ");
	scanf("%d",&num2);
	printf("\nDame el valor del tercer numero: ");
	scanf("%d",&num3);
	prom = ((float)num1 + (float)num2 + (float)num3)/3;
	    printf("\nEl promedio de dichos numeros es: %.2f", prom);
	sum = num1 + num2 + num3;
		printf("\nLa suma de dichos numeros es: %d",sum);
	prod = num1 * num2 * num3;
	    printf("\nEl producto de dichos numeros es: %d",prod);
	if (num1<num2 && num1<num3)
		{
			printf ("\nEl numero mas chico es: %d",num1);
		}
	if (num2<num1 && num2<num3)
		{
			printf ("\nEl numero mas chico es: %d",num2);
		}
	if (num3<num2 && num3<num1)
		{
			printf ("\nEl numero mas chico es: %d",num3);
		}
    if (num1>num2 && num1>num3)
		{
			printf ("\nEl numero mas grande es: %d\n",num1);
		}			
	if (num2>num1 && num2>num3)
		{
			printf ("\nEl numero mas grande es: %d\n",num2);
		}			
	if (num3>num1 && num3>num2)
		{
			printf ("\nEl numero mas grande es: %d\n",num3);
		}			
	return 0;
}
		
