#include "main.h"
#include <stdio.h>

int main(void)
{
    float resultado1=0;
    float resultado2=0;
    float resultado3=0;
    float radio=0;

printf("Introduzca el radio del circulo\n");
scanf("%f", &radio);
resultado1 = areaC(radio);
printf("El area del circulo es : %.2f\n", resultado1);

resultado2 = diameterC(radio);
printf("El diametro del circulo es: %.2f\n", resultado2);

resultado3 = circumferenceC(radio);
printf("La circunferencia del circulo es: %.2f\n", resultado3);

return 0;
}