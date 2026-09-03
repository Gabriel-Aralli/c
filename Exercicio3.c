#include <stdio.h>

int main()

{
    float raio, pi, area;

    printf ("Digite o raio do circulo: ");
    scanf ("%f", &raio);

    pi = 3.1415;
    area = pi * (raio * raio);

    printf ("A area do circulo e %.2f.", area);

    return(0);
}
