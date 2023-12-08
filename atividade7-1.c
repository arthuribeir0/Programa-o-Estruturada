#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for(i = 0; i <= N; i++) {
        printf("%d ", i);
    }

    return 0;
}
