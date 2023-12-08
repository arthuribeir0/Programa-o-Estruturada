#include <stdio.h>

int imprimeOpcoes() {
    int opcao;
    printf("Opções de pagamento:\n");
    printf("1) À vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

void calculaPagamento(float total) {
    int opcao = imprimeOpcoes();
    switch(opcao) {
        case 1:
            printf("Valor a pagar: R$ %.2f\n", total * 0.9);
            break;
        case 2:
            printf("Valor das parcelas: R$ %.2f\n", total / 2);
            break;
        case 3:
            if(total < 100) {
                printf("Opção inválida para compras abaixo de R$ 100,00.\n");
            } else {
                int parcelas;
                printf("Digite o número de parcelas (3 a 10): ");
                scanf("%d", &parcelas);
                if(parcelas < 3 || parcelas > 10) {
                    printf("Número de parcelas inválido.\n");
                } else {
                    float valorParcela = total * pow(1.03, parcelas) / parcelas;
                    printf("Valor das parcelas: R$ %.2f\n", valorParcela);
                }
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
}

int main() {
    float total;
    printf("Digite o total gasto: ");
    scanf("%f", &total);
    calculaPagamento(total);
    return 0;
}
