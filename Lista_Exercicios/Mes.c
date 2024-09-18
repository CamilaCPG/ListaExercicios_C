// 18) Elabore um programa que leia um número inteiro entre 1 e 12 e imprima o mês correspondente. 
// Caso seja digitado um valor fora desse intervalo, deverá ser exibida uma mensagem informando que não existe mês com esse número.

#include<stdio.h>

int main()
{
    int numero;

    printf("Ola!! Digite um numero entre 0 e 12: ");
    scanf("%i", &numero);

    switch(numero)
    {
        case 1:
        printf("1 eh equivalente a Janeiro!"); break;

        case 2:
        printf("2 eh equivalente a Fevereiro!"); break;

        case 3:
        printf("3 eh equivalente a Marco!"); break;

        case 4:
        printf("4 eh equivalente a Abril!"); break;

        case 5:
        printf("5 eh equivalente a Maio!"); break;

        case 6:
        printf("6 eh equivalente a Junho!"); break;

        case 7:
        printf("7 eh equivalente a Julho!"); break;

        case 8:
        printf("8 eh equivalente a Agosto!"); break;

        case 9:
        printf("9 eh equivalente a Setembro!"); break;

        case 10:
        printf("10 eh equivalente a Outubro!"); break;

        case 11:
        printf("11 eh equivalente a Novembro!"); break;

        case 12:
        printf("12 eh equivalente a Dezembro!"); break;

        default:
        printf("Acho que digitou algo que esta fora do intervalo. Tente novamente!"); break;
    }
}