// 21) Escrever um algoritmo que leia um valor para uma variável n.
// Em seguida, calcule a tabuada de 1 a 10 para n. Mostre a tabuada um valor por linha.

#include<stdio.h>

void Tabuada(int numero)
{
    int indice;

    for(indice = 1; indice <= 10; indice++)
    {
        printf("%i x %i = %i\n", numero, indice, numero * indice);
    }
}

int main()
{
    int numero;

    printf("Ola!! Por gentileza, digite um numero: ");
    scanf("%i", &numero);

    printf("\nAqui esta a tabuada de 1 a 10 desse numero!\n");
    Tabuada(numero);
}