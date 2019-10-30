#include <stdio.h>
#include <windows.h>
#include <math.h>

char nomb[30];
int cant, art;
float dinero;

int main () {
	printf("Programa 21: Generar la nota de venta de un cliente (papeleria).\n");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("Dame el nombre del cliente: ");
	scanf("%s",&nomb);
	printf("Dame el numero del tipo de articulo(1 - libreta, 2 - pluma, 3 - lapiz, 4 - borrador, 5 - sacapuntas): ");
	scanf("%d",&art);
	printf("Dame la cantidad de articulos que requiere: ");
	scanf("%d",&cant);
	printf("\n");
	if (cant > 25)
	{
	switch(art)
	{
		case 1:
		{	
		    dinero = (cant * 8.50) * 0.75;
			printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 25\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
		case 2:
		{
			
		    dinero = (cant * 2.50) * 0.75;
			printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 25\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
			
		}break;
		case 3:
		{
		    dinero = (cant * 2.00) * 0.75;
			printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 25\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
			
		}break;
		case 4:
		{
		    dinero = (cant * 1.50) * 0.75;
			printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 25\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
			
		}break;
		case 5:
		{
			
		    dinero = (cant * 1.00) * 0.75;
			printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 25\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
			
		}break;
		}
	}
	else
	{
		if (cant >= 10 && cant <= 25)
		{
		switch(art)
	    {
		case 1:
		{
		    dinero = (cant * 8.50) * 0.85;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 15\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);   
		}break;
		case 2:
		{
			dinero = (cant * 2.50) * 0.85;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 15\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
			
		}break;
		case 3:
		{
			dinero = (cant * 2.00) * 0.85;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 15\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
		case 4:
		{
			dinero = (cant * 1.50) * 0.85;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 15\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
		case 5:
		{
			dinero = (cant * 1.00) * 0.85;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tPor la cantidad de compra se le hizo un desc. del 15\n");
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
	    }
        }
	else
	    {
		if (cant < 10)
		{
		switch(art)
	    {
		case 1:
		{
		    dinero = cant * 8.50;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		    
		}break;
		case 2:
		{
			dinero = cant * 2.50;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
			
		}break;
		case 3:
		{
			dinero = cant * 2.00;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
		case 4:
		{
			dinero = cant * 1.50;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
		case 5:
		{
			dinero = cant * 1.00;
		    printf("\tNOTA DE VENTA DEL CLIENTE.\n");
			printf("\tEstimado cliente: %s\n",nomb);
			printf("\tLa cantidad a pagar es de: %.2f\n",dinero);
		}break;
	    }
	    }
        }
    }
	return 0;
}
