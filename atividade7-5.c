#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 0; i < 100; i+=2) {
        soma += i;
    }

    printf("A soma dos 50 primeiros números pares é: %d", soma);

    return 0;
}
