#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    int intercambio;

    printf("Da el valor de x: ");
    scanf("%i", &valor1);
    printf("Da el valor de y: ");
    scanf("%i", &valor2);

    intercambio=valor1;
    valor1=valor2;
    valor2=intercambio;

    printf("\n El valor intercambiado de X es: %i \n", valor1);
    printf("El valor intercambiado de Y es: %i \n", valor2);

    getchar();
    return 0;
}
