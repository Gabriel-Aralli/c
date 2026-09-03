#include <stdio.h>

int main()

{
    float salario, bonus, imposto, salario_final;

    printf ("Digite o seu salario: R$");
    scanf ("%f", &salario);

    bonus = 50;
    imposto = salario * 0.10;
    salario_final = salario + bonus - imposto;

    printf ("Seu salario e de R$%.2f, seu bonus sera de R$%.2f e voce pagara R$%.2f de imposto.", salario, bonus, imposto);
    printf ("\nSeu salario no final sera de R$%.2f.", salario_final);

    return(0);
}
