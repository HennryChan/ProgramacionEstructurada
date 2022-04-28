#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    printf("Vas recorriendo y te encuentras tres caminos \n");
    printf("\nEscribe 1, si quieres ir por el camino de dulces\n");
    printf("Escribe 2, si quieres ir por el camino de madera\n");
    printf("Escribe 3, si quieres ir por el camino de gatitos\n");
    printf("\nIngresa la opcion deseada: ");
    scanf("%i", &opcion);

    switch(opcion)
    {
    case 1:
        printf("\nLos dulces se empieza a deritir\n");
        break;
    case 2:
        printf("\nLas artillas de madera te lleva en la salida\n");
        break;
    case 3:
        printf("\nLos gatitos te llevan en la salida, felicidades ganaste..\n");
        break;
    default:
        printf("\nPerdiste entre los caminos, Game Over\n");
        break;
    return 0;
}
}
