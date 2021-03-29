/*
 ============================================================================
 Name        : Clase4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	if(utn_getNumeroInt(&numero,"\nINGRESE NUMERO:","\nFUERA DE RANGO",0,99,2)==0)
	{
		printf("INGRESASTE %d",numero);
	}

	return EXIT_SUCCESS;
}

