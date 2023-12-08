#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Veiculo
{
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[15];
    char chassi[17];
    int ano;
    char placa[7];
    struct Veiculo *prox;
} Veiculo;
Veiculo *novoVeiculo()
{
    Veiculo *novo = (Veiculo *)malloc(sizeof(Veiculo));
    novo->prox = NULL;
    return novo;
}
void adicionarVeiculo(Veiculo **inicio, Veiculo *novo)
{
    if (*inicio == NULL)
    {
        *inicio = novo;
    }
    else
    {
        Veiculo *aux = *inicio;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}
void listarDiesel2010(Veiculo *inicio)
{
    Veiculo *aux = inicio;
    while (aux != NULL)
    {
        if (strcmp(aux->combustivel, "diesel") == 0 && aux->ano >= 2010)
        {
            printf("%s\n", aux->proprietario);
        }
        aux = aux->prox;
    }
}
void listarPlacasJ(Veiculo *inicio)
{
    Veiculo *aux = inicio;
    while (aux != NULL)
    {
        if (aux->placa[0] == 'J' && (aux->placa[6] == '0' || aux->placa[6] == '2' || aux->placa[6] == '4' || aux->placa[6] == '7'))
        {
            printf("%s - %s\n", aux->placa, aux->proprietario);
        }
        aux = aux->prox;
    }
}
void listarModeloCor(Veiculo *inicio)
{
    Veiculo *aux = inicio;
    while (aux != NULL)
    {
        if (aux->placa[1] == 'A' || aux->placa[1] == 'E' || aux->placa[1] == 'I' || aux->placa[1] == 'O' || aux->placa[1] == 'U')
        {
            int soma = aux->placa[3] - '0' + aux->placa[4] - '0' + aux->placa[5] - '0' + aux->placa[6] - '0';
            if (soma % 2 == 0)
            {
                printf("%s - %s\n", aux->modelo, aux->cor);
            }
        }
        aux = aux->prox;
    }
}
void trocarProprietario(Veiculo *inicio, char *chassi, char *novoProprietario)
{
    Veiculo *aux = inicio;
    while (aux != NULL)
    {
        if (strcmp(aux->chassi, chassi) == 0)
        {
            int i;
            for (i = 0; i < 7; i++)
            {
                if (aux->placa[i] == '0')
                {
                    return;
                }
            }
            strcpy(aux->proprietario, novoProprietario);
            return;
        }
        aux = aux->prox;
    }
}
int main()
{
    Veiculo *inicio = NULL;
    int opcao;
    do
    {
        printf("escolha uma opção: ");
        printf("1- cadastre um novo veiculo");
        printf("\n2- listar proprietários de carros a diesel a partir de 2010");
        printf("\n3- listar placas que começam com 'J' e terminam com 0, 2, 4 ou 7");
        printf("\n4- listar modelo e cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par");
        printf("\n5- trocar o proprietário de um veículo");
        printf("\n6- sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            Veiculo*novo = novoVeiculo();
            printf("digite o proprietário: ");
            scanf("%s", novo->proprietario);
            printf("digite o combustivel: ");
            scanf("%s", novo->combustivel);
            printf("digite o modelo: ");
            scanf("%s", novo->modelo);
            printf("digite a cor: ");
            scanf("%s", novo->cor);
            printf("digite o ano: ");
            scanf("%d", &novo->ano);
            printf("digite o chassi: ");
            scanf("%s", novo->chassi);
            printf("digite a placa: ");
            scanf("%s", novo->placa);
            adicionarVeiculo(&inicio, novo);
            break;
        case 2:
            listarDiesel2010(inicio);
            break;
        case 3:
            listarPlacasJ(inicio);
            break;
        case 4:
            listarModeloCor(inicio);
            break;
        case 5:
            Veiculo *novo = novoVeiculo();
            printf("digite o chassi: ");
            scanf("%s", novo->chassi);
            printf("digite o novo proprietário: ");
            scanf("%s", novo->proprietario);
            trocarProprietario(inicio, novo->chassi, novo->proprietario);
            break;
        default:
            printf("opção não encontrada");
            break;
        }
    } while (opcao != 6);

    return 0;
}
