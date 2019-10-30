#include <stdio.h>
#include <windows.h>
#include <math.h>

int i,nuevo = 0, actual = 1, impar, par;

int main () {
	printf("Programa 43: Generar N numeros de la serie: 1, -1, 2, -2, 3, -3, 4... (minimo 4).\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\n");  
    for(i = 1; i <= 10; i++)
    {
    	printf("%d\n", actual);
    	par = (2* i);
    	nuevo = actual - par;
    	printf("%d\n",nuevo);
    	impar = (2* i) + 1;
    	actual = nuevo + impar;
	}
	
	return 0;
}
