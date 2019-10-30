#include <stdio.h>
#include <windows.h>
#include <math.h>

int cond, edad, elec, am = 0, morena = 0, edad_amlo = 0, edad_anaya = 0, pan = 0, an = 0, edad_meade = 0, me = 0, pri = 0;
int edad_bronco = 0, br = 0, inde = 0, inde2 = 0, edad_marga = 0, ma = 0, hombre = 0, mujer = 0, sexo;
float prom_amlo, prom_anaya, prom_meade, prom_bronco, prom_marga, prom_margah, prom_margam;

int main (){
	printf("Programa 53: Conocer los resultados obtenidos de una encuesta a un grupo indefinido de personas para las elecciones del 2018.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nQuieres entrevistar a alguien(Si--->1,No--->2): ");
	scanf("%d",&cond);
	while(cond == 1){
		printf("Dame tu edad: ");
		scanf("%d",&edad);
		if(edad >= 18){
			printf("Dame tu sexo (Hombre-->1, Mujer-->2): ");
		    scanf("%d", &sexo);
			printf("Por quien votaras (Obrador--->1, Anaya--->2, Meade--->3, Bronco--->4, Margarita-->5): ");
			scanf("%d",&elec);
			switch(elec){
				case 1: {
				    edad_amlo = edad + edad_amlo;
				    morena ++;
					}break;
				case 2: {
					edad_anaya = edad + edad_anaya;
					pan ++;
					}break;
				case 3: {
					edad_meade = edad + edad_meade;
					pri ++;
					}break;
				case 4: {
					edad_bronco = edad + edad_bronco;
					inde ++;
					}break;
				case 5: {
				    edad_marga = edad + edad_marga;
				    inde2 ++;	
					if (sexo == 1){
						hombre ++;
					}		
					else {
						mujer ++;
					}
			}break;
		}
	}
		else{
			printf("Lo siento no te puedo entrevistar, eres menor de edad.");
		}
		printf("\n");
		printf("\nQuieres entrevistar a alguien(Si-->1, No-->2): ");
	    scanf("%d",&cond);
	}
	prom_amlo = (float)edad_amlo/(float)morena;
	prom_anaya = (float)edad_anaya/(float)pan;
	prom_meade = (float)edad_meade/(float)pri;
	prom_bronco = (float)edad_bronco/(float)inde;
	prom_marga = (float)edad_marga/(float)inde2;
		prom_margah = (hombre * 100)/(inde2);
		prom_margam = (mujer * 100)/(inde2);
	printf("\n");
	printf("\tLa cantidad de personas que voto por OBRADOR son: %d\n", morena);
	printf("\tEl promedio de edad de las personas que votaron por Obrador es: %.2f\n",prom_amlo);
	printf("\n");
	printf("\tLa cantidad de personas que voto por ANAYA son: %d\n", pan);
		printf("\tEl promedio de edad de las personas que votaron por Anaya es: %.2f\n",prom_anaya);
	printf("\n");
	printf("\tLa cantidad de personas que voto por  MEADE son: %d\n", pri);
		printf("\tEl promedio de edad de las personas que votaron por MEADE es: %.2f\n",prom_meade);
	printf("\n");
	printf("\tLa cantidad de personas que voto por BRONCO son: %d\n", inde);
		printf("\tEl promedio de edad de las personas que votaron por BRONCO es: %.2f\n",prom_bronco);
	printf("\n");
	printf("\tLa cantidad de personas que voto por MARGARITA son: %d\n", inde2);
		printf("\tEl promedio de edad de las personas que votaron por MARGARITA es: %.2f\n",prom_marga);
		printf("\tEl porcentaje de mujeres que votaron por MARGARITA es: %.2f por ciento\n",prom_margam);
		printf("\tEl porcentaje de hombres que votaron por MARGARITA es: %.2f por ciento\n",prom_margah);
	return 0;
}
