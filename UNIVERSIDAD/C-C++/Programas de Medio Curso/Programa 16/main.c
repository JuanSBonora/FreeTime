#include <stdio.h>
#include <windows.h>
#include <math.h>

float comp;

int main () {
	printf("Programa 16: Calculo del descuento a los clientes por el monto que compren.\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el monto de compra: ");
	scanf("%f",&comp);
	if (comp<800)
	{
		printf("Por ser muy poca compra el precio queda igual");
	}
	else {
		if (comp >= 800 && comp <= 1500)
		{
			comp = comp * 0.90;	
			printf("Se le hizo un descuento del 10 por ciento.\n");
			printf("Por lo que solo pagara: %.2f",comp);
		}
		else {
			if (comp > 1500 && comp <= 5000)
			{
			comp = comp * 0.85;	
			printf("Se le hizo un descuento del 15 por ciento.\n");
			printf("Por lo que solo pagara: %.2f",comp);
			}
			else {
			if (comp > 5000)
			{
			comp = comp * 0.80;	
			printf("Se le hizo un descuento del 20 por ciento.\n");
			printf("Por lo que solo pagara: %.2f",comp);
			}	
			}		
			
		}
	}
	return 0; 
}
