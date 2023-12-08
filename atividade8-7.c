#include <stdio.h>

struct Pessoa {
    char nome[50];
    char sexo;
    float altura;
    float peso;
};

int main() {
    struct Pessoa pessoas[10];
    int numHomens = 0, numMulheres = 0;
    float alturaTotal = 0, pesoTotal = 0, alturaHomens = 0, pesoHomens = 0, alturaMulheres = 0, pesoMulheres = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa: ");
        scanf("%s", pessoas[i].nome);
        printf("Digite o sexo da pessoa (M ou F): ");
        scanf(" %c", &pessoas[i].sexo);
        printf("Digite a altura da pessoa: ");
        scanf("%f", &pessoas[i].altura);
        printf("Digite o peso da pessoa: ");
        scanf("%f", &pessoas[i].peso);

        alturaTotal += pessoas[i].altura;
        pesoTotal += pessoas[i].peso;

        if(pessoas[i].sexo == 'M' || pessoas[i].sexo == 'm') {
            numHomens++;
            alturaHomens += pessoas[i].altura;
            pesoHomens += pessoas[i].peso;
        } else if(pessoas[i].sexo == 'F' || pessoas[i].sexo == 'f') {
            numMulheres++;
            alturaMulheres += pessoas[i].altura;
            pesoMulheres += pessoas[i].peso;
        }
    }

    printf("\nNúmero de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2f\n", alturaHomens / numHomens);
    printf("Altura média das mulheres: %.2f\n", alturaMulheres / numMulheres);
    printf("Altura média do grupo: %.2f\n", alturaTotal / 10);
    printf("Peso médio dos homens: %.2f\n", pesoHomens / numHomens);
    printf("Peso médio das mulheres: %.2f\n", pesoMulheres / numMulheres);
    printf("Peso médio do grupo: %.2f\n", pesoTotal / 10);

    return 0;
}
