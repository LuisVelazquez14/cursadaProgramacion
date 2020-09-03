/*
 ============================================================================
 Name        : Clase1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	//setbuf(stdout, NULL);

	int numero;
	int respuestaScan;
	int i;
	int acumulador=0;
	float promedio;

	for(i=0;i<5;i++)
	{
		printf("ingrese un numero: ");
		__fpurge(stdin);
		respuestaScan = scanf("%d",&numero);
		//printf("respuestascan %d \n",respuestaScan);
		while(respuestaScan == 0)
		{
			printf("ERROR, ingrese un numero: ");
			__fpurge(stdin);
			respuestaScan = scanf("%d",&numero);
		}
		acumulador = acumulador + numero;
	}

	promedio = (float)acumulador / i; //casteo el numero para hacer el calculo momentaneamente

	printf("promedio es %.2f \n ",promedio);



	return EXIT_SUCCESS;
}
