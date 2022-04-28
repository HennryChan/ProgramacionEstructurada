#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ListaNum [5];
    int operacion;

    printf("Ingresa el primer valor del arreglo   ");
    scanf("%i", &ListaNum[0]);
    printf("Ingresa el segundo numero del arreglo ");
    scanf("%i", &ListaNum[1]);
    printf("Ingresa el tercer numero del arreglo  ");
    scanf("%i", &ListaNum[2]);
    printf("Ingresa el cuarto numero del arreglo  ");
    scanf("%i", &ListaNum[3]);
    printf("Ingresa el quinto numero del arreglo  ");
    scanf("%i", &ListaNum[4]);

    operacion = ListaNum[0]*ListaNum[1]*ListaNum[2]*ListaNum[3]*ListaNum[4];

    printf("\nEl resultado de la operacion es: %i \n", operacion);
    return 0;
}
