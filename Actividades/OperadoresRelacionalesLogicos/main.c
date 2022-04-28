#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("Ingresa el primer numero:   ");
    scanf("%i", &num1);
    printf("Ingresa el segundo numero:  ");
    scanf("%i", &num2);
    if(num1<num2)
    {
        printf("\nEl numero menor es; %i \n", num1);
    }else
    {
        printf("\nEl numero menos es: %i \n", num2);
    }
    return 0;
}
