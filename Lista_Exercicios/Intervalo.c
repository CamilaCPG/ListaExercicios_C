// 12) Faça um programa que receba um número e diga se este número está no intervalo entre 100 e 200

#include<stdio.h>

int main()
{
    int numero;

    printf("Ola!! Poderia me dizer um numero? ");
    scanf("%i", &numero);

    if(numero >= 100 && numero <= 200)
    {
        printf("O numero %i esta entre 100 e 200!", numero);
    }
    else
    {
        printf("O numero %i nao esta entre 100 e 200.", numero);
    }
}