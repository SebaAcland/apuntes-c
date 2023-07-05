#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2,num3,num4,suma,promedio;

    printf("ingrese num1 :");
    scanf("%i", &num1);
    printf("ingrese num2 :");
    scanf("%i", &num2);
    printf("ingrese num3 :");
    scanf("%i", &num3);
    printf("ingrese num4 :");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;
    printf("Suma :");
    printf("%i", suma);
    printf("\n");
    printf("Promedio :");
    printf("%i", promedio);

    return 0;
}
