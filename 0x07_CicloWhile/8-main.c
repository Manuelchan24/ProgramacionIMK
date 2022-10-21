#include <stdio.h>

int main()
{
    int i;
    int numero;
  
    printf("Imprime todos los números pares hasta: \n");
    scanf("%d", &numero);

    printf("Todos los números pares del 1 al %d son: \n", numero);

    i=1;
    while(i<=numero)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}