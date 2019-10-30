#include <stdio.h>
#include <windows.h>
#include <math.h>

int perf;

int main (){
	printf("Programa 56: Elabore un programa que genera e imprima los primeros 4 numeros perfectos.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Los 4 primeros numeros perfectos son: \n");
	do{
		long int i, num, sum=0, mul=0;
		num ++;
	   for(i=1; i<num; i++) {
		mul=num%i;
		if(mul == 0) {
			sum += i;
		}
	}
	if(sum == num){
		printf("\tEl numero %ld es perfecto.\n",num);
		perf ++;
	}
	}while(perf <= 4);
	return 0;
}
