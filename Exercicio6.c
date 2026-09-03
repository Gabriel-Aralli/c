#include <stdio.h>

int main()

{
    float salario, aumento;

    printf ("Digite o seu salario: ");
    scanf ("%f", &salario);

    aumento = salario + (salario * 0.25);

    printf ("Seu salario com o aumento de 25 porcento e %.2f", aumento);

    return(0);
}
