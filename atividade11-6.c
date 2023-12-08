#include <stdio.h>

float calculaIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura;
    printf("Digite o seu peso em quilos: ");
    scanf("%f", &peso);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("O seu Índice de Massa Corporal (IMC) é: %.2f\n", calculaIMC(peso, altura));
    return 0;
}
