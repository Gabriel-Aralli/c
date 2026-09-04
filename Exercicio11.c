#include <stdio.h>

int main()

{
    float custo, convite, total_ingressos;

    printf ("Digite o valor do custo do espetaculo: R$");
    scanf ("%f", &custo);
    printf ("Digite o preco por convite para o espetaculo: R$");
    scanf ("%f", &convite);

    total_ingressos = custo / convite;

    printf ("O total de convites que precisam ser vendidos para abater o custo do espetaculo e de %.1f", total_ingressos);

    return(0);
}
