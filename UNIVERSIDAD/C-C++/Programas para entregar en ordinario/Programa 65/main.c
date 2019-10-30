#include <stdio.h>
#include <math.h>
#include <windows.h>

int num = 20, i, j= 0, primos[20], temp = 0;

int main (){
	printf("Programa 65: Almacenar los primeros 20 numeros primos en un vector e imprimirlos comenzando del ultimo al primero.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Los primeros 20 numeros primos son: \n");
	for(i = 1; j < 20; i++){
       if(esPrimo (i) != 0){
       	primos[j]=i;
       	j++;
	   }
	}
	for(i=0; i<num; i++){
		printf("%5d", primos[i]);
	}
	for(i = 0; i < num-1; i++){
		for(j = i+1; j < num; j++){
			if(primos[j] > primos[i]){
				temp = primos[i];
				primos[i] = primos[j];
				primos[j] = temp;
			}
		}
	}
	printf("\nAcomodados del ultimo al primero queda: \n");
	for(i = 0; i < num; i++){
		printf("%5d",primos[i]);
	}
	return 0;
}
int esPrimo(int n){
		int rq ,i;
		rq = (int) sqrt (n);
		for ( i = 2; i <= rq; i++)
		 {
			if (fmod(n,i) == 0)
				return 0;
		}
		return n;
}

