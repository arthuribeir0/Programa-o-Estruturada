#include <stdio.h>

int main() {
    double valorReais, cotacaoDolar, valorDolares;

    printf("Digite o valor em reais: ");
    scanf("%lf", &valorReais);

    printf("Digite a cotação do dólar: ");
    scanf("%lf", &cotacaoDolar);

    valorDolares = valorReais / cotacaoDolar;

    printf("O valor em dólares é: %.2lf\n", valorDolares);

    return 0;
}
