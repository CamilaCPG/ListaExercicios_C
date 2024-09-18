// 11) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos 
// (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). 
// Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um programa que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.

#include<stdio.h>

int main()
{
    double custoFabrica, impostos, percentagemDistribuidor, custoImpostos, custoConsumidor;

    printf("Ola!! Por gentileza, me informe o custo de fabrica do carro: ");
    scanf("%lf", &custoFabrica);

    impostos = custoFabrica * 0.45;
    custoImpostos = custoFabrica + impostos;
    percentagemDistribuidor = custoImpostos * 0.28;
    custoConsumidor = custoImpostos + percentagemDistribuidor;

    printf("O custo do consumidor sera entao R$ %.2lf!", custoConsumidor);
}