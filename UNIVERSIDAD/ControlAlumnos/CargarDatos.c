#include <stdio.h> // librerias standar
#include <stdlib.h>
#include "Estructura.h" // librerias propias

void CargarDatos( PERSONA BD[], int p ) {
	int i;
	for(i=0; i < MAX; i++) {
		if( BD[i].matricula == 0 ) break;
    }
	printf("\tCaptura de datos\n");
	printf("\t===============================\n");
	printf("\tMatricula -> ");
	scanf("%d", &BD[i].matricula);
	printf("\tNombre -> ");
	scanf(" %[^\n]", &BD[i].nombre);
	printf("\tEdad -> ");
	scanf("%d", &BD[i].edad);
	printf("\tPeso en kilos -> ");
	scanf("%f", &BD[i].peso);
	printf("\tAltura -> ");
	scanf("%f", &BD[i].altura);
    return;
}
