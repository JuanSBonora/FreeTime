#include <stdio.h> // librerias standar
#include <stdlib.h>
#include "Estructura.h" // librerias propias

void Promedio( PERSONA BD[] ) {
    int i;
    float sumedad, Promedad, sumpeso, Prompeso, sumaltura, Promaltura;
    for(i = 0; i < MAX; i++){
		if( BD[i].matricula == 0 ) break;
		sumedad = sumedad + BD[i].edad;
	} 
	Promedad = (sumedad/i); // i es la que me dice en que posición del arreglo se encuentra, es decir, cuantos datos he registrado
	printf("El promedio de edades es: %.2f \n", Promedad);
	Promedad = 0;
	sumedad = 0;
	
	for(i = 0; i < MAX; i++){
		if( BD[i].matricula == 0 ) break;
		sumpeso = sumpeso + BD[i].peso;
	} 
	Prompeso = (sumpeso/i); 
	printf("El promedio de pesos es: %.2f \n", Prompeso);
	Prompeso = 0;
	sumpeso = 0;
	
	for(i = 0; i < MAX; i++){
		if( BD[i].matricula == 0 ) break;
		sumaltura = sumaltura + BD[i].altura;
	} 
	Promaltura = (sumaltura/i); 
	printf("El promedio de alturas es: %.2f \n", Promaltura);
	system ("pause");
	Promaltura = 0;
	sumaltura = 0;
	return;
}

