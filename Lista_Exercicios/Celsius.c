// 6) Escreva um programa que leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. 
// A fórmula de conversão é: ºC = (°F − 32)*5/9 sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include<stdio.h>

float Conversao(float fahrenheit)
{
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main()
{
    float fahrenheit, celsius;

    printf("Ola!! Por gentileza, me diga a temperatura que quer converter de Fahrenheit p/ Celsius: ");
    scanf("%f", &fahrenheit);

    celsius = Conversao(fahrenheit);

    printf("%.2f°F para Celsius eh %.2f°C!", fahrenheit, celsius);
}
