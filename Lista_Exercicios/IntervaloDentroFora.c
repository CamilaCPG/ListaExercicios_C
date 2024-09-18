// 25) Escrever um programa em C que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações

#include<stdio.h>

int main()
{
    int numero, dentroIntervalo, foraIntervalo;

    for(int indice = 1; indice <= 10; indice++)
    {
        printf("Por gentileza, digite um valor: ");
        scanf("%i", &numero);

        if(numero >= 10 && numero <= 20)
        {
            dentroIntervalo++;
        }
        else
        {
            foraIntervalo++;
        }
    }

    printf("\nDentro do intervalo [10, 20], temos:\n");
    printf("\nQuantidade dentro do intervalo: %i\n", dentroIntervalo);
    printf("Quantidade fora do intervalo: %i", foraIntervalo);
}