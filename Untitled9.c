#include <stdio.h>

int main()

{
    float n1, n2, n3, peso1, peso2, peso3, media;

    printf ("Digite suas tres notas: ");
    scanf ("%f", &n1);
    scanf ("%f", &n2);
    scanf ("%f", &n3);
    printf ("Digite os tres pesos na mesma ordem: ");
    scanf ("%f", &peso1);
    scanf ("%f", &peso2);
    scanf ("%f", &peso3);

    media = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3)) / (peso1 + peso2 + peso3);

    printf ("%.2f", media);

    return(0);
}
