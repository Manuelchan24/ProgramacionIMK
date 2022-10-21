#include <stdio.h>

int main()
{
    int impares;

    printf("Muestrame todos los numeros impares hasta:\n");
    scanf("%d", &impares);

    printf("Los numeros impares del 1 al %d son:\n", impares);
    
    for (int i = 1; i <= impares; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
    return (0);
}