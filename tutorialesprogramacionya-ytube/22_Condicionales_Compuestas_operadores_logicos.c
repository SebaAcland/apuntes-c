/* Realizar un programa que pida cargar la fecha, luego ferificar si dicha fecha corresponde a Navidad
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

    if (dd == 25 && mm == 12){
        printf("Corresponde a Navidad");
    }

    

    getch();
    return 0;
}
