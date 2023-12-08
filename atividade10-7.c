#include <stdio.h>

int main() {
    int vetor[10], impares[10], numImpares = 0, i, num;

    printf("Digite 10 números inteiros no intervalo (0,50]:\n");
    for(i = 0; i < 10; i++) {
        do {
            scanf("%d", &num);
        } while(num <= 0 || num > 50);
        vetor[i] = num;
        if(num % 2 != 0) {
            impares[numImpares] = num;
            numImpares++;
        }
    }

    printf("Os números digitados foram:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
        if((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nOs números ímpares digitados foram:\n");
    for(i = 0; i < numImpares; i++) {
        printf("%d ", impares[i]);
        if((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}
