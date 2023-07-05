/* Se ingresa por el teclado un numero positivo de uno o dos digitos. mostrar un mensaje indicando si el numer tiene uno o mas digitos. (Tener en cuenta que condicion debe cumplirse para tener dos digitos un numero entero);
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int valor;
    printf("Ingrese un valor :");
    scanf("%i", &valor);
    if (valor >= 10)
    {
        printf("Tiene dos digitos");
    }
    else
    {
        printf("Tiene 1 digito");
    }
    

    getch();
    return 0;
}
