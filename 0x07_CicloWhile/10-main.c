#include <stdio.h>

int main()
{
    int i;
    int inicio;
    int final; 
    int suma = 0;

    printf("Introducir límite inferior: \n");
    scanf("%d", &inicio);
    printf("Introducir límite superiort: \n");
    scanf("%d", &final);

    for(i=inicio; i<=final; i++)
    {
        suma += i;
    }

    printf("Sum of natural numbers from %d to %d = %d \n", inicio, final, suma);

    return 0;
}