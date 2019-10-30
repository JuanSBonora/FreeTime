#include <stdio.h>
#include <math.h>
#include <windows.h>

int fila, filamat2, colmat2 = 0, col = 0, i, j, suma;
int mat[50][50];
int mat2[50][50];
int mat3[50][50];
void compara_y_lectura();
void impmat();
void restmat ();

int main (){
	printf("Programa 84: Desarrolle el procedimiento el cual efectue la resta de dos matrices de las mismas dimensiones\n"); 
	printf("e imprimir la resultante.\n");
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	compara_y_lectura();
	system("cls");
	impmat ();
	printf("\n\n\tLa resta de estas dos matrices genera: \n");
	restmat();
	return 0;
}

void compara_y_lectura(){
	do{
		printf("Dame la cantidad de filas y columnas de la primera matriz: ");
		scanf("%d", &fila);
		col = fila;
		printf("Dame la cantidad de filas y columnas de la segunda matriz: ");
		scanf("%d", &filamat2); 
	    colmat2 = filamat2;
		if(fila != filamat2){
			printf("Las matrices deben ser de las mismas dimensiones.\n");
		}
	} while (fila != filamat2);
	printf("\tPrimera matriz: \n");
	for(i = 0; i < fila; i++){
		for (j = 0; j < col; j++){
			printf("Dame el valor de la casilla [%d][%d]:", i, j);
			scanf("%6d", &mat[i][j]);
		}
	}
	printf("\tSegunda matriz: \n");
	for(i = 0; i < fila; i++){
		for (j = 0; j < col; j++){
			printf("Dame el valor de la casilla [%d][%d]:", i, j);
			scanf("%6d", &mat2[i][j]);
		}
	}
	return;
}

void impmat(){
	printf("\tPrimera Matriz: \n");
	for(i = 0; i < fila; i++){
	    printf("\n");
	    for(j = 0; j < col; j++){
		    printf("%6d", mat[i][j]);
	    }
	}
	printf("\n\n\tSegunda Matriz: \n");
	for(i = 0; i < fila; i++){
	    printf("\n");
	    for(j = 0; j < col; j++){
		    printf("%6d", mat2[i][j]);
	    }
	}
	return;
}

void restmat(){
	for(i = 0; i < fila; i++){
	    for(j = 0; j < col; j++){
		   mat3[i][j] = mat[i][j] - mat2[i][j];  
	    }
	}
	for(i = 0; i < fila; i++){
	    printf("\n");
	    for(j = 0; j < col; j++){
		    printf("%6d", mat3[i][j]);
	    }
	}
}
