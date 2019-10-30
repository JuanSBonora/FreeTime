#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, a = 0, x[50];
int mat[50][50];
float prom;

int main (){
	printf("Programa 75: Desarrolle el procedimiento el cual acomode los elementos de las diagonales en un arreglo unidimensional.\n"); 
		printf("sin repetir ninguna casilla.\n"); 
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
	for(j = 0; j < col; j++){
		printf("%6d", mat[i][j]);
	}
	}
	printf("\n\n\tLos numeros que ocupan las diagonales son: \n");
	for (i = 0; i < fila; i++){
		for (j = 0; j < col; j++){
			if(i == j || i + j == col -1){
				x[a] = mat[i][j];
				a ++;
			}
		}
	}
	for(int k = 0; k < a; k++){
		printf("%6d", x[k]);
	}

	return 0;
}
