#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, suma;
int mat[50][50];

int main (){
	printf("Programa 78: Desarrolle el procedimiento el cual sume los elementos de la periferia de una matriz cuadrada\n"); 
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
	for(i = 0;i < fila; i++){
		for(j = 0; j < col; j++){
			if(i == 0 || i == fila -1 || j == 0 || j == col - 1){
				suma = suma + mat[i][j];
			}
		}
	}
	printf("\n\n\tLa suma de los elementos de la periferia es:%d",suma);
	return 0;
}
