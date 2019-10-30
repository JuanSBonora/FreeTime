#include <stdio.h>
#include <math.h>
#include <windows.h>

int num;

int main(){
	printf("Programa 54: Programa que genere e imprima la serie Ullam.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	do{
	printf("\nDame el valor de N hasta la que se generara la serie: ");
	scanf("%d",&num);
	if (num <= 1){
		printf("\nEl numero debe ser mayor o igual a 1, vuelve a capturar.");
}
}while(num <= 1);
do{
if (num%2 == 0) {
	num = num/2;
	}
	else{
		num = (num * 3) + 1;
	}
    //El 5 entre el % y el d, se ocupa para dar espacios, en este ejemplo entre cifra y cifra tendrá 5 espacios.
	printf ("\t%5d", num);
}while (num != 1);
return 0;	
}
