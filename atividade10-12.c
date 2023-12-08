#include <stdio.h>

int main() {
    int vetor[100], i = 0, j = 0;

    while(i < 100) {
        if(j % 7 != 0 && j % 10 != 7) {
            vetor[i] = j;
            i++;
        }
        j++;
    }

    printf("Os primeiros 100 números naturais que não são múltiplos de 7 ou que não terminam com 7 são:\n");
    for(i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
