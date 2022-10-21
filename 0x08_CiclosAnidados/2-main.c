#include <stdio.h>


int main()
{
    int filas, columnas;
    printf("Ingrese el numero de filas:\n");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas:\n");
    scanf("%d", &columnas);

    for(int i=0; i< filas; i++)
    {
        for(int j=0; j < columnas; j++)
        {
            printf("*");
        } //Ya no se puede usar la variable i porque ya esta en uso en el ciclo for anterior
        printf("\n");
    }
    return(0);
}
