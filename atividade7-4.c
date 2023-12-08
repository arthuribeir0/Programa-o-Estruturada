#include <stdio.h>

int main() {
    int i;

    printf("Os cinco primeiros múltiplos de 3 são: ");

    for(i = 1; i <= 5; i++) {
        printf("%d ", 3*i);
    }

    return 0;
}
