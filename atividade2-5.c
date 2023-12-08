#include <stdio.h>

int main() {
    double custoMercadoria, valorFrete, despesasEventuais, valorVenda, lucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%lf", &custoMercadoria);

    printf("Digite o valor do frete: ");
    scanf("%lf", &valorFrete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%lf", &despesasEventuais);

    printf("Digite o valor de venda: ");
    scanf("%lf", &valorVenda);

    double custoTotal = custoMercadoria + valorFrete + despesasEventuais;
    lucro = ((valorVenda - custoTotal) / custoTotal) * 100;

    printf("A percentagem de lucro da mercadoria é: %.2lf%%\n", lucro);

    return 0;
}
