#include "main.h"
#include <stdio.h>

int main(void)
{
    float CL1,CL2,CL3,CL4,CL5,PROM,TOTAL,PORC = 0;

    printf("Introduzca 5 calificaciones para obtener puntos totales, promedio y porcentaje\n");
    scanf( "%f%f%f%f%f", &CL1, &CL2, &CL3, &CL4, &CL5);

    TOTAL = (CL1 + CL2 + CL3 + CL4 + CL5);
    PROM = (TOTAL/5);
    PORC = ((TOTAL/500)*100);
    printf("El total de puntos fue de : %.2lf\n",TOTAL);
    printf("El promedio fue de : %.2lf\n",PROM);
    printf("El porcentaje fue de : %.2lf\n",PORC);
    return 0;
}
