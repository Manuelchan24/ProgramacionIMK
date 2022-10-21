#include <stdio.h>

int main ()
{
    int naturales;
    int suma = 0;
    int i;
    
    printf("Muestrame la suma de los numeros naturales hasta:\n");
    scanf("%d", &naturales);

    for( i = 1; i <= naturales; i++)
    {
        suma += i;
    }
    printf("La suma de los primeros %d numeros naturales = %d \n", naturales, suma );
    
    return(0);
}