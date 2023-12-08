#include <stdio.h>

int main() {
    double num1, num2, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("Soma: %.2lf\n", soma);
    printf("Subtração: %.2lf\n", subtracao);
    printf("Multiplicação: %.2lf\n", multiplicacao);
    printf("Divisão: %.2lf\n", divisao);

    return 0;
}
