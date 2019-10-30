#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, col, i, j, suma;
int mat[50][50];

int main (){
	printf("Programa 82: Desarrolle el procedimiento el cual sume los elementos  de la columna y fila central.\n"); 
	printf("NOTA: Solo se puede con matrices cuadradas impares: 3x3, 5x5, 7x7...\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	do{
		printf("Dame la cantidad de filas: ");
		scanf("%d", &fila);
		printf("Dame la cantidad de columnas: ");
		scanf("%d", &col); 
		if(fila != col || fila%2 == 0 || col%2 == 0){
			printf("La cantidad de filas y columnas debe ser igual y numeros impares.\n");
		}
	} while (fila != col || fila%2 == 0 || col%2 == 0);
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
			if(i == (fila -1)/2 || j == (col -1)/2){
				suma = suma + mat[i][j];
			}
		}
	}
	printf("\n\n\tLa suma de los elementos centrales da:%d",suma);
	return 0;
}
