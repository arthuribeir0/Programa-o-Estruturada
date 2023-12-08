#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[20], i;

    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 números inteiros para o segundo vetor:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 10; i++) {
        vetor3[i*2] = vetor1[i];
        vetor3[i*2 + 1] = vetor2[i];
    }

    printf("O vetor resultante é:\n");
    for(i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}
