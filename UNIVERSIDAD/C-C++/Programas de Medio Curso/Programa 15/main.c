#include <stdio.h>
#include <windows.h>
#include <math.h>

float sal;

int main () {
		printf("Programa 15: Calculo del salario de un profesor de universidad dependiendo\n");
		printf("criterios establecidos.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el salario del profesor: ");
	scanf("%f",&sal);
	if (sal<18000)
	{
		sal = sal * 1.12;
		printf("El salario del profesor incremento en un 12 por ciento por lo que\n");
		printf("el nuevo salario es: %.2f", sal);
	}
	else
	{
		 if(sal >= 18000 && sal <=30000)
		{
			sal = sal * 1.08;
		printf("El salario del profesor incremento en un 8 por ciento por lo que\n");
		printf("el nuevo salario es: %.2f", sal);
	}
        else
    {
    	if (sal > 30000 && sal <= 50000)
    	{
    				sal = sal * 1.07;
		printf("El salario del profesor incremento en un 7 por ciento por lo que\n");
		printf("el nuevo salario es: %.2f", sal);
	}
	    else
	    {
	    	if (sal > 50000)
	    	{
	    		sal = sal * 1.06;
		printf("El salario del profesor incremento en un 6 por ciento por lo que\n");
		printf("el nuevo salario es: %.2f", sal);
	    	
		}
}
}
}
return 0;
}
	
