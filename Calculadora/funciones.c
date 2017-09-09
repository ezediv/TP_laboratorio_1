#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "funciones.h";
float Ingreso(char *mensaje,float numero)
{

    printf("%s ",mensaje);
    scanf("%f",&numero);
    return numero;

}

float Suma(float num1,float num2)
{
    float resultado;
    resultado=num1+num2;
    return resultado;
}

float Resta(float num1, float num2)
{
    float resultado;
    resultado=num1-num2;
    return resultado;
}

float Division(float num1,float num2)
{
    float resultado;
    ValidarCero(num2);
    resultado=num1/num2;
    return resultado;
}

float Multiplicacion(float num1, float num2)
{
    float resultado;
    resultado=num1*num2;
    return resultado;
}

float ValidarCero(float num2)
{
    while (num2==0)
    {
        printf("\nNo Division por Cero, reingrese 2do numero: ");
        scanf("%f",&num2);
    }
    return num2;
}

float Factorial(float num1)
{


   int auxiliar,i,factorial=1;
   auxiliar=num1;
   while(num1!=auxiliar || num1<0)
   {
                       printf("\nFactorial no posible, reingrese 1er numero: ");
                       scanf("%f",&num1);
                       auxiliar=num1;

                          }
    for(i=num1;i>0;i--)
    {
        factorial=factorial*i;
    }

    return factorial;

}

