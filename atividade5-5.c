#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    if(a == 0) {
        printf("Não é equação de segundo grau.\n");
        return 0;
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if(delta < 0) {
        printf("Não existe raiz.\n");
    } else if(delta == 0) {
        raiz1 = -b / (2 * a);
        printf("Raiz única: %.2f\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As duas raízes reais são: %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
