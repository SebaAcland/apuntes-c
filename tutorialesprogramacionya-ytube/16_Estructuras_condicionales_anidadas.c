/*
Se cargan por teclado 3 numeros distintos. Mostrar en pantalla el mayor de ellos.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese numero 1: ");
    scanf("%i", &num1);
    printf("Ingrese numero 2: ");
    scanf("%i", &num2);
    printf("Ingrese numero 3: ");
    scanf("%i", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Numero 1 es mayor");
        }
        else
        {
            printf("Numero 3 es mayor");
        }
    }
    else
    {
        if (num3 > num2)
        {
            printf("Numero 3 es mayor");
        }
        else
        {
            printf("Numero 2 es mayor ");
        }
    }

    getch();
    return 0;
}
