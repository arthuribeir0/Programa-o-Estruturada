#include <stdio.h>

float volumeEsfera(float raio) {
    float pi = 3.1414592;
    return (4.0/3.0) * pi * raio * raio * raio;
}

int main() {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("O volume da esfera é: %.2f\n", volumeEsfera(raio));
    return 0;
}
