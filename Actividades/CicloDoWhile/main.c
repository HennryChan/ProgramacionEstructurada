#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Numeros naturales del 1 al 100 \n");

    do
    {
        num ++;
        printf("%i \n", num);
    }while(num<=99);

    printf("\n");
    return 0;
}
