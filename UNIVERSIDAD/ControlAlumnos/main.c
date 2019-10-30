#include <stdio.h>
#include <stdlib.h>
#include "Estructura.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	PERSONA misAlumnos[MAX];
	int i, opcion = 0, posicion = 0;
	for( i = 0; i < MAX; i++ ) {
		misAlumnos[i].matricula = 0;
	}
	while( opcion < 6 ) 
	{
		opcion = Menu();
		switch( opcion ) 
		{
		   case 1: {
		   	CargarDatos( misAlumnos, posicion );
			break;
		   }
		   case 2: {
		   	MostrarDatos( misAlumnos, posicion);
			break;
		   }
		   case 3: {
		   	Promedio( misAlumnos, posicion );
			break;
		   }
		   case 4:{
		   	modify (misAlumnos, posicion);
		   	
			break;
		   }
		   case 5:{
		    elimna (misAlumnos, posicion);
		      if( OK == 's' || OK == 'S' ) {
                 posicion--;
               }
               }
     	  }
	}
	return 0;
}
