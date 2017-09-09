#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "funciones.h";
int main()
{
    char *mensaje[50];
    float num1=0;
    float num2=0;
    float resultado;

    int op=0;
    while (op!=9)
    {

    system("cls");
    printf("\n1_ Ingresar el 1er operando (A=%.0f): ",num1);
    printf("\n2_ Ingresar el 2do operando (B=%.0f): ",num2);
    printf("\n3_ Calcular la suma (A+B) ");
    printf("\n4_ Calcular la resta (A-B)");
    printf("\n5_ Calcular la division (A/B)");
    printf("\n6_ Calcular la multiplicacion (A*B");
    printf("\n7_ Calcular el factorial (A!)");
    printf("\n8_ Calcular todas las operaciones");
    printf("\n9_ Salir");
    printf("\n\nIngrese opcion: ");
    scanf("%d",&op);

    switch(op)
    {
        case 1: num1=Ingreso("Ingrese el 1er operando: ",num1);
                break;
        case 2: num2=Ingreso("Ingrese el 2do operando: ",num2);
                break;
        case 3: printf("\nSUMA: %.2f",Suma(num1,num2));
                getch();
                break;
        case 4: printf("\nRESTA: %.2f",Resta(num1,num2));
                getch();
        break;
        case 5: printf("\nDivision: %.2f",Division(num1,num2));
                getch();
                break;
        case 6: printf("\nMultiplicacion: %.2f",Multiplicacion(num1,num2));
                getch();
                break;
        case 7: printf("\nFactorial: %.2f",Factorial(num1));
                getch();
                break;
        case 8: printf("\nSUMA: %.2f",Suma(num1,num2));
                printf("\nRESTA: %.2f",Resta(num1,num2));
                printf("\nDivision: %.2f",Division(num1,num2));
                printf("\nMultiplicacion: %.2f",Multiplicacion(num1,num2));
                printf("\nFactorial: %.2f",Factorial(num1));
                getch();
                break;

    }
    }
    return 0;
}
