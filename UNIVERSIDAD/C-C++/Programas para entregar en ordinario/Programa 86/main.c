#include <stdio.h>
#include <windows.h>

void leemat ();
void impmat ();
void tranmat ();
int fila, col, i, j;
int mat[50][50];

int main(){
	printf("Programa 86: Desarrolle el procedimiento el cual imprima el resultado de una matriz transpuesta.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	leemat();
	system ("cls");
	printf("Matriz original: ");
	printf("\n");
	impmat();
	tranmat();
		printf("\nMatriz transpuesta: ");
	printf("\n");
	impmat();
	printf("\n");
	system("PAUSE");
}

void leemat(){
	do{
		printf("Dame la cantidad de filas: ");
		scanf("%d", &fila);
		printf("Dame la cantidad de columnas: ");
		scanf("%d", &col);
		if(fila != col)
		{
			printf("La cantidad de filas y columnas debe ser igual");
		}
	} while (fila != col);
	for (i = 0; i < fila; i++){
		for (j = 0; j < col; j++)
		{
			printf("Dame el valor de la casilla [%d][%d]:", i, j);
			scanf("%6d", &mat[i][j]);
		}
	}
	return;
}

void tranmat(){
	int temp;
	for(i = 0; i < fila - 1; i++){
		for(j = i+1; j < col; j++){
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
	return;
}
void impmat(){
	for(i = 0; i < fila; i++){
		printf("\n");
		for(j = 0; j < col; j++){
			printf("%6d", mat[i][j]);
		}
	}
	return;
}
