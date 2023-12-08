#include <stdio.h>

int main() {
    float A, B, C;
    float temp;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if(A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    if(B < C) {
        temp = B;
        B = C;
        C = temp;
    }

    if(A < B) {
        temp = A;
        A = B;
        B = temp;
    }

    printf("Os valores em ordem descendente são: %.2f, %.2f, %.2f\n", A, B, C);

    return 0;
}
