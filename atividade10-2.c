#include <stdio.h>

int main() {
    int vetor[20], i, j, k;

    printf("Digite 20 números inteiros:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Os elementos do vetor sem repetições são:\n");
    for(i = 0; i < 20; i++) {
        for(j = 0; j < i; j++) {
            if(vetor[i] == vetor[j]) {
                break;
            }
        }
        if(i == j) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
