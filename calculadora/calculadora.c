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
    int op;

    do
    {
        printf("\nDigite o primeiro numero:");
        scanf("%f", &num1);

        printf("\nDigite o segundo numero:");
        scanf("%f", &num2);

        printf("\n0 - para sair\n1 - para multiplicar\n2 - para somar\n3 - para subtrair\n 4 - para dividir");

        printf("\nDigite a opcao:\t");
        scanf("%d", &op);

        switch (op)
        {

        case 0:
            printf("*********Voce Saiu do Programa*********");
            break;

        case 1:
            multiplicacao(num1, num2);
            break;

        case 2:
            soma(num1, num2);
            break;

        case 3:
            subtracao(num1, num2);
            break;
        case 4:
            divisao(num1, num2);
            break;

        default:
            printf("\n******Digite uma Opcao Valida******");
            break;
        }
        // chamando as funções da calculadora:

    } while (op!=0);
}