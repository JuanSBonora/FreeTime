#include <stdio.h>
#include <windows.h>
#include <math.h>

#define rechum  2604
#define produc  2822.4
#define sistem  2721.6

char nomb[30];
int horas, depart;
float sueldo;

int main () {
	printf("Programa 20: Generar el recibo de nomina de un empleado.\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("Dame el nombre del empleado: ");
	scanf("%s",&nomb);
	printf("Dame el numero de horas trabajadas: ");
	scanf("%d",&horas);
	printf("Dame el numero del departamento donde trabaja(1 - Recursos humanos, 2 - Produccion, 3 - Sistemas): ");
	scanf("%d",&depart);
	printf("\n");
	if (horas > 112)
	{
	switch(depart)
	{
		case 1:
		{
			sueldo = rechum + ((horas - 112) * 23.25);	
			printf("\tRECIBO DE PAGO CATORCENAL.\n");
			printf("\tEstimado empleado: %s\n",nomb);
			printf("\tEl sueldo que cobra es: %.2f\n",sueldo);
		}break;
		case 2:
		{
			sueldo = produc + ((horas - 112) * 25.20);	
			printf("\tRECIBO DE PAGO CATORCENAL.\n");
			printf("\tEstimado empleado: %s\n",nomb);
			printf("\tEl sueldo que cobra es: %.2f\n",sueldo);
		}break;
		case 3:
		{
			sueldo = sistem + ((horas - 112) * 24.30);	
			printf("\tRECIBO DE PAGO CATORCENAL.\n");
			printf("\tEstimado empleado: %s\n",nomb);
			printf("\tEl sueldo que cobra es: %.2f\n",sueldo);
		}break;
		}
	}
	else
	{
		switch(depart)
	{
		case 1:
		{
			sueldo = horas * 23.25;	
			printf("\tRECIBO DE PAGO CATORCENAL.\n");
			printf("\tEstimado empleado: %s\n",nomb);
			printf("\tEl sueldo que cobra es: %.2f\n",sueldo);
			
		}break;
		case 2:
		{
			sueldo = horas * 25.20;	
			printf("\tRECIBO DE PAGO CATORCENAL.\n");
			printf("\tEstimado empleado: %s\n",nomb);
			printf("\tEl sueldo que cobra es: %.2f\n",sueldo);
			
		}break;
		case 3:
		{
			sueldo = horas * 24.30;	
			printf("\tRECIBO DE PAGO CATORCENAL.\n");
			printf("\tEstimado empleado: %s\n",nomb);
			printf("\tEl sueldo que cobra es: %.2f\n",sueldo);
		}break;
		}
	}
	return 0;
}
