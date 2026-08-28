#include <stdio.h>

int main()

{
    int n1, n2, n3;

    printf ("Escreva um numero: ");
    scanf ("%d", &n1);

    n2 = n1 - 1;
    n3 = n1 + 1;

    printf ("O numero digitado foi %d, seu antecessor e o %d e o sucessor e o %d.", n1, n2 ,n3);

    return(0);
}
