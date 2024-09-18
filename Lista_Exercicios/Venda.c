// 10) Faça um programa que receba o preço de custo de um produto e mostre o valor de venda. 
// Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.

#include<stdio.h>

double Acrescimo(double precoCusto, double percentual)
{
    double acrescimo;
    acrescimo = precoCusto * percentual;
    return acrescimo;
}

int main()
{
    double precoCusto, venda, percentual, acrescimo;

    printf("Ola!! Qual seria o preco custo? ");
    scanf("%lf", &precoCusto);

    printf("E qual seria o percentual de acrescimo? ");
    scanf("%lf", &percentual);

    venda = Acrescimo(precoCusto, percentual);

    printf("O valor de venda entao sera R$ %.2lf", venda);

}