#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TaArray = -1;
    int Areglo[TaArray];
    int num3;

    printf("Ingresa el tamaño del areglo ");
    scanf("%i", &TaArray);
    printf("\n");

    for(int i=1; i<=TaArray; i++)
    {
        printf("Valor (%d) ", i);
        scanf("%i", &Areglo);
    }

    num3 = Areglo[0];
    for(int i = 1; i < TaArray; i++)
    {
        if(Areglo[i] > Areglo[i-1])
        {
            num3 = Areglo[i];
        }
    }
    printf("\nEl numero mayor es: %d\n\n", num3);

    return 0;
}
