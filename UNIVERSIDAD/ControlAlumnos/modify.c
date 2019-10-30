#include <stdio.h> // librerias standar
#include <stdlib.h>
#include "Estructura.h" // librerias propias
 
void modify ( PERSONA BD[], int p) {
  int i, k = -1, m;
  char name[15];
  int edad2,matricula2; float altura2 = 0, peso2;
  system("cls");
  printf("\n\n\n");
  printf("\tDatos del Alumno que desea modificar\n");
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
  printf("\tDeseas Modificarlo (s/n) -> ");
  scanf("%s", &OK);
  if( OK == 's' || OK == 'S' )
   {
   	printf("\tCaptura de datos\n");
	printf("\t===============================\n");
	printf("\tNombre -> ");
	scanf(" %[^\n]", &name);
	printf("\tEdad -> ");
	scanf("%d", &edad2);
	printf("\tPeso en kilos -> ");
	scanf("%f", &peso2);
	printf("\tAltura -> ");
	scanf("%f", &altura2);
		 BD[i].edad = edad2;
		 strcpy(BD[i].nombre, name);
		 BD[i].peso = peso2;
		 BD[i].altura = altura2;
		 
   }
     return;
}
