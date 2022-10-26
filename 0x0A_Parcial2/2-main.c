#include <stdio.h>

int main()
{
    float costototal;
    int hora;
    int duracion;
    char opcion;
    do{

    printf("Seleccione el dia de la semana en el que realizo su llamada: \n");
    printf("L - lunes\n");
    printf("M - Martes\n");
    printf("X - Miercoles\n");
    printf("J - Jueves\n");
    printf("V - Viernes\n");
    printf("S - Sabado\n");
    printf("D - Domingo\n");
    scanf("%c", &opcion);

    printf("Ingrese la hora en la que INICIO la llamada;\n");
    scanf("%d", &hora);

    printf("Ingrese la DURACION de la llamada en minutos:\n");
    scanf("%d", &duracion);


    if(opcion=='L'||opcion=='l'||opcion=='M'||opcion=='m'||opcion=='X'||opcion=='x'||opcion=='J'||opcion=='j'||opcion=='V'||opcion=='v')
    {
        if(hora>=800 && hora<=2000)
        {
            costototal = duracion *.6;
            printf("El costo de su llamada es de:$%.2f/min \n",costototal);
        }
            else if(hora<800 || hora>2000)
            {
                costototal=duracion*.25;
                printf("El costo de su llamada es de:$%.2f/min \n",costototal);
            }
    }
    else if(opcion=='S'||opcion=='s'||opcion=='D'||opcion=='d')
    {
        costototal = duracion*.15;
        printf("El costo de su llamada es de:$%.2f/min \n",costototal);
    }
    else
    {
        printf("ERROR\n");

    printf("Para finalizar el programa ingrese 0 en cada opcion\n");
    } 
    }   
while (opcion !=0 && hora !=0 && duracion !=0);
}
