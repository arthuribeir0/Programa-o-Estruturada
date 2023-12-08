#include <stdio.h>

int main() {
    double largura, comprimento, area;

    printf("Digite a largura da sala em metros: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento da sala em metros: ");
    scanf("%lf", &comprimento);

    area = largura * comprimento;

    printf("A área da sala é: %.2lf metros quadrados\n", area);

    return 0;
}
