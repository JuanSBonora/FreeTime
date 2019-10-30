#include <stdio.h> // librerias standar
#include <stdlib.h>
#include "Estructura.h" // librerias propias

/* funcion que despliega un menu en pantalla */

int Menu( void ) {
    int op; // variable local solo existe mientras esta
	        // en ejecución la funcion menu
	system("cls");
	printf("\n\n\n");
	printf("\t\t\t MENU PRINCIPAL\n");
	printf("\t\t\t================\n");
	printf("\t\t\t1.- Registrar Datos\n");
	printf("\t\t\t2.- Mostrar Datos\n");
	printf("\t\t\t3.- Promedios\n");
	printf("\t\t\t4.- Cambios\n");
	printf("\t\t\t5.- Bajas\n");
	printf("\t\t\t6.- Salir\n");
	printf("\t\t\tOpcion ---> ");
	scanf("%d", &op);
	return op; 
}
