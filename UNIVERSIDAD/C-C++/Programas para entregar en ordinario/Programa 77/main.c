#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, x[50], suma;
int mat[50][50];

int main (){
	printf("Programa 77: Desarrolle el procedimiento el cual sume los elementos de cada columna de una matriz cuadrada y posteriormente\n"); 
		printf("imprima la suma de c/u.\n"); 
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
		for (j = 0; j < col; j++){
			printf("Dame el valor de la casilla [%d][%d]:", i, j);
			scanf("%6d", &mat[i][j]);
			
		}
	}
	for(i = 0; i < fila; i++){
	printf("\n");
	suma = 0;
	for(j = 0; j < col; j++){
		printf("%6d", mat[i][j]);
		suma = suma + mat [j][i];
	}
	printf("\tLa suma de la columna %i es: %d",i, suma);
	}
	return 0;
}
