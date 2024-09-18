// 15) Recebidos valores numéricos entre zero e cinco, escreva-os na forma literal.

#include<stdio.h>

int main()
{
    int numero;

    printf("Ola!! Digite um numero entre 0 e 5: ");
    scanf("%i", &numero);

    switch(numero)
    {
        case 0:
        printf("Escrito em forma literal, seu numero escreve-se como zero!"); break;

        case 1:
        printf("Escrito em forma literal, seu numero escreve-se como um!"); break;

        case 2:
        printf("Escrito em forma literal, seu numero escreve-se como dois!"); break;

        case 3:
        printf("Escrito em forma literal, seu numero escreve-se como tres!"); break;

        case 4:
        printf("Escrito em forma literal, seu numero escreve-se como quatro!"); break;

        case 5:
        printf("Escrito em forma literal, seu numero escreve-se como cinco!"); break;

        default:
        printf("Acho que digitou algo errado. Tente novamente!"); break;
    }
}