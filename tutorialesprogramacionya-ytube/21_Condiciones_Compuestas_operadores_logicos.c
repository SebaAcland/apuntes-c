/*
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int dd, mm, aa;

    printf("Ingrese dia :");
    scanf("%i", &dd);
    printf("Ingrese mes :");
    scanf("%i", &mm);
    printf("Ingrese anio :");
    scanf("%i", &aa);

    if (mm == 1 || mm == 2 || mm == 3)
    {
        printf("Corresponde al primer trimeste");
    }

    getch();
    return 0;
}
