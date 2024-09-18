// 20) Faça um algoritmo que receba números positivos até que o número zero seja digitado. Calcule e mostre ao final: a soma de todos os números digitados, 
// a quantidade de números digitados, a média dos números digitados, o maior número digitado; o menor número digitado, a média dos números pares digitados, a porcentagem de números ímpares digitados;

#include<stdio.h>

int main()
{
    int numero, soma, qntdNumero, maiorNumero, menorNumero, somaPares, qntdPares, qntdImpares;
    float media, mediaPares, porcentagemImpares;

    maiorNumero = numero;
    menorNumero = numero;

    while(numero != 0)
    {
        printf("Por gentileza, digite um numero (digite 0 caso queira parar): ");
        scanf("%i", &numero);

        soma += numero;
        qntdNumero++;

        if(numero > maiorNumero)
        {
            maiorNumero = numero;
        }
        else if(numero < menorNumero)
        {
            menorNumero = numero;
        }

        if(numero % 2 == 0)
        {
            somaPares += numero;
            qntdPares++;
        }
        else
        {
            qntdImpares++;
        }
    }

    if(qntdNumero > 0)
    {
        media = (float)soma / qntdNumero;
    }
    else
    {
        media = 0;
    }

    if(qntdPares > 0)
    {
        mediaPares = (float)somaPares / qntdPares;
    }
    else
    {
        mediaPares = 0;
    }

    if(qntdNumero > 0)
    {
        porcentagemImpares = ((float)qntdImpares / qntdNumero) * 100;
    }
    else
    {
        porcentagemImpares = 0;
    }

    printf("\nAqui estao os resultados!\n");
    printf("\nSoma de numeros digitados: %i\n", soma);
    printf("Quantidade de numeros digitados: %i\n", qntdNumero);
    printf("Media de numeros digitados: %.2f\n", media);
    printf("O maior numero: %i\nO menor numero: %i\n", maiorNumero, menorNumero);
    printf("Media de numeros pares: %.2f\n", mediaPares);
    printf("A porcentagem de numeros impares: %.2f%%", porcentagemImpares);
}