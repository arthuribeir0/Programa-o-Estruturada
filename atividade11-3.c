#include <stdio.h>

float converteFahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0/9.0);
}

int main() {
    float fahrenheit;
    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("%.2f graus Fahrenheit é igual a %.2f graus Celsius.\n", fahrenheit, converteFahrenheitParaCelsius(fahrenheit));
    return 0;
}
