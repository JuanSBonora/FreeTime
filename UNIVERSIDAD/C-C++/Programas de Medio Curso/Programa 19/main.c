#include <stdio.h>
#include <windows.h>
#include <math.h>

char nom[45];
int zona;
float cons;

int main () {
	printf("Programa 19: Generar el recibo de luz de un cliente el recibo \n");
	printf("solo contiene su nombre y el pago.\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el nombre del cliente: ");
	scanf("%s", &nom);
	printf("Dame el consumo en kilowatts del cliente: ");
	scanf("%f", &cons);
	printf("Dame el numero de zona del cliente (1 - Monterrey, 2 - San Pedro, 3 - San Nicolas, 4 - GUadalupe): ");
	scanf("%d", &zona);
	printf("\n");
	switch(zona)
	{
		case 1:
			{
				cons = cons * 0.85;
				printf("\tRECIBO DE COMISION DE LUZ.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
			}
			break;
		case 2:
			{
				cons = cons * 0.90;
				printf("\tRECIBO DE COMISION DE LUZ.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
			}
			break;
			case 3:
			{
				cons = cons * 0.87;
				printf("\tRECIBO DE COMISION DE LUZ.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
			}
			break;
			case 4:
			{
				cons = cons * 0.82;
				printf("\tRECIBO DE COMISION DE LUZ.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
			}
			break;
			default:
				{
					printf("\tPor favor solo seleccione alguna de las 4 opciones");
				}
				break;
	}
	
	return 0;
}
