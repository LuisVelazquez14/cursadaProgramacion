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

float suma(float operadorA, float operadorB);

int main(void)
{
	setbuf(stdout,NULL);

	float numero1;//x;
	float numero2;//y;
	float resultado;//z;
	int respuestaScan;

	printf("ingrese numero a calcular: ");
	scanf("%f",&numero1);//x);
	respuestaScan = scanf("%f",&numero1);
	while(respuestaScan == 0)
	{
		printf("ERROR, ingrese numero a calcular: ");
		scanf("%f",&numero1);//x);
	}

	printf("ingrese numero a calcular: ");
	__fpurge(stdin);
	scanf("%f",&numero2);//y);
	respuestaScan = scanf("%f",&numero2);
	while(respuestaScan == 0)
		{
			printf("ERROR, ingrese numero a calcular: ");
			scanf("%f",&numero2);//x);
		}

	resultado=suma(numero1,numero2);//z=suma(x,y);

	printf("La suma es %f",resultado);//z);

}

float suma(float operadorA, float operadorB)//a, int b)
{
	float sumaTotal;//total;
	sumaTotal=operadorA+operadorB;
	return sumaTotal;
}

