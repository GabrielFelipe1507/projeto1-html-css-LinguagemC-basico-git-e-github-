#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, mult, soma, sub, div;

    printf("digite o primeiro numero:");
    scanf("%f", &num1);

    printf("digite o segundo numero:");
    scanf("%f", &num2);

    mult = num1*num2;
    soma = num1 + num2;
    div = num1 / num2;
    sub = num1 - num2;

    printf("\nmultiplicacao: %.2f", mult);

    printf("\nsoma: %.2f", soma);

    printf("\ndivisao: %.2f", div);

    printf("\nsubtracao: %.2f\n", sub);

}