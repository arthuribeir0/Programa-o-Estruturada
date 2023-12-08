#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
    struct Produto *prox;
} Produto;

Produto* inicializa() {
    return NULL;
}

Produto* adiciona(Produto* estoque) {
    Produto* novo = (Produto*) malloc(sizeof(Produto));
    printf("Digite o código do produto: ");
    scanf("%d", &novo->codigo);
    printf("Digite a descrição do produto: ");
    scanf(" %[^\n]", novo->descricao);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novo->quantidade);
    printf("Digite o valor do produto: ");
    scanf("%f", &novo->valor);
    novo->prox = estoque;
    return novo;
}

void relatorio(Produto* estoque) {
    Produto* p;
    for (p = estoque; p != NULL; p = p->prox) {
        printf("Código: %d\n", p->codigo);
        printf("Descrição: %s\n", p->descricao);
        printf("Quantidade: %d\n", p->quantidade);
        printf("Valor: %.2f\n", p->valor);
        printf("\n");
    }
}

Produto* pesquisa(Produto* estoque, int codigo) {
    Produto* p;
    for (p = estoque; p != NULL; p = p->prox) {
        if (p->codigo == codigo) {
            return p;
        }
    }
    return NULL;
}

Produto* remove_produto(Produto* estoque, int codigo) {
    Produto* ant = NULL;
    Produto* p = estoque;

    while (p != NULL && p->codigo != codigo) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) {
        return estoque;
    }

    if (ant == NULL) {
        estoque = p->prox;
    } else {
        ant->prox = p->prox;
    }

    free(p);
    return estoque;
}

int main() {
    Produto* estoque = inicializa();
    int opcao, codigo;
    Produto* p;

    do {
        printf("1 - Adicionar produto\n");
        printf("2 - Gerar relatório\n");
        printf("3 - Pesquisar produto\n");
        printf("4 - Remover produto\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                estoque = adiciona(estoque);
                break;
            case 2:
                relatorio(estoque);
                break;
            case 3:
                printf("Digite o código do produto a ser pesquisado: ");
                scanf("%d", &codigo);
                p = pesquisa(estoque, codigo);
                if (p != NULL) {
                    printf("Produto encontrado:\n");
                    printf("Código: %d\n", p->codigo);
                    printf("Descrição: %s\n", p->descricao);
                    printf("Quantidade: %d\n", p->quantidade);
                    printf("Valor: %.2f\n", p->valor);
                } else {
                    printf("Produto não encontrado.\n");
                }
                break;
            case 4:
                printf("Digite o código do produto a ser removido: ");
                scanf("%d", &codigo);
                estoque = remove_produto(estoque, codigo);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
}
