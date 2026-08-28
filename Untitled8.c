#include <stdio.h>

int main()

{
    float salario, aumento, novo_salario;

    printf ("Digite o seu salario: ");
    scanf ("%f", &salario);
    printf ("Digite a porcentagem de aumento: ");
    scanf ("%f", &aumento);

    novo_salario = salario + (salario * (aumento / 100));

    printf ("Seu novo salario e de %.2f.", novo_salario);

    return(0);
}
