#include <stdio.h>

int main()
{
    int i;
    int inicio;
    int final;
    int suma = 0;

    printf("Introduce limite inferior:\n ");
    scanf("%d", &inicio);
    printf("Introduce limite superior:\n ");
    scanf("%d", &final);

    if(inicio % 2 == 0)
    {
        inicio++;
    }
    
    for(i=inicio; i<=final; i+=2)
    {
        suma += i;
    }

    printf("La suma de los numeros impares entre %d a %d = %d \n", inicio, final, suma);

    return 0;
}