#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("Ingrese primer valor:");
    scanf("%i", &num1);  //si es un entero "%i" y si es un float "%f".
    printf("Ingrese segundo valor:");
    scanf("%i", &num2);
    suma = num1 + num2;
    producto = num1 * num2;
    printf("La suma de los dos valores es:");
    printf("%i", suma);
    printf("\n");
    printf("El producto de los dos valores es:");
    printf("%i", producto);
    getch();
    return 0;
}

//https://www.tutorialesprogramacionya.com/cya/detalleconcepto.php?punto=5&codigo=5&inicio=0
