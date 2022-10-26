#include <stdio.h>

int main (void)
{
    float galon = 0.264179;
    float litconsumidos = 0;
    float millasrec = 0;
    float millxgalon = 0;
    float galones;

    do{
    printf("Inserte el numero de litros de gasolina consumidos por el automovil: \n");
    scanf("%f", &litconsumidos );

    printf ("Inserte el numero de millas recorridas por el automovil: \n");
    scanf("%f", &millasrec);

    galones = galon * litconsumidos;
    millxgalon = galones / millasrec ;
    
    printf("El numero de millas por galon es: %f mill/gal \n",millxgalon );
    printf("Para terminar el programa ingrese ceros\n");
   }
   while (litconsumidos !=0 && millasrec != 0);
}

