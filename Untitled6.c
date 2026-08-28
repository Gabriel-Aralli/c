#include <stdio.h>

int main()

{
    float n1, n2, n3 ,n4, media;

    printf ("Digite as notas dos 4 bimestres: ");
    scanf ("%f", &n1);
    scanf ("%f", &n2);
    scanf ("%f", &n3);
    scanf ("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf ("Sua media final foi %.2f.", media);

    return(0);
}
