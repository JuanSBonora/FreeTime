#include <stdio.h>
#include <windows.h>
#include <math.h>

float a,b,c;
 int main () {
 	printf("Programa 12: Introducir el valor de tres lados e imprimir si estos forman ");
	printf("un triangulo.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\nIngrese el primer lado: ");
    scanf("%f",&a);
    printf("\nIngrese el segundo lado: ");
    scanf("%f",&b);
    printf("\nIngrese el tercer lado: ");
    scanf("%f",&c);
 if ((abs(a - c) < b) && (b < (a + c))) 
	{
    printf("\nSi forma un triangulo");
    }
else
	{
    printf("\nNo forma un triangulo");
    }
    return 0;
}
