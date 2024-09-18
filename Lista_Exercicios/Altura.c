// 19) João tem 1,45 m de altura e Maria tem 1,57. João cresce 0,23m por ano enquanto Maria cresce 0,15m. 
// Faça um algoritmo que mostre as alturas de João e Maria, ano a ano, até que João seja maior que Maria, respondendo no final quantos anos serão necessários para que João seja o mais alto dos dois.

#include <stdio.h>

int main()
{
    float alturaJoao = 1.45, alturaMaria = 1.57;
    int anoPorAno = 0;
    
    while(alturaJoao < alturaMaria)
    {
        printf("\nJoao: %.2f cm\nMaria: %.2f cm\n", alturaJoao, alturaMaria);
        
        alturaJoao += 0.23;
        alturaMaria += 0.15;
        
        anoPorAno++;
    }
    printf("\nFoi necessario %i ano(s) para que suas alturas ficassem:\nJoao: %.2f cm\nMaria: %.2f cm\nCom isso, Joao ficou mais alto que Maria!", anoPorAno, alturaJoao, alturaMaria);
}