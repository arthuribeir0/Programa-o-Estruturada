#include <stdio.h>

int main() {
    int vetor[10], i, j;

    printf("Digite 10 números inteiros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Os valores iguais no vetor são:\n");
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}
