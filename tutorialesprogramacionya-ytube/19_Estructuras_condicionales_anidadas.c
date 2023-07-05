/* UN postulante a un empleo, realiza un test de capacitacion, se obtuvo la siguiente informacion:
cantidad total de preguntas que se realizaron y la cantidad de preguntas que se contesto correctamente 
Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo segun el procentaje de respuestas correctas que ha obtenido y sabiendo que:
Nivel maximo : Porcentaje >=90%;
Nivel medio : Porcentaje >= 75% y < 90%
Nivel regular : Porcentaje >= 50% y < 75%
Fuera de nivel : Porcentaje < 50%.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int cantPreguntas, cantAcertadas;
    printf("Ingrese Cantidad de Preguntas : ");
    scanf("%i", &cantPreguntas);
    printf("Ingrese Cantidad de Preguntas Acertadas :  ");
    scanf("%i", &cantAcertadas);

    int porcentaje = (cantAcertadas * 100) / cantPreguntas;
    printf("%i", porcentaje);
    printf("\n");

    if (porcentaje >= 75)
    {
        if (porcentaje < 90)
        {
            printf("Nivel Medio");
        }
        else
        {
            printf("Nivel Maximo");
        }
    }
    else
    {
        if (porcentaje >= 50)
        {
            if (porcentaje < 75)
            {
                printf("Regular");
            }
        }
        else
        {
            printf("Fuera de nivel");
        }
    }

    getch();
    return 0;
}
