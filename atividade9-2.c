#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite 6 valores inteiros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Os valores digitados foram:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
