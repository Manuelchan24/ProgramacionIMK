#include <stdio.h>

/*
Programa que pida n numeros y calcule el promedio de esos numeros 
*/

int main(void)
{
    int cantidad = 0;
    float n1 = 0;
    float acumulado = 0;
    float promedio = 0;
    
    printf("Ingrese la cantidad de numeros a promediar: \n");
    scanf("%d", &cantidad);

    for (int i = 0; i< cantidad; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%f", &n1);

        acumulado = n1 + acumulado;
        printf("El acumulado hasta ahora es: %f\n", acumulado);
    }

    promedio = (acumulado / cantidad);
    printf("El promedio es: %.2f\n", promedio);

    return (0);
}