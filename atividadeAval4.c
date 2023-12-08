#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo *prox;
} Veiculo;

Veiculo* inicializa() {
    return NULL;
}

Veiculo* adiciona(Veiculo *lista) {
    Veiculo *novo = (Veiculo*)malloc(sizeof(Veiculo));
    printf("Digite o proprietario do veiculo: ");
    scanf("%s", novo->proprietario);
    printf("Digite o modelo do veiculo: ");
    scanf("%s", novo->modelo);
    printf("Digite a cor do veiculo: ");
    scanf("%s", novo->cor);
    printf("Digite o ano do veiculo: ");
    scanf("%d", &novo->ano);
    printf("Digite o chassi do veiculo: ");
    scanf("%s", novo->chassi);
    printf("Digite a placa do veiculo: ");
    scanf("%s", novo->placa);
    printf("Digite o combustivel do veiculo: ");
    scanf("%s", novo->combustivel);
    novo->prox = lista;
    return novo;
}


void listaDiesel2010(Veiculo* lista) {
    Veiculo* p;
    for (p = lista; p != NULL; p = p->prox) {
        if (strcmp(p->combustivel, "diesel") == 0 && p->ano >= 2010) {
            printf("%s\n", p->proprietario);
        }
    }
}

void listaPlacaJ(Veiculo* lista) {
    Veiculo* p;
    for (p = lista; p != NULL; p = p->prox) {
        if (p->placa[0] == 'J' && (p->placa[7] == '0' || p->placa[7] == '2' || p->placa[7] == '4' || p->placa[7] == '7')) {
            printf("%s - %s\n", p->placa, p->proprietario);
        }
    }
}

void listaVogalPar(Veiculo* lista) {
    Veiculo* p;
    for (p = lista; p != NULL; p = p->prox) {
        if ((p->placa[1] == 'A' || p->placa[1] == 'E' || p->placa[1] == 'I' || p->placa[1] == 'O' || p->placa[1] == 'U') && ((p->placa[4] - '0' + p->placa[5] - '0' + p->placa[6] - '0' + p->placa[7] - '0') % 2 == 0)) {
            printf("%s - %s\n", p->modelo, p->cor);
        }
    }
}

Veiculo* trocaProprietario(Veiculo* lista, char* chassi, char* novo_proprietario) {
    Veiculo* p;
    for (p = lista; p != NULL; p = p->prox) {
        if (strcmp(p->chassi, chassi) == 0 && strchr(p->placa, '0') == NULL) {
            strcpy(p->proprietario, novo_proprietario);
            return lista;
        }
    }
    return NULL;
}

int main() {
    
    Veiculo* lista = inicializa();
    int opcao;
    Veiculo* p;

    do {
        printf("1-Adicionar veiculo:");
        printf("\n2-Listar veiculos diesel acima de 2010: ");
        printf("\n3-Listar carros de placa J e final 0, 2, 4 ou 7: ");
        printf("\n4-Listar carros de placa com segunda letra A, E, I, O ou U e par: ");
        printf("\n5-Trocar proprietario: ");
        printf("\n6-Sair: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            lista = adiciona(lista);
            break;
            case 2:
            listaDiesel2010(lista);
            break;
            case 3:
            listaPlacaJ(lista);
            break;
            case 4:
            listaVogalPar(lista);
            break;
            case 5:
            printf("Digite o chassi do veiculo: ");
            scanf("%s", p->chassi);
            printf("Digite o novo proprietario: ");
            scanf("%s", p->proprietario);
            lista = trocaProprietario(lista, p->chassi, p->proprietario);
            break;
            case 6:
            break;
            default:
            printf("Opcao invalida\n");
        } 
    } while (opcao != 6);
    
    return 0;
}

