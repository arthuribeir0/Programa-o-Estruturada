#include <stdio.h>

int main() {
    float numeros[5], maior, menor;
    int posMaior, posMenor;

    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &numeros[i]);
        if(i == 0) {
            maior = menor = numeros[i];
            posMaior = posMenor = i;
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
                posMaior = i;
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
                posMenor = i;
            }
        }
    }

    printf("O maior número está na posição: %d\n", posMaior);
    printf("O menor número está na posição: %d\n", posMenor);

    return 0;
}
