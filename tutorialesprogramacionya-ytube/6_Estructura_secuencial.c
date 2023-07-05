#include <stdio.h>
#include <conio.h>

int main()
{
    int lado, perimetro;
    printf("ingrese lado del cuadrado :");
    scanf("%i", &lado);
    perimetro = lado * 4;
    printf("El perimetro es:");
    printf("%i", perimetro);

    return 0;
}
