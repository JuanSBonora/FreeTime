#include <stdio.h>
#include <windows.h>
#include <math.h>

int mes;

int main () {
	printf("Programa 18: Leer el n%cmero de alguno de los meses del a%co e imprimir su nombre.\n",163, 164);
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el n%cmero del mes que quieres conocer su nombre: ",163);
	scanf("%d",&mes);
	switch (mes)
	{
			case 1:
			printf ("El numero corresponde al mes de enero\n");
		break;
		case 2:
			printf ("El numero corresponde al mes de febrero\n");
		break;
		case 3:
			printf ("El numero corresponde al mes de marzo\n");
		break;
		case 4:
			printf ("El numero corresponde al mes de abril\n");
		break;
		case 5:
			printf ("El numero corresponde al mes de mayo\n");
		break;
		case 6:
			printf ("El numero corresponde al mes de junio\n");
		break;
		case 7:
			printf ("El numero corresponde al mes de julio\n");
		break;
		case 8:
			printf ("El número corresponde al mes de agosto\n");
		break;
		case 9:
			printf ("El numero corresponde al mes de septiembre\n");
		break;
		case 10:
			printf ("El numero corresponde al mes de octubre\n");
		break;
		case 11:
			printf ("El numero corresponde al mes de noviembre\n");
		break;
		case 12:
			printf ("El numero corresponde al mes de diciembre\n");
		break;
		default:
			printf ("Solo hay 12 meses en un a%co\n",164);
			break;
	}
	return 0;
}
