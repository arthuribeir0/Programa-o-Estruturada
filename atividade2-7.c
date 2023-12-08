#include <stdio.h>

int main() {
    int anos, meses, dias, idadeEmDias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias é: %d\n", idadeEmDias);

    return 0;
}
