#include <stdio.h>

int main() {
    float numeros[5], soma = 0, media, maior, menor;

    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &numeros[i]);
        soma += numeros[i];
        if(i == 0) {
            maior = menor = numeros[i];
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    media = soma / 5;

    printf("Os números digitados foram:\n");
    for(int i = 0; i < 5; i++) {
        printf("%.2f\n", numeros[i]);
    }

    printf("O maior número é: %.2f\n", maior);
    printf("O menor número é: %.2f\n", menor);
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
