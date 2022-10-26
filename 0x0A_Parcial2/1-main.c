#include <stdio.h>

int main()
{
    int i;
    int j;
    int N;

    printf("Ingrese un numero:\n");
    scanf("%d", &N);


    for(i=1; i<=N; i++)
    {
    
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=N; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}