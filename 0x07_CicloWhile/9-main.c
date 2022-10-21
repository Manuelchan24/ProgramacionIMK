#include <stdio.h>

int main()
{
    int i;
    int numero;
    
    printf("Imprimir números impares hasta: \n");
    scanf("%d", &numero);

    printf("Todos los numeros impares del 1 al %d son: \n", numero);

    for(i=1; i<=numero; i+=2)
    {
        printf("%d\n", i);
    }

    return 0;
}