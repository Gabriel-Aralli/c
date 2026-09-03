#include <stdio.h>

int main()

{
    float deposito, juros, rendimento, valor_final;

    printf ("Digite o valor do deposito: R$");
    scanf ("%f", &deposito);
    printf ("Digite a taxa de juros: ");
    scanf ("%f", &juros);

    rendimento = deposito * (juros / 100);
    valor_final = rendimento + deposito;

    printf ("O seu rendimento e de %.2f.", rendimento);
    printf ("\nSeu novo saldo e de R$%.2f.", valor_final);

    return(0);
}
