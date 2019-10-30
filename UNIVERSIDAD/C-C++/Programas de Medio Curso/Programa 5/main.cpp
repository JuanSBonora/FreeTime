#include <stdio.h>
#include <windows.h>
#include <math.h>

float x1, x2, x3;
float z1, z2, z3;
float a, b, c, p;

int main()
{
	printf("Programa 5: Programa que calcule el perimetro de un triangulo teniendo como datos de entrada las coordenadas\n");
	printf("de los puntos P1, P2, P3 que corresponden a los vertices del mismo triangulo.");
printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
printf("\nDame las coordenadas del punto 1: ");
scanf("%f%f",&x1,&z1);
printf("\nDame las coordenadas del punto 2: ");
scanf("%f%f",&x2,&z2);
printf("\nDame las coordenadas del punto 3: ");
scanf("%f%f",&x3,&z3);
a = sqrt(pow((x2 - x1),2) + pow((z2 - z1),2));
b = sqrt(pow((x3 - x2),2) + pow((z3 - z2),2));
c = sqrt(pow((x3 - x1),2) + pow((z3 - z1),2));
p = a + b + c;
printf("\nEl valor del perimetro es: %.2f\n", p);
return 0;
}


