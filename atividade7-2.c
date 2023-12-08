#include <stdio.h>

int main() {
    int N, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for(i = N; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
