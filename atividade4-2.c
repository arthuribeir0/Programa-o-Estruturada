#include <stdio.h>

int main() {
    float A, B, C, D;
    float maior, menor;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("Digite o valor de D: ");
    scanf("%f", &D);

    maior = A;
    menor = A;

    if(B > maior) {
        maior = B;
    }
    if(C > maior) {
        maior = C;
    }
    if(D > maior) {
        maior = D;
    }

    if(B < menor) {
        menor = B;
    }
    if(C < menor) {
        menor = C;
    }
    if(D < menor) {
        menor = D;
    }

    printf("O maior valor é: %.2f\n", maior);
    printf("O menor valor é: %.2f\n", menor);

    return 0;
}
