#include <stdio.h>

int main() {
    float numeros[10], somaPositivos = 0;
    int contNegativos = 0;

    printf("Digite 10 números reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
        if(numeros[i] < 0) {
            contNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("A quantidade de números negativos é: %d\n", contNegativos);
    printf("A soma dos números positivos é: %.2f\n", somaPositivos);

    return 0;
}
