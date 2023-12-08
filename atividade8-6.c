#include <stdio.h>

int main() {
    char resposta;
    do {
        int mes, ano, dias;
        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);
        printf("Digite o ano: ");
        scanf("%d", &ano);

        switch(mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dias = 31;
                break;
            case 4: case 6: case 9: case 11:
                dias = 30;
                break;
            case 2:
                if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                    dias = 29;
                else
                    dias = 28;
                break;
            default:
                printf("Mês inválido.\n");
                return 1;
        }

        printf("O número de dias do mês/ano digitado é: %d\n", dias);
        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);
    } while(resposta == 'S' || resposta == 's');

    return 0;
}
