#include <stdio.h>
#include <stdlib.h>

float DolarPeso(float Dolar)
{
    float result;
    result = Dolar * 20;
    return result;
}

float PesoDolar(float Peso)
{
    float result;
    result = Peso * 0.05;
    return result;
}

int main()
{
    float peso;
    float dolar;

    printf("Ingresa la cantidad en dolar ");
    scanf("%f",&dolar);
    printf("Ingresa la catidad en pesos  ");
    scanf("%f", &peso);

    float conversionDolar = DolarPeso(dolar);
    printf("La conversion de dolar a pesos: %f", conversionDolar);
    float conversionPeso = PesoDolar(peso);
    printf("\nLa conversion de pesos a dolar: %f", conversionPeso);

    return 0;
}
