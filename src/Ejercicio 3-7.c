/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Nahuel Villaverde Guzman
 Version     : Ejercicio 3-7
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int RESTA(int,int);
int SUMA(int,int);

int main()
{
	setbuf(stdout, NULL);
    int numero1;
    int numero2;
    int resultado;
    char operacion;

    printf("Ingrese un numero (Del 10 al 100)");
    scanf("%d",&numero1);
    while(numero1 < 10 || numero1 > 100)
    {
        printf("Reingrese el numero");
        scanf("%d",&numero1);
    }

    printf("Ingrese el segundo numero (Del 10 al 100)");
    scanf("%d",&numero2);
    while(numero2 < 10 || numero2 > 100)
    {
        printf("Reingrese el numero");
        scanf("%d",&numero2);
    }

    fflush(stdin);
    printf("Ingrese la operacion");
    scanf("%c",&operacion);

    while(operacion =='s' && operacion == 'r')
        {
    		fflush(stdin);
            printf("Reingrese la operacion");
            scanf("%c",&operacion);
        }

    if(operacion == 's')
    {
    	resultado = SUMA(numero1 , numero2);
    }
    else
    {
    	resultado = RESTA(numero1 , numero2);
    }


    printf("1. El resultado es: %d\n", resultado);
}


int RESTA(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 - numero2;
    return resultado;
}

int SUMA(int numero1, int numero2)
{
    int resultado;

    resultado = numero1 + numero2;
    return resultado;
}
