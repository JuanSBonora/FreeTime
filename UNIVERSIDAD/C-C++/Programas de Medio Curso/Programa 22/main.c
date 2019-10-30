#include <stdio.h>
#include <windows.h>
#include <math.h>

char nom[45];
int zona;
float cons;

int main () {
	printf("Programa 22: Generar el recibo de agua de un cliente el recibo \n");
	printf("solo contiene su nombre y el pago.\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("Dame el nombre del cliente: ");
	scanf("%s", &nom);
	printf("Dame el consumo de Mcubico del cliente: ");
	scanf("%f", &cons);
	printf("Dame el numero de zona del cliente (1 - Monterrey, 2 - San Nicolas, 3 - Santa catarina, 4 - Escobedo): ");
	scanf("%d", &zona);
	
	printf("\n");
	switch(zona)
	{
			case 1:
			{
				if(cons <= 20){
				cons = cons*2.50;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}
			    else{
			    cons = cons*3;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}
			}
			break;
			case 2:
			{
			if(cons <= 20){
				cons = cons*2.50;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}
			    else{
			    cons = cons*3.25;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}	
			}
			break;
			case 3:
			{
			if(cons <= 20){
				cons = cons*2.50;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}
			    else{
			    cons = cons*2.75;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}	
			}
			break;
			case 4:
			{
				if(cons <= 20){
				cons = cons * 2.50;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}
			    else{
			    cons = cons*2.85;
				printf("\tRECIBO DE COMISION DE AGUA.\n");
				printf("\tEstimado cliente: %s\n",nom);
				printf("\tUsted debe pagar: %.2f\n",cons);
				}
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
