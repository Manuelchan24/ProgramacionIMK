#include "main.h"
#include <stdio.h>

int main(void)
{
    float perimetro=0;
    float ancho=0;
    float largo=0;

printf("Introduzca el largo del rectangulo\n");
scanf("%f", &largo);

printf("Introduzca el ancho del rectangulo\n");
scanf("%f", &ancho);

perimetro= perim(ancho, largo);
printf("El perimetro del rectangulo es: %.2f\n", perimetro);

return 0;
}
