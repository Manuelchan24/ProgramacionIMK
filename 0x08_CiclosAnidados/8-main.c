#include <stdio.h>

int main()
{
    int i, j, numero;

    printf("Ingresa un numero:\n ");
    scanf("%d", &numero);

    for(i=1; i<numero*2; i++)
    {
        for(j=1; j<=numero; j++)
        {

            if((i==1 && (j==1 || j==numero)) || 
               (i==numero && (j==1 || j==numero)) || 
               (i==numero*2-1 && (j==1 || j==numero)))
            {
                printf(" ");
            }
            else if(i==1 || i==numero || i==(numero*2)-1 || j==1 || j==numero)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}