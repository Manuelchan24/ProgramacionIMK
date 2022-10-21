#include <stdio.h>

int main()
{
    int pares;

    printf("Muestrame todos los numeros pares hasta:\n");
    scanf("%d", &pares);

    printf("Los numeros pares del 1 al %d son:\n", pares);

    for(int i=1; i<=pares; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return(0);
}