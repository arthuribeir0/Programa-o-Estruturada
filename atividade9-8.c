#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite 6 números inteiros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Os valores digitados na ordem inversa são:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
