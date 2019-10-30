#include <stdio.h> // librerias standar
#include <stdlib.h>
#include "Estructura.h" // librerias propias
 
void elimna ( PERSONA BD[], int p) {
  int i, k = -1, m;
  system("cls");
  printf("\n\n\n");
  printf("\tDatos del Alumno que desea eliminar\n");
  printf("\t========================================\n");
  printf("\tMatricula ----> ");
  scanf("%d", &m);
  for( i = 0; i < 1; i++ ) {
    if( m == BD[i].matricula ) {
       k = i;
       break;
    }

  }
 if( k < 0 ) {
    printf("\tEl Alumnos NO EXISTE\n\n");
    system("pause");
    OK = 'n';
    return;
  }
  printf("\tNombre -------> %s\n\n", BD[k].nombre);
  printf("\tEdad -> %12.1d\n\n", BD[k].edad);
  printf("\tPeso -> %12.1f\n\n", BD[k].peso);
  printf("\tAltura -> %12.1f\n\n", BD[k].altura);
  printf("\tDeseas darlo de BAJA (s/n) -> ");
  scanf("%s", &OK);
  if( OK == 's' || OK == 'S' )
   {
		 BD[i].matricula = 0;
	   
    	
   }
     return;
}
