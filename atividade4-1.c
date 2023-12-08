#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if(numero >= 0) {
        printf("A raiz quadrada do número é: %.2f\n", sqrt(numero));
    } else {
        printf("O quadrado do número é: %.2f\n", numero * numero);
    }

    return 0;
}
