#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    char sexo;
    int voto;
};

int main() {
    struct Pessoa pessoas[300];
    int votos[5] = {0, 0, 0, 0, 0};
    char jogadoras[5][50] = {"Sam Kerr - Australia", "Alex Morgan - Estados Unidos", "Dzsenifer Marozsan - Alemanha", "Amandine Henry - França", "Marta Vieira - Brasil"};
    int numPessoas, i, j;

    printf("Digite o número de pessoas entrevistadas (entre 50 e 300): ");
    scanf("%d", &numPessoas);

    for(i = 0; i < numPessoas; i++) {
        printf("Digite o nome da pessoa: ");
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &pessoas[i].idade);
        printf("Digite o sexo da pessoa (M ou F): ");
        scanf(" %c", &pessoas[i].sexo);
        printf("Digite o número correspondente ao voto da pessoa (1-5): ");
        scanf("%d", &pessoas[i].voto);
        votos[pessoas[i].voto - 1]++;
    }

    printf("\nQuantidade de votos que cada jogadora recebeu:\n");
    for(i = 0; i < 5; i++) {
        printf("%s: %d votos\n", jogadoras[i], votos[i]);
    }

    int maxVotos = 0;
    for(i = 0; i < 5; i++) {
        if(votos[i] > maxVotos) {
            maxVotos = votos[i];
        }
    }

    printf("\nJogadora(s) mais votada(s):\n");
    for(i = 0; i < 5; i++) {
        if(votos[i] == maxVotos) {
            printf("%s\n", jogadoras[i]);
        }
    }

    printf("\nNome, idade e sexo de todas as pessoas que participaram da pesquisa:\n");
    for(i = 0; i < numPessoas; i++) {
        printf("Nome: %s, Idade: %d, Sexo: %c\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].sexo);
    }

    printf("\nNome das pessoas maior de idade que votaram na Marta Vieira:\n");
    for(i = 0; i < numPessoas; i++) {
        if(pessoas[i].idade >= 18 && pessoas[i].voto == 5) {
            printf("%s\n", pessoas[i].nome);
        }
    }

    int numMulheres = 0;
    for(i = 0; i < numPessoas; i++) {
        if(pessoas[i].sexo == 'F') {
            numMulheres++;
        }
    }

    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", numMulheres);

    return 0;
}
