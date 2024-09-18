// 24) Escreva um algoritmo em C que realize a multiplicação de A por B, ou seja, A * B, através de adições (somas). 
// Esses dois valores são inseridos pelo usuário. EX: transformar 4*3 em 4+4+4

#include<stdio.h>

int main()
{
    int A, B, resultado;

    printf("Ola!! Por gentileza, digite um valor: ");
    scanf("%i", &A);

    printf("Agora, digite outro valor: ");
    scanf("%i", &B);

    for(int indice = 0; indice < B; indice++)
    {
        resultado += A;
    }

    printf("O resultado de %i * %i eh %i!", A, B, resultado);
}