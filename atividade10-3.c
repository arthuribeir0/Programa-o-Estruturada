#include <stdio.h>

int main() {
    float vetor[5];
    int codigo, i;

    printf("Digite 5 números reais:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("Digite um código inteiro:\n");
    scanf("%d", &codigo);

    if(codigo == 0) {
        return 0;
    } else if(codigo == 1) {
        printf("Vetor na ordem direta:\n");
        for(i = 0; i < 5; i++) {
            printf("%.2f\n", vetor[i]);
        }
    } else if(codigo == 2) {
        printf("Vetor na ordem inversa:\n");
        for(i = 4; i >= 0; i--) {
            printf("%.2f\n", vetor[i]);
        }
    } else {
        printf("Código inválido.\n");
    }

    return 0;
}
