/*
 ============================================================================
 Name        : Clase1.c
 Author      : 
 Version     : Pedir 5 numeros y dar como resultado maximo y minimo
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int maximo;
	int minimo;
	int i;
	int bufferInt;
	int flag=1;

	for(i=0;i<5;i++)
	{
		printf("ingrese un numero: \n ");

		scanf("%d",&bufferInt);
		if(flag==1)
		{
			maximo = bufferInt;
			minimo = bufferInt;
			flag = 0;
		}
		else
		{
			if(bufferInt > maximo)
			{
				maximo = bufferInt;
			}
			if(bufferInt < minimo)
			{
				minimo = bufferInt;
			}
		}

	}

	printf("el valor de minimo es %d y el valor de maximo: %d", minimo,maximo);



	return EXIT_SUCCESS;
}
