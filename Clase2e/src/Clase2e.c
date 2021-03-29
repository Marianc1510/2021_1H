/*
 ============================================================================
 Name        : Clase2e.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;
	float promedio;
	int acumulador=0;
	int contador=0;
	int continuar;
	while(1)
	{
		printf("Ingrese un numero:");
		scanf("%d",&numero);
		if(numero !=0)
		{
			acumulador+=numero;
			contador++;
			printf("\nDesea continuar? [si: 1 / no: 0]");
			scanf("%d",&continuar);
		}
		 if (continuar ==0)
		{
			break;
		}
	}
	promedio = (float)acumulador/contador;
	printf("\nSu promedio es %.2f", promedio);


	return EXIT_SUCCESS;
}
