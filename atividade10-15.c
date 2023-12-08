#include <stdio.h>

int main() {
    int valores[5], maior, menor, posicaoMaior, posicaoMenor;

    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        if(i == 0) {
            maior = valores[i];
            menor = valores[i];
            posicaoMaior = i;
            posicaoMenor = i;
        } else {
            if(valores[i] > maior) {
                maior = valores[i];
                posicaoMaior = i;
            }
            if(valores[i] < menor) {
                menor = valores[i];
                posicaoMenor = i;
            }
        }
    }

    printf("O maior valor está na posição: %d\n", posicaoMaior);
    printf("O menor valor está na posição: %d\n", posicaoMenor);

    return 0;
}
