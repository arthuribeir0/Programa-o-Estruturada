#include <stdio.h>

int main() {
    int valores[5], maior, menor;
    float media = 0;

    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        media += valores[i];
    }

    maior = valores[0];
    menor = valores[0];

    for(int i = 1; i < 5; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
        }
        if(valores[i] < menor) {
            menor = valores[i];
        }
    }

    media /= 5;

    printf("Os valores digitados foram:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nO maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}
