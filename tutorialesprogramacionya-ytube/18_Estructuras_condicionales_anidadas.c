/* Confeccionar un programa que permita cargar un numero positivo de hasta tres cifras y muestre un mensaje si tiene 1,2 o 3 cifras. Mostrar un mensaje de error si el numero de cifras es mayor.
*/
#include <stdio.h>
#include <conio.h>

int main()
{

    int numero;
    printf("Ingrese numero : ");
    scanf("%i", &numero);

    if (numero >= 1000)
    {
        printf("Error");
    }
    else
    {
        if (numero <= 10)
        {
            printf("Tiene 1 Cifra");
        }
        else
        {
            if (numero <= 100)
            {
                printf("Tiene 2 Cifras");
            }
            else
            {
                if (numero < 1000)
                {
                    printf("Tiene 3 Cifrass");
                }
            }
        }
    }

    getch();
    return 0;
}