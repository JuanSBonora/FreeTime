#include <stdio.h>
#include <windows.h>
#include <math.h>

float v1, v2, v3, vt;

int main () {
		printf("Programa 9: Un alumno de una materia X ha presentado tres examenes parciales de los cuales ");
	printf("conoce la calificacion de c/u\n por lo que desea conocer su promedio para saber si aprobo o  ");
	printf("reprobo.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor del examen del primer parcial: ");
	scanf("%f",&v1);
	printf("\nDame el valor del examen del segundo parcial: ");
	scanf("%f",&v2);
	printf("\nDame el valor del examen del tercer parcial: ");
	scanf("%f",&v3);
	vt = (v1 + v2 + v3)/3;
	if (vt>=7)
	{
		printf("\nEl alumno aprobo la materia con: %.2f de promedio",vt);
	}
	else if (vt<7)
	{
		printf("\nEl alumno reprobo la materia porque su promedio es: %.2f",vt);
	}
 return 0;
}
	

