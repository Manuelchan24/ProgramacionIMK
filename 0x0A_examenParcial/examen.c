#include "main.h"
#include <stdio.h>
#include <math.h>

int main()
{
    float volumen;
    float Densidad;
    float costoAnterior; 
    char opcion;
    
    printf("Elija el tipo de producto:\n");
    printf("A - Aceite\n");
    printf("B - Alcohol\n");
    printf("C - Gasolina\n");
    printf("D - Acetona\n");
    scanf("%c", &opcion);

printf("Ingresa el volumen a envasar:\n");
scanf("%f", &volumen);

if (volumen == 500)
{
    costoAnterior = 1.006;
}
else if (volumen == 1000)
{
    costoAnterior = 1.6816;
}
else if (volumen = 1500)
{
    costoAnterior = 1.9610;
}
else if (volumen = 3000)
{
    costoAnterior = 3.1038;
}

switch (opcion)
{
    case 'a':
    Densidad = 0.9;
    area(volumen, Densidad, costoAnterior);
    break;

    case 'b':
    Densidad = 0.8;
    area(volumen, Densidad, costoAnterior);
    break;

    case 'c':
    Densidad = 0.68;
    area(volumen, Densidad, costoAnterior);
    break;

    case 'd':
    Densidad = 0.79;
    area(volumen, Densidad, costoAnterior);
    break;

    default:
    printf("Error, Intente de nuevo\n");
    return(1);

}
}
