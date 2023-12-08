#include <stdio.h>

int main() {
    int vetor[10], maior, posicao;

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if(i == 0 || vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O vetor digitado é:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nO maior elemento do vetor é %d e ele se encontra na posição %d.\n", maior, posicao);

    return 0;
}
