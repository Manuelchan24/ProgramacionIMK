#include "main.h"
#include <stdio.h>

int main(void)
{
    float resultado=0;
    float ancho=0;
    float largo=0;

printf("Introduzca el largo del rectangulo\n");
scanf("%f", &largo);

printf("Introduzca el ancho del rectangulo\n");
scanf("%f", &ancho);

resultado= area(ancho, largo);
printf("El area del rectangulo es: %.2f\n", resultado);

return 0;
}
