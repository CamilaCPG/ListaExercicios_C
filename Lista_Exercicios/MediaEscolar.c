// 14) Em uma escola, um aluno passa direto se obtiver média final maior ou igual a 7. Se a média for inferior a 4, ele está reprovado direto, sem direito a prova final. 
// Em outro caso, ele vai à final, e a nota que ele precisa para passar é o que falta à média final para completar 10. Faça um programa que receba as duas notas parciais, 
// calcule a média final e informe ao aluno sua situação inclusive informando a ele quanto precisa tirar na final, se este for o seu caso.

#include<stdio.h>

float CalculoMedia(float nota1, float nota2)
{
    float media;
    float notaFinal;
    
    media = (nota1 + nota2) / 2;

    if(media > 7)
    {
        printf("Parabens! Voce foi aprovado.");
    }
    else if(media < 4)
    {
        printf("Voce foi reprovado. Mais sorte ano que vem!");
    }
    else
    {
        notaFinal = 10 - media;
        printf("Voce tem mais uma chance! Na prova final, sera necessario mais %.2f na nota!", notaFinal);
    }
}

int main()
{
    float nota1, nota2, media;

    printf("Ola!! Por gentileza, insira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Agora, me diga sua segunda nota: ");
    scanf("%f", &nota2);

    media = CalculoMedia(nota1, nota2);
}