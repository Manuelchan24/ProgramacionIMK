#include "main.h"
#include <stdio.h>

int main(void)
{
    int multiplicacion=0;
    int primernumero=0;
    int segundonumero=0;


printf("Ingrese el primer numero:\n");
scanf("%i", &primernumero);

printf("Ingrese el segundo numero:\n");
scanf("%i", &segundonumero);

multiplicacion = mul(primernumero, segundonumero);
printf("Tu resultado es: %d\n", multiplicacion);
return 0;
}
