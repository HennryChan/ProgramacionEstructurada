#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma1;
    int suma2;
    int suma3;

    int ListArray [3][4]=
    {
        {1, 1, 1, 1},
        {2, 2, 3, 3},
        {5, 5, 10, 6}
    };

    suma1 = ListArray[0][0] +  ListArray[0][1] +  ListArray[0][2] +  ListArray[0][3];
    suma2 = ListArray[1][0] +  ListArray[1][1] +  ListArray[1][2] +  ListArray[1][3];
    suma3 = ListArray[2][0] +  ListArray[2][1] +  ListArray[2][2] +  ListArray[2][3];

    printf("Suma de arreglos dibimencionales \n");
    printf("\nEl resultado del primero es: %i \n", suma1);
    printf("El resulado del segundo areglo es: %i \n", suma2);
    printf("El resultado del tercer arreglo es: %i \n", suma3);


    return 0;
}
