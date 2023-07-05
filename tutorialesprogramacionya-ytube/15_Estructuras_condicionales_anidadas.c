/* confeccionar un programa que pida por teclado tres notas ed un alumno, calcule el promedio e imprima alguno de estos mensajes:
 Si el promedio es >=7 ,pstrar "promocionado"
 Si el pormedio es >=4 y >7 mostrar "Regular"
 Si el promedio es < 4 "Reprobado" */

#include <stdio.h>
#include <conio.h>

int main()
{
    int nota1, nota2, nota3;

    printf("Ingrese Nota 1: ");
    scanf("%i", &nota1);
    printf("Ingrese Nota 2: ");
    scanf("%i", &nota2);
    printf("Ingrese Nota 3: ");
    scanf("%i", &nota3);

    int promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7)
    {
        printf("Promocionado");
    }
    else
    {
        if (promedio >= 4)
        {
            printf("Regular");
        }
        else

        {
            printf("Reprobado");
        }
    }

    getch();
    return 0;
}
