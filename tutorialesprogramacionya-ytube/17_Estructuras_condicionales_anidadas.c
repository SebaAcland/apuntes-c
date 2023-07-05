/*
Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el numero es positivo, negativo o nulo(Si es cero)
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int numero;
    printf("Ingrese numero : ");
    scanf("%i", &numero);

    if (numero >= 0)
    {
        if (numero > 0)
        {
            printf("Positivo");
        }
        else
        {
            printf("Nulo");
        }
    }
    else
    {
        printf("negativo");
    }

    getch();
    return 0;
}
