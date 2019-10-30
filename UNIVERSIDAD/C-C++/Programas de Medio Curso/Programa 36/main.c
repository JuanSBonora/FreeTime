#include <stdio.h>
#include <windows.h>
#include <math.h>

float pote, resultado, num;

int main () {
	printf("Programa 36: Elevar un numero a una potencia cualquiera.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
    printf("\nDigite el numero a elevar: ");
    scanf("%f",&num);
    printf("A que potencia desea elevar el numero deseado: ");
    scanf("%f",&pote);
    resultado = (pow(num,pote));
    printf("\n");
    printf("\tEl resultado es: %.2f",resultado);
	return 0;
}
