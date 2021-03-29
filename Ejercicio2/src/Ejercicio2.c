/*
 ============================================================================
 Name        : Ejercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int resta(int variable1, int variable2);

int main(void) {

	int numero1;
	int numero2;
	int resultado;


	printf("Ingrese numero 1:");
	scanf("%d", &numero1);
	printf("\nIngrese numero 2:");
	scanf("%d", &numero2);

	if(numero1 != 0 && numero2 !=0)
	{
		resultado = resta(numero1,numero2);
	}
	if(resultado > 0)
	{
		printf("el resultado es positivo %d",resultado);

	}
	else if( resultado <0)
	{
		printf("el resultado es negativo %d", resultado);
	}

	return EXIT_SUCCESS;
}

int resta(int variable1, int variable2)
{
	int resultado;
	resultado= variable1 - variable2;
	return resultado;
}
