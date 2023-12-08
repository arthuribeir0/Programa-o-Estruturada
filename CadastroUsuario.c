#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    char email[50];
    char sexo[20];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

Usuario usuarios[1000];
int contador = 0;

int geraId() {
    int id = rand() % 1000 + 1;
    for (int i = 0; i < contador; i++) {
        if (usuarios[i].id == id) {
            return geraId();
        }
    }
    return id;
}

void incluirUsuario() {
    if (contador == 1000) {
        printf("Limite de usuários atingido.\n");
        return;
    }

    Usuario u;
    u.id = geraId();

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", u.nome);

    printf("Digite o email: ");
    scanf(" %[^\n]", u.email);
    if (strchr(u.email, '@') == NULL) {
        printf("Email inválido.\n");
        return;
    }

    printf("Digite o sexo: ");
    scanf(" %[^\n]", u.sexo);
    if (strcmp(u.sexo, "Feminino") != 0 && strcmp(u.sexo, "Masculino") != 0 && strcmp(u.sexo, "Indiferente") != 0) {
        printf("Sexo inválido.\n");
        return;
    }

    printf("Digite o endereço: ");
    scanf(" %[^\n]", u.endereco);

    printf("Digite a altura: ");
    scanf("%lf", &u.altura);
    if (u.altura < 1.0 || u.altura > 2.0) {
        printf("Altura inválida.\n");
        return;
    }

    printf("Digite 1 para vacinado e 0 para não vacinado: ");
    scanf("%d", &u.vacina);
    if (u.vacina != 0 && u.vacina != 1) {
        printf("Valor inválido.\n");
        return;
    }

    usuarios[contador++] = u;
}

void editarUsuario() {
    int id;
    printf("Digite o ID do usuário a ser editado: ");
    scanf("%d", &id);

    for (int i = 0; i < contador; i++) {
        if (usuarios[i].id == id) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]", usuarios[i].nome);

            printf("Digite o novo email: ");
            scanf(" %[^\n]", usuarios[i].email);
            if (strchr(usuarios[i].email, '@') == NULL) {
                printf("Email inválido.\n");
                return;
            }

            printf("Digite o novo sexo: ");
            scanf(" %[^\n]", usuarios[i].sexo);
            if (strcmp(usuarios[i].sexo, "Feminino") != 0 && strcmp(usuarios[i].sexo, "Masculino") != 0 && strcmp(usuarios[i].sexo, "Indiferente") != 0) {
                printf("Sexo inválido.\n");
                return;
            }

            printf("Digite o novo endereço: ");
            scanf(" %[^\n]", usuarios[i].endereco);

            printf("Digite a nova altura: ");
            scanf("%lf", &usuarios[i].altura);
            if (usuarios[i].altura < 1.0 || usuarios[i].altura > 2.0) {
                printf("Altura inválida.\n");
                return;
            }

            printf("Digite 1 para vacinado e 0 para não vacinado: ");
            scanf("%d", &usuarios[i].vacina);
            if (usuarios[i].vacina != 0 && usuarios[i].vacina != 1) {
                printf("Valor inválido.\n");
                return;
            }

            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void excluirUsuario() {
    int id;
    printf("Digite o ID do usuário a ser excluído: ");
    scanf("%d", &id);

    for (int i = 0; i < contador; i++) {
        if (usuarios[i].id == id) {
            for (int j = i; j < contador - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }
            contador--;
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void buscarUsuario() {
    char email[50];
    printf("Digite o email do usuário a ser buscado: ");
    scanf(" %[^\n]", email);

    for (int i = 0; i < contador; i++) {
        if (strcmp(usuarios[i].email, email) == 0) {
            printf("Usuário encontrado:\n");
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereço: %s\n", usuarios[i].endereco);
            printf("Altura: %.2f\n", usuarios[i].altura);
            printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Não");
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void imprimirUsuarios() {
    for (int i = 0; i < contador; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2f\n", usuarios[i].altura);
        printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Não");
        printf("\n");
    }
}

int main() {
    char opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("a - Incluir usuário\n");
        printf("b - Editar usuário\n");
        printf("c - Excluir usuário\n");
        printf("d - Buscar usuário\n");
        printf("e - Imprimir usuários\n");
        printf("f - Sair\n");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                incluirUsuario();
                break;
            case 'b':
                editarUsuario();
                break;
            case 'c':
                excluirUsuario();
                break;
            case 'd':
                buscarUsuario();
                break;
            case 'e':
                imprimirUsuarios();
                break;
            case 'f':
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 'f');

    return 0;
}
