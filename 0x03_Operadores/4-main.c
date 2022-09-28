#include "main.h"
#include <stdio.h>

int main(void)
{
    float Km=0;
    float Cm=0;
    float M=0;

printf("Introduzca longitud en Centimetros\n");
scanf("%f", &Cm);

Km = Cm_M(Cm);
M = Cm_Km(Cm);

printf("La longitud en Kilometros es: %.4f Km\n",M);
printf("La longitud en Metros es: %.4f m\n",Km);

return 0;
}
