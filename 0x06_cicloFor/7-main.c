#include <stdio.h>

int main()
{
    int natimp;
    int suma = 0;
    int i;
    
    printf("Muestrame la suma de los numeros natuares impares hasta:\n");
    scanf("%d", &natimp);

    for (i = 1; i <= natimp; i += 2)
    {
        suma += i;
    }
    printf("La suma de impares = %d \n", suma);

    return(0);
}