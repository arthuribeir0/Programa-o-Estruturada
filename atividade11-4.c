#include <stdio.h>

float volumeCilindro(float altura, float raio) {
    float pi = 3.1414592;
    return pi * raio * raio * altura;
}

int main() {
    float altura, raio;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("O volume do cilindro é: %.2f\n", volumeCilindro(altura, raio));
    return 0;
}
