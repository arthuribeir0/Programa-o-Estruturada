#include <stdio.h>

int main() {
    int idade;
    float salario, altura, peso;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    if(salario > 1100) { // Considerando o salário mínimo atual no Brasil.
        printf("Você ganha mais que o salário mínimo.\n");
    } else {
        printf("Você ganha menos que o salário mínimo.\n");
    }

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    if(altura > 1.8) {
        printf("Você é maior que 1.8m.\n");
    } else {
        printf("Você é menor que 1.8m.\n");
    }

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    if(peso < 60) {
        printf("Você pesa menos que 60kg.\n");
    } else {
        printf("Você pesa mais que 60kg.\n");
    }

    return 0;
}
