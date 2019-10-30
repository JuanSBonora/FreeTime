#include <stdio.h>
#include <windows.h>
#include <math.h>

int alum;
int rep = 0;
int perf = 0;
int aprob = 0;

int main () {
	printf("Programa 35: Leer promedio de X alumnos e imprimir cuantos reprobaron y cuantos pasaron\n");
	printf("y de los que aprobaron cuantos sacaron 100.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el numero de alumnos en el grupo: ");
	scanf("%d",&alum);
	printf("\n");
	int num[alum];
	for(int i = 0;i < alum; i ++)
	{
		printf("Dame el promedio del alumno %d: ",i + 1);
		scanf("%d",&num[i]);
	}
	for(int i = 0;i < alum; i ++)
	{
		if (num[i] == 100)
		{
			perf ++;
		}
		if (num[i] >= 70)
		{
			aprob ++;
    	}	    
    	else
		{
			if (num[i] < 70)
		    {
    		rep ++;
    	}
		}
	}
	printf("\n");
	printf("\tLos alumnos con promedio perfecto son: %d\n",perf);
	printf("\tLos alumnos aprobados son: %d\n",aprob);
	printf("\tLos alumnos reprobados son: %d\n",rep);
	return 0;
}

