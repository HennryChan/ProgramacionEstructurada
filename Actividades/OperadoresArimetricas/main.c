#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi = 3.1416;
    float altura;
    float radio;
    float operacion;

    printf("Calculando el area de un cilindro \n");
    printf("\nIngrese el valor de la altura: ");
    scanf("%f", &altura);
    printf("Ingrese el valor del radio: ");
    scanf("%f", &radio);

    operacion = (2*(pi)*radio*altura) + (2*(pi)*((radio)*(radio)));

    printf("\nEl resultado es: %f ", operacion);
    printf("\n");


    getchar();
    return 0;
}
