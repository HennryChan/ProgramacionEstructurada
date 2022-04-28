#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Promedio de unas calificaciones\n\n");

    float calificaciones [5][6];

    for (int i = 0; i < 5; i++)
    {
        float suma = 0;

        for (int j = 0; j < 5; j++)
        {
            calificaciones[i][j] = rand() % 5 + 6;
            printf("calificaciones[%i][%i] = %f\n", i, j, calificaciones[i][j]);

            suma += calificaciones[i][j];
        }
        calificaciones[i][6] = suma / 5;
        printf("\nEl promedio de %i es: %f\n\n", i, calificaciones[i][6]);

    }
}
