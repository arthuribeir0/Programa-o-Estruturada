#include <stdio.h>

struct Cadastro {
    char nome[50];
    int idade;
    int matricula;
    char endereco[100];
    char curso[50];
    int periodo;
    char disciplinas[100];
};

void exibirCadastro(struct Cadastro cadastro) {
    printf("Nome: %s\n", cadastro.nome);
    printf("Idade: %d\n", cadastro.idade);
    printf("Matricula: %d\n", cadastro.matricula);
    printf("Endereco: %s\n", cadastro.endereco);
    printf("Curso: %s\n", cadastro.curso);
    printf("Periodo: %d\n", cadastro.periodo);
    printf("Disciplinas: %s\n", cadastro.disciplinas);
}

int main() {
    struct Cadastro cadastro;

    printf("Digite o nome: ");
    fgets(cadastro.nome, sizeof(cadastro.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &cadastro.idade);

    printf("Digite a matricula: ");
    scanf("%d", &cadastro.matricula);

    printf("Digite o endereco: ");
    scanf(" %[^\n]s", cadastro.endereco);

    printf("Digite o curso: ");
    scanf(" %[^\n]s", cadastro.curso);

    printf("Digite o periodo: ");
    scanf("%d", &cadastro.periodo);

    printf("Digite as disciplinas: ");
    scanf(" %[^\n]s", cadastro.disciplinas);

    exibirCadastro(cadastro);

    return 0;
}
