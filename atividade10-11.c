#include <stdio.h>

int main() {
    int numero[10];
    float altura[10], menorAltura, maiorAltura;
    int menorNumero, maiorNumero;

    printf("Digite o número e a altura de 10 alunos:\n");
    for(int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Número: ");
        scanf("%d", &numero[i]);
        printf("Altura: ");
        scanf("%f", &altura[i]);
    }

    menorAltura = altura[0];
    menorNumero = numero[0];
    maiorAltura = altura[0];
    maiorNumero = numero[0];

    for(int i = 1; i < 10; i++) {
        if(altura[i] < menorAltura) {
            menorAltura = altura[i];
            menorNumero = numero[i];
        }
        if(altura[i] > maiorAltura) {
            maiorAltura = altura[i];
            maiorNumero = numero[i];
        }
    }

    printf("O aluno mais baixo é o número %d com %.2f metros.\n", menorNumero, menorAltura);
    printf("O aluno mais alto é o número %d com %.2f metros.\n", maiorNumero, maiorAltura);

    return 0;
}
