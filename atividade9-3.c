#include <stdio.h>
#include <math.h>

int main() {
    float numeros[10], quadrados[10];

    printf("Digite 10 números reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
        quadrados[i] = pow(numeros[i], 2);
    }

    printf("Os números digitados foram:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f\n", numeros[i]);
    }

    printf("O quadrado dos números digitados é:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f\n", quadrados[i]);
    }

    return 0;
}
