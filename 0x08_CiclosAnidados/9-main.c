#include <stdio.h>

int main()
{
    int i, j, filas;
    int puntos, espacios;
   
    printf("Ingresa el numero de filas:\n ");
    scanf("%d", &filas);
    
    
    puntos = 1;
    espacios = filas - 1;
    
    for(i=1; i<filas*2; i++)
    {
        for(j=1; j<=espacios; j++)
            printf(" ");
        
        for(j=1; j<puntos*2; j++)
            printf("*");
        
        printf("\n");
        
        if(i<filas)
        {
            espacios--;
            puntos++;
        }
        else
        {
            espacios++;
            puntos--;
        }
    }
    
    return 0;
}