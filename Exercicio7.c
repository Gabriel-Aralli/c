#include <stdio.h>

int main()

{
    float salario, percentual, aumento, novo_salario;

    printf ("Digite o seu salario: ");
    scanf ("%f", &salario);
    printf ("Digite a porcentagem de aumento: ");
    scanf ("%f", &percentual);

    aumento = salario * (aumento / 100)
    novo_salario = salario + aumento;

    printf ("O valor do aumento foi de R$%.2f", aumento);
    printf ("\nSeu novo salario e de R$%.2f.", novo_salario);

    return(0);
}
