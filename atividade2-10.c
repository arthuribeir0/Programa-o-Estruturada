#include <stdio.h>

int main() {
    int numCarrosVendidos;
    double valorTotalVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%lf", &valorTotalVendas);

    printf("Digite o salário fixo: ");
    scanf("%lf", &salarioFixo);

    printf("Digite o valor recebido por carro vendido: ");
    scanf("%lf", &valorPorCarro);

    salarioFinal = salarioFixo + (numCarrosVendidos * valorPorCarro) + (0.05 * valorTotalVendas);

    printf("O salário final do vendedor é: %.2lf\n", salarioFinal);

    return 0;
}
