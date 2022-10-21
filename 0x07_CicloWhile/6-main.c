#include <stdio.h>

int main()
{
    int numero; 
    int suma = 0;  
    int primerdigito;
    int ultimodigito;

    printf("Ingrese cualquier número para encontrar la suma del primer y último dígito: \n");
    scanf("%d", &numero);

    ultimodigito = numero % 10;
    
    primerdigito = numero;

    while(numero >= 10)
    {
        numero = numero / 10;
    }
    primerdigito = numero;

    suma = primerdigito + ultimodigito; 

    printf("Suma del primer y ultimo digito = %d \n", suma);

    return 0;
}