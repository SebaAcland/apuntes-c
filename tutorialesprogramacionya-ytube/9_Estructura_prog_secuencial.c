#include <stdio.h>
#include <conio.h>

int main()
{
    int precio, cantidad, importe;

    printf("ingrese precio :");
    scanf("%i", &precio);
    printf("ingrese cantidad :");
    scanf("%i", &cantidad);

    importe = precio * cantidad;

    printf("Importe :");
    printf("%i", importe);

    return 0;
}
