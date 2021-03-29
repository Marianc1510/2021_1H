/*
 ============================================================================
 Name        : Clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>

int sumar(int operador1, int operador2,float* pResultado);
int resta(int operador1, int operador2,float* pResultado);
int dividir(int operador1, int operador2, float* pResultado);
int multiplicar(int operador1, int operador2,float* pResultado);
int main(void) {
	float resultado;
	int numeroA;
	int numeroB;
	char opcion;
	int continuar;
	float respuestaFinal;

	while(1)
	{
		printf("¿QUE CALCULO DESEA REALIZAR? Ingrese digito:"
					"\n+)SUMA "
					"\n-)RESTA"
					"\n*)MULTIPLICACION"
					"\n/)DIVISION");
			__fpurge(stdin);
			scanf("%c", &opcion);
			if(opcion == '+' || opcion == '-' || opcion == '*' || opcion == '/')
			{
				printf("INGRESE NUMERO 1:");
				__fpurge(stdin);
				scanf("%d", &numeroA);
				printf("\nINGRESE NUMERO 2:");
				__fpurge(stdin);
				scanf("%d",&numeroB);
			}
			switch(opcion)
			{
			case '+':
			respuestaFinal =sumar(numeroA,numeroB,&resultado);
			break;
			case '-':
			respuestaFinal=resta(numeroA,numeroB,&resultado);
			break;
			case '*':
			respuestaFinal=multiplicar(numeroA, numeroB, &resultado);
			break;
			case '/':
			respuestaFinal =dividir(numeroA,numeroB,&resultado);
			break;
			}
		if(respuestaFinal ==0)
		{
			printf("\nEL RESULTADO ES %.2f",resultado);
		}
		else
			printf("\nERROR!DIGITO NO VALIDO");

		printf("\nDesea continuar? [si: 1 / no: 0]");
		__fpurge(stdin);
		scanf("%d",&continuar);
		if (continuar ==0)
		{
			break;
		}
	}

	return EXIT_SUCCESS;
}

int dividir(int operador1, int operador2, float* pResultado)
{
	int resultado=-1;
	if(pResultado != NULL && operador2 !=0)
	{
		*pResultado=(float) operador1/ operador2;
		resultado=0;
	}
	else
		resultado=-1;
	return resultado;
}
int sumar(int operador1, int operador2,float* pResultado)
{
	int retorno=-1;
	if(pResultado != NULL)
	{
		*pResultado= operador1 + operador2;
		retorno=0;
	}
	return retorno;
}

int resta(int operador1, int operador2,float* pResultado)
{
	int retorno=-1;
	if(pResultado !=NULL)
	{
		*pResultado= operador1 - operador2;
		retorno=0;
	}
	return retorno;
}
int multiplicar(int operador1, int operador2,float* pResultado)
{
	int retorno=-1;
	if(pResultado !=NULL)
	{
		*pResultado = operador1 * operador2;
		retorno=0;
	}
	return retorno;
}
