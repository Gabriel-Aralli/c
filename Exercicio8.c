#include <stdio.h>

int main()

{
    float salario, bonus, imposto,salario_final;

    printf ("Digite o seu salario:R$ ");
    scanf ("%f", &salario);

    bonus = salario * 0.05;
    imposto = salario * 0.07;
    salario_final = salario + bonus - imposto;

    printf ("Seu salario e de R$%.2f, seu bonus sera de R$%.2f e voce precisara pagar R$%.2f de imposto.", salario, bonus, imposto);
    printf ("\nO salario que voce recebera no final sera de R$%.2f.", salario_final);

    return(0);
}
