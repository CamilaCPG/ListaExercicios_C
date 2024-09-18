// 16) A partir do exercício anterior, pergunte ao usuário se deseja os numerais em inglês ou português.

#include<stdio.h>

int main()
{
    int numero, opcao;

    printf("Ola!! Digite um numero entre 0 e 5: ");
    scanf("%i", &numero);

    printf("Voce gostaria do seu numero escrito em qual linguagem?\n1. Portugues\n2. Ingles\n");
    scanf("%i", &opcao);

    switch(opcao)
    {
        case 1:
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
        } break;

        case 2:
        switch(numero)
        {
            case 0:
            printf("Escrito em forma literal, seu numero escreve-se como zero!"); break;

            case 1:
            printf("Escrito em forma literal, seu numero escreve-se como one!"); break;

            case 2:
            printf("Escrito em forma literal, seu numero escreve-se como two!"); break;

            case 3:
            printf("Escrito em forma literal, seu numero escreve-se como three!"); break;

            case 4:
            printf("Escrito em forma literal, seu numero escreve-se como four!"); break;

            case 5:
            printf("Escrito em forma literal, seu numero escreve-se como five!"); break;

            default:
            printf("Acho que digitou algo errado. Tente novamente!"); break;
        } break;

        default:
        printf("Acho que digitou algo errado. Tente novamente!"); break;
    }
}