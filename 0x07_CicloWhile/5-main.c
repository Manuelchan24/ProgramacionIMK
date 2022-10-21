#include <stdio.h>

int main()
{
    int i;
    int fin;

    printf("Imprime todos lo numeros naturales del 1 al :\n ");
    scanf("%d", &fin);

    i=1;
    while(i<=fin)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}