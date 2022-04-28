#include <stdio.h>
#include <stdlib.h>

char Nombre[];
float calificacion;

void cali()
{
    printf("Ingresa el nombre del alunmo:       ");
    scanf("%s", &Nombre);
    printf("Ingresa la calificacion del alumno: ");
    scanf("%f", &calificacion);

    if(calificacion >= 7)
    {
        printf("\nAlumno aprovado\n");
    }else
    {
        printf("\nAlumno reprovado\n");
    }
}

int main()
{
    cali();

    return 0;
}
