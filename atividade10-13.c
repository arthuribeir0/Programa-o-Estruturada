#include <stdio.h>
#include <math.h>

int main() {
    int vetor[10];
    float media = 0, desvioPadrao = 0;

    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }

    media /= 10;

    for(int i = 0; i < 10; i++) {
        desvioPadrao += pow(vetor[i] - media, 2);
    }

    desvioPadrao = sqrt(desvioPadrao / 10);

    printf("O desvio padrão dos números digitados é: %.2f\n", desvioPadrao);

    return 0;
}
