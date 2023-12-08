#include <stdio.h>

int main() {
    int A[10], B[10], C[10], i;

    printf("Digite 10 números inteiros para o vetor A:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 10 números inteiros para o vetor B:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }

    printf("O vetor C = A - B é:\n");
    for(i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }

    return 0;
}
