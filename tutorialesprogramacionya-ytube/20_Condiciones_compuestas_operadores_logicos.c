/*
Confeccionar un programa que lea por teclado tres numeros distintos y nos muestre el mayor
*/
#include <stdio.h>
#include <conio.h>

int main()
{

    int num1, num2, num3;

    printf("Ingrese num1 : ");
    scanf("%i",&num1);
    printf("Ingrese num2 : ");
    scanf("%i",&num2);
    printf("Ingrese num3 : ");
    scanf("%i",&num3);
    

    if ((num1 > num2) && (num1 > num3))
    {
        printf("num1");
    }
    else
    {
        if ((num2 > num1) && (num2 > num3))
        {
            printf("num2");
        }
        else
        {
            printf( "num3");
        }
    }

    getch();
    return 0;
}
