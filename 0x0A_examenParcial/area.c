#include "main.h"
#include <math.h>
#include <stdio.h>

int area(float volumen, float Densidad, float costoAnterior)
{
    float radio;
    float area;
    float areaminima;
    float ahorro;
    float gramos;
    float altura;
    float costoNuevo;
    float costomt2;
    float pi= 3.1416;
    

costomt2 = 2.45;
radio = (cbrt((2*(volumen))/(4*(pi))));

altura = ((pi)*(pow(radio,2))/volumen);

area = (2*(pi)*(pow(radio,2)))+(2*(pi)*(radio)*(altura));

areaminima = (2*(pi)*(pow(radio,2)))+(2*(pi)*(radio))*(volumen/((pi)*(pow(radio,2))));

costoNuevo = (areaminima * costomt2);

costoNuevo = (costoNuevo / 1000);

ahorro = (costoAnterior - costoNuevo);

gramos = (Densidad * volumen);


printf("Radio de la tapa: %.2f\n", radio);
printf("Area total de la lata: %.2f\n", areaminima);
printf("Costo de fabricacion: %.2f\n", costoNuevo);
printf("Costo anterior para la lata de 1000 ml: %.2f\n", costoAnterior);
printf("Ahorro: %.2f\n", ahorro);
printf("%.2f ml en gramos es: %.2f\n", volumen, gramos);
    return (0);
}