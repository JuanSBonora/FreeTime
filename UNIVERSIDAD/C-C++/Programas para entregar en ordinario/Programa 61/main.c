#include <stdio.h>
#include <math.h>
#include <windows.h>

int num, num2,sus = 0;

int main (){
	printf("Programa 61: Leer N numeros primeramente y almacenarlos, despues introducir un numero cualquiera\n"); 
	printf("y ver si ya se habia capturado o no antes.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Cuantos numeros quieres agregar: ");
	scanf("%d",&num);
	int cont[num];
	printf("\n");
	for(int i = 0; i < num; i++){
		printf("Dame el valor del numero %i: ", i+1);
		scanf("%d", &cont[i]);
	}
	printf("\nIntroduce un numero para ver si ya se habia capturado: ");
	scanf("%d", &num2);
	for(int i = 0; i < num; i++){
		if(num2 == cont [i]){
			printf("\tEl numero ya se habia capturado con anterioridad.");
		}else{
			sus++;
		}
	}
	if(sus == num){
		printf("\tEl numero no se ha capturado.");
	}
	return 0;
}
