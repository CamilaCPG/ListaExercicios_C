// 13) Dois carros percorreram diferentes distâncias em diferentes tempos. Sabendo que a velocidade média é a razão entre a distância percorrida e o tempo levado para percorrê-la, 
// faça um programa que leia as distâncias que cada carro percorreu e o tempo que cada um levou, e indique o carro que teve maior velocidade média (ou se as  velocidades são iguais).

#include<stdio.h>

float VelocidadeMedia(float distancia, float tempo)
{
    float velocidadeMedia;
    velocidadeMedia = distancia / tempo;
    return velocidadeMedia;
}

int main()
{
    float distancia, tempo, velocidadeMedia1, velocidadeMedia2;

    printf("Ola!! Qual foi a distancia do primeiro carro? ");
    scanf("%f", &distancia);

    printf("Agora, qual foi o tempo? ");
    scanf("%f", &tempo);
    
    velocidadeMedia1 = VelocidadeMedia(distancia, tempo);

    printf("Qual foi a distancia do segundo carro? ");
    scanf("%f", &distancia);

    printf("E o tempo? ");
    scanf("%f", &tempo);

    velocidadeMedia2 = VelocidadeMedia(distancia, tempo);

    if(velocidadeMedia1 == velocidadeMedia2)
    {
        printf("Ambos carros possuem a velocidade media equivalente!");
    }
    else if(velocidadeMedia1 > velocidadeMedia2)
    {
        printf("O primeiro carro possui a velocidade media maior, com %.2f m/s!", velocidadeMedia1);
    }
    else
    {
        printf("O segundo carro possui a velocidade media maior, com %.2f m/s!", velocidadeMedia2);
    }
}