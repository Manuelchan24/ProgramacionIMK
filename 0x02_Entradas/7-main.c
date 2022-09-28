#include "main.h"
#include <stdio.h>

int main(void)
{
    int modulo=0;
    int primernumero=0;
    int segundonumero;

printf("Ingrese el primer numero: \n");
scanf("%i", &primernumero);

printf("Ingrese el segunmdo numero: \n");
scanf("%i", &segundonumero);

modulo = mod(primernumero, segundonumero);
printf("Tu resultado es: %d\n", modulo);
return 0;
}
