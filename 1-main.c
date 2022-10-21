#include <stdio.h>

int main()
{
    int n;

    printf("Ingrese un numero:\n");
    scanf("%d", &n);

    printf("Los numeros naturales del 1 al %d: \n", n);

    for (int i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return(0);
}