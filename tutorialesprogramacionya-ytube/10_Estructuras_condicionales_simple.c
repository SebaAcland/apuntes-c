/*  https://www.tutorialesprogramacionya.com/cya/

*/
#include <stdio.h>
#include <conio.h>

int main()
{
    float sueldo;
    printf("Ingrese el sueldo del operario");
    scanf("%f", &sueldo);
    if (sueldo > 10000)
    {
        printf("Esta persona debe abonar impuesto");
    }

    getch();

    return 0;
}
