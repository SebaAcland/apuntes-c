/*
*/
#include <stdio.h>
#include <conio.h>

int main()
{

    int num1, num2;
    printf("ingrese primer valor:");
    scanf("%i", &num1);
    printf("ingrese segundo valor:");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("%i", num1);
    }
    else
    {
        printf("%i", num2);
    }

    getch();
    return 0;
}

