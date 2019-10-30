#ifndef _ESTRUCTURA_
#define _ESTRUCTURA_

#define MAX 10

typedef struct {
	int matricula;
	char nombre[40];
	int edad;
	float peso;
	float altura;
} PERSONA;
char OK;

int Menu(void);
void CargarDatos(PERSONA [], int);
void MostrarDatos(PERSONA [], int);
void Promedio(PERSONA [], int);
void elimna (PERSONA BD[], int);
void modify ( PERSONA BD[], int );

#endif
