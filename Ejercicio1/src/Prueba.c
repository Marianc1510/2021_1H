/*
 ============================================================================
 Name        : Prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int resta(int numero1, int numero2);

int main(void) {
	int numero1;
	int numero2;

	float resultado;

	printf("Ingrese numero 1:");
	scanf("%f",&numero1);
	printf("\n Ingrese numero 2:");
	scanf("%f", &numero2);
	resultado =  resta(numero1,numero2);

	printf("Su resultado es: %f",resultado);


	return EXIT_SUCCESS;
}

int resta(int numero1, int numero2)
{
	int resultado;
	resultado= numero1 - numero2;
	return resultado;
}
