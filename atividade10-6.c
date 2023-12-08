#include <stdio.h>

int main() {
    int vetor[50];

    for(int i = 0; i < 50; i++) {
        if(i == 0) {
            vetor[i] = 0;
        } else {
            vetor[i] = (i + 5 * i) % (i + 1);
        }
    }

    for(int i = 0; i < 50; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
