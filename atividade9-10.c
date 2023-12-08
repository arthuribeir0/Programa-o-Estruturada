#include <stdio.h>

int main() {
    float notas[15], soma = 0, media;

    printf("Digite as notas de 15 alunos:\n");
    for(int i = 0; i < 15; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 15;
    printf("A média geral é: %.2f\n", media);

    return 0;
}
