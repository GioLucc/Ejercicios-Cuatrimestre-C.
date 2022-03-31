/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Giovanni Lucchetta
 Version     :
 Copyright   : Tano™
 Description : Tema 1 (Entradas, procesos y salidas)

 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroIngresadoUno;
	int numeroIngresadoDos;
	int numeroIngresadoTres;

	printf("Ingrese su primer numero: ");
	scanf("%d", &numeroIngresadoUno);

	printf("Ingrese su segundo numero: ");
	scanf("%d", &numeroIngresadoDos);

	printf("Ingrese su tercer numero: ");
	scanf("%d", &numeroIngresadoTres);

	if(numeroIngresadoUno > numeroIngresadoDos && numeroIngresadoUno > numeroIngresadoTres)
	{
		printf("El numero mayor fue el primero: %d", numeroIngresadoUno);
	}
	else
	{
		if (numeroIngresadoDos > numeroIngresadoTres)
		{
			printf("El numero mayor fue el segundo: %d", numeroIngresadoDos);
		}
		else
		{
			printf("El numero mayor fue el tercero: %d", numeroIngresadoTres);
		}
	}

}


