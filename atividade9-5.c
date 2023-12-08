#include <stdio.h>

int main() {
    int vetor[10], contPares = 0;

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) {
            contPares++;
        }
    }

    printf("O vetor tem %d valores pares.\n", contPares);

    return 0;
}
