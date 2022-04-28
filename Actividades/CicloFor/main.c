#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0;
    int num2 = 9;
    int num3 = 1;
    int num4=0;

    printf("Serie de fibonachi\n");

    for(int i=0;i<=num2;i++){
        num1 += num3;
        num3 = num1 - num3;
        printf(" %i \n ",num3);
    }

    return 0;
}
