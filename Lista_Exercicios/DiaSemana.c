// 17) Dado o dia da semana de 1 à 7, escreva na tela o correspondente por extenso (Domingo, Segunda-feira, ...Sábado).

#include<stdio.h>

int main()
{
    int numero;

    printf("Ola!! Digite um numero entre 0 e 7: ");
    scanf("%i", &numero);

    switch(numero)
    {
        case 1:
        printf("1 eh equivalente a Domingo!"); break;

        case 2:
        printf("2 eh equivalente a Segunda-Feira!"); break;

        case 3:
        printf("3 eh equivalente a Terça-Feira!"); break;

        case 4:
        printf("4 eh equivalente a Quarta-Feira!"); break;

        case 5:
        printf("5 eh equivalente a Quinta-Feira!"); break;

        case 6:
        printf("6 eh equivalente a Sexta-Feira!"); break;

        case 7:
        printf("7 eh equivalente a Sabado!"); break;

        default:
        printf("Acho que digitou algo errado. Tente novamente!"); break;
    }
}