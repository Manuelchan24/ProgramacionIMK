#include <stdio.h>
#define MAX_SIZE 1000

int main()
{
    int arr[MAX_SIZE]; //ARREGLO DE 1000 ESPACIOS
    int N;

    printf("ingrese el tamaño del arreglo \n");
    scanf("%d", &N);
    //arr[10] = arr(0)
    printf("Ingrese %d de numeros: ", N);
    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<N; i++)
    {
        printf("El elemento arr[%d]: %d\n",i,arr[i]);
    }

    
    
}