// 23) Faça um algoritmo que leia as três notas de 5 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10. 
// Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. 
// Ao final, mostre a média geral.

#include<stdio.h>

void LeituraNotas(float *nota1, float *nota2, float *nota3) 
{
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", nota3);
}

float MediaPonderada(float nota1, float nota2, float nota3) 
{
    return (nota1 * 2 + nota2 * 4 + nota3 * 3) / 10;
}

// Função para determinar se o aluno está aprovado ou reprovado
const char* AprovadoReprovado(float mediaPonderada) 
{
    return (mediaPonderada >= 7) ? "Aprovado!" : "Reprovado :(";
}

// Função para calcular a média geral da turma
float MediaGeral(float soma, int numeroAlunos) 
{
    return soma / numeroAlunos;
}

int main()
{
    float nota1, nota2, nota3, mediaPonderada, mediaGeral, soma = 0;
    int indice;
    const int numeroAlunos = 5;

    for (indice = 1; indice <= numeroAlunos; indice++)
    {
        printf("Para o aluno %i:\n", indice);

        LeituraNotas(&nota1, &nota2, &nota3);
        mediaPonderada = MediaPonderada(nota1, nota2, nota3);
        soma += mediaPonderada;

        printf("A media ponderada do aluno eh: %.2f - %s\n\n", indice, mediaPonderada, AprovadoReprovado(mediaPonderada));
    }

    mediaGeral = MediaGeral(soma, numeroAlunos);

    printf("A media geral da turma eh: %.2f\n", mediaGeral);
}