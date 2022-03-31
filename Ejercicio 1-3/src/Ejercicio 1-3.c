/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Giovanni Lucchetta
 Version     :
 Copyright   : Tano™
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main (void)
{
	setbuf(stdout,NULL);
	int numeroIngresadoUno;
	int numeroIngresadoDos;
	int numeroIngresadoTres;

	printf ("Ingrese un numero: ");
	scanf ("\n%d", &numeroIngresadoUno);

	printf ("Ingrese el segundo numero: ");
	scanf ("\n%d", &numeroIngresadoDos);

	printf ("Ingrese el tercer numero: ");
	scanf ("\n%d", &numeroIngresadoTres);

	if(numeroIngresadoUno > numeroIngresadoDos && numeroIngresadoUno < numeroIngresadoTres || numeroIngresadoUno < numeroIngresadoDos && numeroIngresadoUno > numeroIngresadoTres)
	{
	  printf("%d este es el numero del medio y es el primero\n", numeroIngresadoUno);
	}
	else
	{
		if(numeroIngresadoDos > numeroIngresadoUno && numeroIngresadoDos < numeroIngresadoTres || numeroIngresadoDos < numeroIngresadoUno && numeroIngresadoDos > numeroIngresadoTres)
		{
			printf("%d es el numero del medio y es el segundo\n", numeroIngresadoDos);
		}
		else
		{
			if(numeroIngresadoTres > numeroIngresadoUno && numeroIngresadoTres < numeroIngresadoDos || numeroIngresadoTres < numeroIngresadoUno && numeroIngresadoTres > numeroIngresadoDos)
			{
				printf("%d es el numero del medio y es el tercero\n", numeroIngresadoTres);
			}
			else
			{
				printf("No existe el numero del medio\n");
			}
	    }
	}

	  printf("Finaliza la ejecución del codigo");
}



