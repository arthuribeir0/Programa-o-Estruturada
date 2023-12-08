#include <stdio.h>

int main() {
    int idade, tempoServico;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço em anos: ");
    scanf("%d", &tempoServico);

    if(idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("Você pode se aposentar.\n");
    } else {
        printf("Você ainda não pode se aposentar.\n");
    }

    return 0;
}
