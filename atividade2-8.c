#include <stdio.h>

int main() {
    double salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o salário mensal atual: ");
    scanf("%lf", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%lf", &percentualReajuste);

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    printf("O valor do novo salário é: %.2lf\n", novoSalario);

    return 0;
}
