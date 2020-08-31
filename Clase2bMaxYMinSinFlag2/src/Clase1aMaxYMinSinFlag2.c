/*
 ============================================================================
 Name        : Clase1.c
 Author      : 
 Version     : Pedir numeros hasta que el usuario quiera e ingrese el 888 y dar como resultado maximo y minimo
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int maximo;
	int minimo;
	int i=0;
	int bufferInt;

	//int flag=1;

	do
	{
		printf("ingrese un numero: \n ");
		scanf("%d",&bufferInt);
		if(i==0)
		{
			maximo = bufferInt;
			minimo = bufferInt;
			i=1;
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


	}while(bufferInt != 888);

	printf("el valor de minimo es %d y el valor de maximo: %d", minimo,maximo);



	return 0;
}
