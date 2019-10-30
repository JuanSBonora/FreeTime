#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, mayor = 0;
int mat[50][50];

int main (){
	printf("Programa 70: Leer una matriz en la cual el numero de columnas sea igual al de filas, imprimir el \n"); 
	printf("elemento mayor y en que posicion esta.\n"); 
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
			if (mayor < mat[i][j]){
			mayor = mat[i][j];	
			}
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
		if(mayor == mat[i][j]){
			printf("\n\tEl numero mayor esta en la casilla: [%d][%d]", i, j);
		}
	}
	}
	printf("\n\tEl numero mayor es: %d", mayor);
	return 0;
}
