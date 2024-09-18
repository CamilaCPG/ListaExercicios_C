// 9) Faça um programa que receba um valor que foi depositado e exiba o valor com rendimento após um mês. 
// Considere fixo o juro da poupança em 0,70% a.m.
// (1000 * 0,70 / 100) + 1000

#include<stdio.h>

double Rendimento(double deposito)
{
    double rendimento;
    rendimento = (deposito * 0.70 / 100) + deposito;
    return rendimento;
}

int main()
{
    double deposito, rendimento;

    printf("Ola!! Quanto voce depositou no comeco do mes? ");
    scanf("%lf", &deposito);

    rendimento = Rendimento(deposito);

    printf("Voce rendeu no fim do mes R$ %.2lf!", rendimento);
}