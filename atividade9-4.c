#include <stdio.h>

int main() {
    int vetor[8], x, y;

    printf("Digite 8 números inteiros:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posição X no vetor (0-7): ");
    scanf("%d", &x);
    printf("Digite a posição Y no vetor (0-7): ");
    scanf("%d", &y);

    int soma = vetor[x] + vetor[y];
    printf("A soma dos valores nas posições X e Y é: %d\n", soma);

    return 0;
}
