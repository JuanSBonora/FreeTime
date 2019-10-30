#include <stdio.h>
#include <windows.h>
#include <math.h>

float a, b, c;

int main()
{
	printf("Programa 4: Programa que calcule la hipotenusa de un triangulo rectangulo en base al valor de sus catetos.");
printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
printf("\nDame el valor del primer cateto: ");
scanf("%f",&a);
printf("\nDame el valor del segundo cateto: ");
scanf("%f",&b);
c = sqrt((pow(a,2))+(pow(b,2)));
printf("\nEl valor de la hipotenusa es: %.4f\n", c);
return 0;
}


