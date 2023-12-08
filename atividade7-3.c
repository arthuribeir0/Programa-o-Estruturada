#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    for(i = 1; i <= 2*N; i+=2) {
        printf("%d ", i);
    }

    return 0;
}
