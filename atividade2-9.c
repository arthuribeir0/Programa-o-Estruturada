#include <stdio.h>

int main() {
    double custoFabrica, custoFinal;
    double percentualDistribuidor = 0.28;
    double impostos = 0.45;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%lf", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * impostos);

    printf("O custo final ao consumidor é: %.2lf\n", custoFinal);

    return 0;
}
