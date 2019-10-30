#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, sum = 0, cont = 0;
int mat[50][50];
float prom;

int main (){
	printf("Programa 71: Leer una matriz cuadrada, calcular e imprimir el promedio de los elementos.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	do{
		printf("Dame la cantidad de filas: ");
		scanf("%d", &fila);
		printf("Dame la cantidad de columnas: ");
		scanf("%d", &col);
		if(fila != col)
		{
			printf("La cantidad de filas y columnas debe ser igual\n");
		}
	} while (fila != col);
	for (i = 0; i < fila; i++){
		for (j = 0; j < col; j++)
		{
			printf("Dame el valor de la casilla [%d][%d]:", i, j);
			scanf("%6d", &mat[i][j]);
			sum = sum + mat [i][j];
			cont ++;
		}
	}
		for(i = 0; i < fila; i++){
	printf("\n");
	for(j = 0; j < col; j++){
		printf("%6d", mat[i][j]);
	}
	}
	prom = (float)sum/(float)cont;
	printf("\n");
	printf("\n\tEl promedio de los elementos de la matriz es: %.2f", prom);
	return 0;
}
