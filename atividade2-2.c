#include <stdio.h>

int main() {
    double num, dobro;

    printf("Digite um número: ");
    scanf("%lf", &num);

    dobro = num * 2;

    printf("O dobro do número é: %.2lf\n", dobro);

    return 0;
}
