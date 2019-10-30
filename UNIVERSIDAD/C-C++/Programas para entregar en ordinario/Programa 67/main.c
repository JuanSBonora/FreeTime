#include <stdio.h>
#include <math.h>
#include <windows.h>

int i = 0, x[200], c = -1, j, altos = 0, elec;

int main (){
	printf("Programa 67: Leer las calificaciones de N alumnos e imprimir cuantos alumnos obtuvieron las calificaciones mas altas.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Desea agregar la calificacion de un alumno(si --> 1, no --> 2): ");
	scanf("%d",&elec);
	do{
		c ++;
		i ++;
		printf("Dame la calificacion del alumno %i: ", i);
		scanf("%d",&x[c]);
		printf("Desea agregar la calificacion de otro alumno(si --> 1, no --> 2): ");
	    scanf("%d",&elec);
	}while(elec == 1);
	for(j = 0; j < 200; j++){
		c = j;
		if(x[c] >= 8 && x[c] <= 10){
			altos++;
		}
	}
	printf("\n\tLos alumnos con calificaciones altas fueron: %d", altos);
	return 0;
}
