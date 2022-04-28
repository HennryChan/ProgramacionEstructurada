#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int adivina;

    printf("Adivida un numero de 1 al 10 \n");
    scanf("%i", &adivina);
    if(adivina == num)
    {
        printf("\nFelicidades adivinaste el numero :) \n");
    }else
    {
        printf("\nPerdiste el juego :( \n");
    }
    getchar();
    return 0;
}
