#include <stdio.h>
#include <windows.h>
#include <math.h>

float p;

int main () {
		printf("Programa 8: Introducir como dato el precio de un producto, incrementar el 11 por ciento ");
	printf("si es inferior a 1500, y el 8\n por ciento si fuera mayor o igual a dicho precio, imprimir el ");
	printf("nuevo precio del producto.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el precio del producto: ");
	scanf("%f",&p);
	if (p<1500)
	{
		p = p * 1.11;
		printf("\nPor ser compra menor a 1500 se le anexara 11 por\nciento a su precio");
		printf(" por lo que el nuevo precio es: %.2f\n",p);
	} else if (p>=1500)
		{
		p = p * 1.08;
			printf("\nPor ser compra mayor o igual a 1500 se le anexara 8 \npor ciento a su precio");
		printf(" por lo que el nuevo precio es: %.2f\n",p);
	}
	return 0;
}
