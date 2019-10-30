/*
L = 50
X = 10
V = 5
I = 1
*/
#include <stdio.h>
#include <windows.h>
#include <math.h>

int numero, unidades, decenas;

int main () {
	printf("Programa 17: Leer un numero entero entre el 1 y 50 e imprimir su equivalente en romano.\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDigite un numero entre el 1 y 50: ");
 	scanf("%i", &numero);
 	
 	//numero= 2152 -> 2000 + 100 + 50 + 2
 	
 	unidades = numero%10; numero = numero/10;
 	decenas = numero%10; numero = numero/10; 
 	printf("\n");
 	printf("Su equivalente en romano es: ");
    switch(decenas){
 		case 1: printf("X"); break;
 		case 2: printf("XX"); break;
 		case 3: printf("XXX"); break;
 		case 4: printf("XL"); break;
 		case 5: printf("L"); break;
	 } 
	switch(unidades){
 		case 1: printf("I"); break;
 		case 2: printf("II"); break;
 		case 3: printf("III"); break;
 		case 4: printf("IV"); break;
 		case 5: printf("V"); break;
 		case 6: printf("VI"); break;
 		case 7: printf("VII"); break;
 		case 8: printf("VIII"); break;
 		case 9: printf("IX"); break;
	 }
  	  	
 	return 0;
}


