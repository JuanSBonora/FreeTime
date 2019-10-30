#include <stdio.h> // librerias standar
#include <stdlib.h>
#include "Estructura.h" // librerias propias

void MostrarDatos( PERSONA BD[], int p)
	{
	FILE *aux_archivo; //Puntero al archivo
	aux_archivo = fopen("miPrimerFile.txt", "a");
    int i;
    
    printf("   Mat     Nombre                                   Ed Peso Altura\n");
    printf("   ------- ---------------------------------------- -- ---- ------\n");
	for(i = 0; i < MAX; i++)
		{
		if( BD[i].matricula != 0 )
		{	
			printf("   %7d %-40s %2d %4.1f %6.2f\n", BD[i].matricula, BD[i].nombre, BD[i].edad, BD[i].peso, BD[i].altura);
			
		}
		if (aux_archivo == NULL)
			{
		printf("Fallo la apertura del archivo\n");
		//return 1; //Abortar la ejecucio del programa
			}

		fprintf(aux_archivo, "%7d %-40s %2d %4.1f %6.2f\n", BD[i].matricula, BD[i].nombre, BD[i].edad, BD[i].peso, BD[i].altura);
		fclose(aux_archivo);
		}
		printf("\n");
		system("PAUSE");
	}
	
