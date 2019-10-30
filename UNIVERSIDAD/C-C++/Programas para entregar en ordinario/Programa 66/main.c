#include <stdio.h>
#include <math.h>
#include <windows.h>

long int cont, c, sum, num, mult, x[4];

int main (){
	printf("Programa 66: Encontrar los primeros 4 numeros perfectos y almacenarlos en un arreglo unidimensional y luego imprimirlo.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	c=0;
	sum=0;
	cont=0;
	printf("Los primeros 4 numeros perfectos son: \n");
	do{
		num ++;
		sum=0;
		for (mult=1; mult<num; mult++)
		{
			if(num%mult==0)
			{
			sum=sum+mult;
		    }
		}
		if (sum==num)
		{
			x[c] = sum;
			c++;
			printf("%d\n", num);
			cont++;
		}
	}while(cont <= 4);
	return 0;
}
