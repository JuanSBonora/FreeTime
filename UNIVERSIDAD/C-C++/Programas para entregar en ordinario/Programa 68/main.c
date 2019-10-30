#include <stdio.h>
#include <math.h>
#include <windows.h>

int i = 0, x[800], c = -1, elec;

int main (){
	printf("Programa 68: Leer N numeros, almacenarlos en un arreglo y posteriormente imprimirlos.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Desea agregar un numero(si --> 1, no --> 2): ");
	scanf("%d",&elec);
	do{
		c ++;
		i ++;
		printf("Dame el valor del numero %i: ", i);
		scanf("%d",&x[c]);
		printf("Desea agregar otro numero(si --> 1, no --> 2): ");
	    scanf("%d",&elec);
	}while(elec == 1);
	printf("\n\tLos numeros capturados son: \n");
	for(int j = 0; j < 800; j++){
		c = j;
	    if(x[c] != 0){
		printf("%d\n",x[c]);
	    }
	}
	return 0;
}
