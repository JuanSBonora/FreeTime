#include <stdio.h>
#include <windows.h>
#include <math.h>

int d;
float p, km;

int main () 
{
	printf("Programa 7: Elabore un programa que determine el precio de un viaje en ferrocarril ");
	printf("sabiendo que si los dias de estancia\nson mas de 7 y los km recorridos exceden los 800");
	printf("se aplicara un descuento del 25 por ciento en el costo del viaje.\n");
	printf("NOTA. El costo por km recorrido es de 1.50 euros");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el numero de dias del viaje: ");
	scanf("%d",&d);
	printf("\nDame el numero de los kilometros recorridos: ");
	scanf("%f",&km);
	p = km * 1.5;
	if (d>7 && km>800)
	{
		p = p * 0.75;
		printf("\nEl precio del viaje tuvo descuento por lo que el verdadero precio es: %.2f\n",p);
	}
	else
	{
		printf("\nEl precio del viaje es: %.2f\n",p);
	}
	return 0;
}
