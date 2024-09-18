// 8) Elaborar um programa que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). 
// O programa em C deverá solicitar o valor da cotação do dólar e também a quantidade de dólares disponíveis com o usuário.

#include<stdio.h>

double Conversao(double dolar, double cotacao)
{
    double conversao;
    conversao = dolar * cotacao;
    return conversao;
}

int main()
{
    double dolar, cotacao, reais;

    printf("Ola!! Quantos dolares ha com voce? ");
    scanf("%lf", &dolar);

    printf("Beleza! Agora quanto esta valendo o dolar? ");
    scanf("%lf", &cotacao);

    reais = Conversao(dolar, cotacao);

    printf("Voce entao possui R$ %.2lf!", reais);
}