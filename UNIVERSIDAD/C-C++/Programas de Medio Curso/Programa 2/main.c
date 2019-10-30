#include <stdio.h>
#include <windows.h>
#include <math.h>

float C, F;

int main ()
{
printf("Programa 2: Convierte de grados centigrados a grados farenheit.");
printf("\nElaborado por: Santiago Bonora Kevin Fabian \t Matricula: 1889085\n");
printf("\nDame los grados en escala centigrada a convertir: ");
scanf("%f",&C);
F = (C*1.8) + 32;
printf ("\nLos grados farenheit son = %.2f\n",F);
return 0;
}
