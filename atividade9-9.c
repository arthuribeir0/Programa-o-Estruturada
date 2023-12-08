#include <stdio.h>

int main() {
    int valores[6], valor;

    printf("Digite 6 números inteiros pares:\n");
    for(int i = 0; i < 6; i++) {
        do {
            scanf("%d", &valor);
        } while(valor % 2 != 0); // Continua pedindo um número até que seja par
        valores[i] = valor;
    }

    printf("Os valores digitados na ordem inversa são:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
