#include <stdio.h>

int main() {
    int vetor[10], i;

    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("O vetor após a substituição dos valores negativos por 0 é:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
