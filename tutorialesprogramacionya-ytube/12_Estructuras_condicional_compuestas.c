/*
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, producto, division, suma, diferencia;
    printf("ingrese primer valor:");
    scanf("%i", &num1);
    printf("ingrese segundo valor:");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        suma = num1 + num2;
        diferencia = num1 - num2;
        printf("%i", suma);
        printf("\n");
        printf("%i", diferencia);
        printf("\n");
    }
    else
    {
        producto = num1 * num2;
        division = num1 / num2;
        printf("%i", producto);
        printf("\n");
        printf("%i", division);
        printf("\n");
    }

    getch();
    return 0;
}
