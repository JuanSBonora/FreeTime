#include <stdio.h>
#include <math.h>
#include <windows.h>

int num, i, tot = 0;
float prom, varianza = 0, desv_estandar = 0;

int main (){
	printf("Programa 64: Calcule e imprima la desviacion estandar de N numeros.\n"); 
	printf("Elaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\n");
	printf("Dame la cantidad de numeros: ");
	scanf("%d",&num);
	int x[num];
	for(i = 0; i < num; i++){
		printf("Dame el valor del elemento %i: ",i+1);
		scanf("%d",&x[i]);
		tot = tot + x[i];	
	}
	prom = (float)tot/(float)num;
	for(i = 0; i < num; i++){
		varianza=varianza+pow((x[i]-prom),2);
	}
	desv_estandar=sqrt(varianza/(num-1));
	printf("\n\tLa suma de los numeros es: %i\n", tot);
	printf("\tla media es: %.2f\n", prom);
	printf("\tla desviacion estandar es: %.4f\n", desv_estandar);
	return 0;
}
