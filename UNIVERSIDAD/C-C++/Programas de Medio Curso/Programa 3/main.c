#include <stdio.h>
#include <windows.h>
#include <math.h>

#define PI 3.1416

float v, r;
 
int main()
{
printf("Programa 3: Programa que calcula el volumen de una esfera.");
printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
printf("\nDame el valor del radio de la esfera: ");
scanf("%f",&r);
v = (4 * PI * (pow(r,3))/3);
printf("\nEl volumen de la esfera es = %.2f\n", v);
return 0;
}

