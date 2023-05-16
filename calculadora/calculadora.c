#include <stdio.h>
#include <stdlib.h>

void subtracao(float num1, float num2)
{
    float sub = num1 - num2;

    printf("\nsubtracao: %.2f\n", sub);
}

void divisao(float num1, float num2)
{
    float div = num1 / num2;
    printf("\ndivisao: %.2f", div);
}

void multiplicacao(float num1, float num2)
{
    float mult = num1 * num2;

    printf("\nmultiplicacao: %.2f", mult);
}

void soma(float num1, float num2)
{
    float soma = num1 + num2;

    printf("\nsoma: %.2f", soma);
}

void main()
{

    float num1, num2;

    printf("igite o primeiro numero:");
    scanf("%f", &num1);

    printf("Digite o segundo numero:");
    scanf("%f", &num2);

    //chamando as funções da calculadora:
    soma(num1, num2);

    multiplicacao(num1, num2);

    divisao(num1, num2);

    subtracao(num1, num2);
}