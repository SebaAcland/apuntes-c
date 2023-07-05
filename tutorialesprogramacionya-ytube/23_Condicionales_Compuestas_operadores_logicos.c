/* Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del promero con el segundo y a este resultado se lo multiplica por el tercero.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese num1 : ");
    scanf("%i", &num1);
    printf("Ingrese num2 : ");
    scanf("%i", &num2);
    printf("Ingrese num3 : ");
    scanf("%i", &num3);

    if (num1 == num2 && num1== num3) // NO funiciona haciendo num1==num2==num3;
    {
        int suma = num1 + num2;
        printf("%i", suma);
        printf("\n");
        int result = suma * num3;
        printf("%i", result);
    }

    getch();
    return 0;
}
