#include <stdio.h>
#include <math.h>
#include <windows.h>

int i, num, no_primo = 0, primo = 0, elec;

int main(){
	printf("Programa 55: Elabore un programa que lea numeros indefinidamente, determine e"); 
	printf("imprima cuales y cuantos de \nestos numeros son primos y cuales y cuantos no primos.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nQuiere a%cadir otro numero (si ---> 1, no ---> 2): ",164);
	scanf("%d",&elec);
	do{
		int sum = 0;
		printf("\nDame el valor: ");
    scanf("%d",&num);
    printf("\n");
    for( i = 1; i <= num; i ++)
    {
    	if(num%i==0)
    	{
    	 sum ++;
		}
	}
	if (sum > 2)
	{
		printf("\t%d No es un numero primo",num);
		no_primo ++;
	}
	else{
		printf("\t%d Es un numero primo",num);
		primo ++;
	}
	printf("\nQuiere a%cadir otro numero (si ---> 1, no ---> 2): ",164);
	scanf("%d",&elec);
	}while(elec == 1);
	printf("\nLa cantidad de numeros primos es: %d", primo);
	printf("\nLa cantidad de numeros que no son primos son: %d", no_primo);
	return 0;
}
