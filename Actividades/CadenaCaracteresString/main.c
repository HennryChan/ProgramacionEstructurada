#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Invertir la frase \n");

    char frase[50];

    printf("\nIngresa una frase: ");

    gets(frase);

    printf("\n");

    for(int i = 0; i < strlen(frase); i++)
    {
        printf("%c", frase[(strlen(frase) - 1) - i]);
    }

    printf("\n");

    return 0;
}
