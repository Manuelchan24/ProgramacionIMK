#include<stdio.h>

int main(void)
{
    int numero = 0;

    printf("Ingrese hasta donde voy a contar:\n");  // la variable \n sirve para que cuando escribas un numero te lo pida en la parte de abajo
    scanf("%d", &numero);

    printf("Inicia conteo... \n");

    for(int i=0;i<=numero;i++)  //NO OLVIDES DEFINIR A "i"
    {
        printf("%d\n", i);
    }
    printf("Fin del conteo... \n ");
    return(0);
}