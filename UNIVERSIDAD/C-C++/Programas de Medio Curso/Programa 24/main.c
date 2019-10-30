#include <stdio.h>
#include <windows.h>
#include <math.h>

int med;
float val, resul;
int main () {
	printf("Programa 24: Conversor de unidades.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el numero que corresponda a la opcion de conversion que necesitas\n");
	printf("(1 - de pulgadas a milimetros, 2 - de yardas a metros, 3 - millas a kilometros): ");
	scanf("%d",&med);
	printf("Dame la cantidad que deseas convertir: ");
	scanf("%f",&val);
	printf("\n");
	switch (med)
	{
		case 1:
			{
				resul = val * 25.40;
				printf("\t%.2f pulgadas equivalen a: %.2f milimetros.",val, resul);
			}break;
		case 2:
			{
					resul = val * 0.9144;
				printf("\t%.2f yardas equivalen a: %.4f metros.",val, resul);
				
			}break;
		case 3:
			{
				resul = val * 1.6093;
				printf("\t%.2f millas equivalen a: %.2f kilometros.",val, resul);
			}break;
		default:
		{
		    printf("\tIngresa solamente alguno de los casos.");
			}break;	
	}
	return 0;
}
