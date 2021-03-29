/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: marian
 */
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int utn_getNumeroInt(int* pResultado,char* pTexto,char* pError, int min, int max,int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado != NULL && pTexto != NULL && pError !=NULL && min <=max && reintentos >=0)
	{
		do
		{
			printf("%s",pTexto);
			__fpurge(stdin);
			scanf("%d",bufferInt);
			if(bufferInt >= min && bufferInt <=max)
			{
				*pResultado= bufferInt;
				retorno=0;
				break;
			}
			else
			{
				printf("%s",pError);
				reintentos --;
			}
		}while(reintentos >=0);
	}
	return retorno;
}

int utn_getNumeroFloat(float* pResultado,char* pTexto,char* pError, float min, float max,int reintentos)
{
	int retorno=-1;
	float bufferFloat;
	if(pResultado != NULL && pTexto != NULL && pError !=NULL && min <=max && reintentos >=0)
	{
		do
		{
			printf("%s",pTexto);
			__fpurge(stdin);
			scanf("%.2f",bufferFloat);
			if(bufferFloat >= min && bufferFloat <=max)
			{
				*pResultado= bufferFloat;
				retorno=0;
				break;
			}
			else
			{
				printf("%s",pError);
				reintentos --;
			}
		}while(reintentos >=0);
	}
	return retorno;
}

int utn_getCaracter(char* pResultado,char* pTexto, char* pError,char min, char max,int reintentos)
{
	int retorno=-1;
	char bufferChar;
	if(pResultado != NULL && pTexto != NULL && pError !=NULL && min <=max && reintentos >=0)
	{
		do
		{
			printf("%s",pTexto);
			__fpurge(stdin);
			scanf("%c",bufferChar);
			if(bufferChar >= min && bufferChar <=max)
			{
				*pResultado= bufferChar;
				retorno=0;
				break;
			}
			else
			{
				printf("%s",pError);
				reintentos --;
			}
		}while(reintentos >=0);
	}
	return retorno;
}
