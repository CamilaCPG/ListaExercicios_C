// 7) Escreva um programa em C que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
// Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final do mês.

#include<stdio.h>

double PorcentagemFinal(double vendas)
{
    double porcentagem;
    porcentagem = vendas * 15 / 100;
    return porcentagem;
}

int main()
{
    double salarioFixo, salarioFinal, vendas, comissao;
    char nome[100];

    printf("Ola!! Poderia me informar seu nome?\n");
    scanf("%s", &nome);

    printf("Agora, me informe seu salario: ");
    scanf("%lf", &salarioFixo);

    printf("Me diga quantas vendas fez: ");
    scanf("%lf", &vendas);

    comissao = PorcentagemFinal(vendas);
    salarioFinal = salarioFixo + comissao;


    printf("Nome: %s\nSalario fixo: R$ %.2lf\nSalario final: R$ %.2lf", nome, salarioFixo, salarioFinal);

    return 0;
}