/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Giovanni Lucchetta
 Version     :
 Copyright   : Tano™
 Description : Tema 1 (Entradas, procesos y salidas)

 Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	setbuf(stdout, NULL);
	int enteredNumbers;

	for(int i = 0; i < 2; i++)
	{
		printf("Please enter 2 numbers to add: ");
		scanf("\n%d", &enteredNumbers);

		enteredNumbers += enteredNumbers;
	}

	printf("\nThe add of the entered numbers is %d", enteredNumbers);

}
