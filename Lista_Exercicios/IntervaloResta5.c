// 22) Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.

#include<stdio.h>

int main()
{
    int numero;

    printf("Aqui estao numeros que, divididos por 11, darao o resto 5:\n");
    for(numero = 1000; numero <= 1999; numero++)
    {
        if(numero % 11 == 5)
        {
            printf("%i\n", numero);
        }
    }
}