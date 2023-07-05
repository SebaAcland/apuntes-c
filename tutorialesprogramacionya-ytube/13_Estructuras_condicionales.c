/*  Se ingresan tres notas de un alumno, si el promedio es mayor o igual asiete mostrar un mensaje "Promocionado"
 */
#include <stdio.h>
#include <conio.h>

int main()
{
    int nota1, nota2, nota3, promedio;
    printf("Ingrese 1 nota del Alumno :");
    scanf("%i", &nota1);
    printf("Ingrese 2 nota del Alumno :");
    scanf("%i", &nota2);
    printf("Ingrese 3 nota del Alumno :");
    scanf("%i", &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 7)
    {
        printf("Promocionado");
    }

    getch();
    return 0;
}