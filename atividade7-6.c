#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor = 0.0;

    do {
        printf("\nMenu de frutas:\n");
        printf("1. Abacaxi - R$5,00 a unidade\n");
        printf("2. Maçã - R$1,00 a unidade\n");
        printf("3. Pera - R$4,00 a unidade\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if(opcao == 4) break;

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        switch(opcao) {
            case 1:
                valor += 5.00 * quantidade;
                break;
            case 2:
                valor += 1.00 * quantidade;
                break;
            case 3:
                valor += 4.00 * quantidade;
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 4);

    printf("O valor total da compra é: R$ %.2f\n", valor);

    return 0;
}
