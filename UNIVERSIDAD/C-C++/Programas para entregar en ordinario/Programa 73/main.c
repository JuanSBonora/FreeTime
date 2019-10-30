#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, sum = 0;
int mat[50][50];
float prom;

int main (){
	printf("Programa 73: Leer una matriz cuadrada, imprimir los elementos y la suma de los elementos de la diagonal secundaria.\n"); 
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
		}
	}
	for(i = 0; i < fila; i++){
	printf("\n");
	for(j = 0; j < col; j++){
		printf("%6d", mat[i][j]);
	}
	}
	for(i = 0; i < fila; i++){
	for(j = 0; j < col; j++){
		if(i + j == col - 1){
			sum = sum + mat[i][j];
		}
	}
	}
	printf("\n");
	printf("\n\tLa suma de los elementos de la diagonal secundaria es: %d", sum);
	return 0;
}
