#include <stdio.h>

int main() {
    int moradores = 50;
    char elevador[50];
    char periodo[50];
    int contA = 0, contB = 0, contC = 0;
    int contM = 0, contV = 0, contN = 0;
    int i;

    for(i = 0; i < moradores; i++) {
        printf("Qual elevador você usa com mais frequência (A, B, C)? ");
        scanf(" %c", &elevador[i]);
        printf("Qual período você usa o elevador (M, V, N)? ");
        scanf(" %c", &periodo[i]);

        if(elevador[i] == 'A') contA++;
        else if(elevador[i] == 'B') contB++;
        else if(elevador[i] == 'C') contC++;

        if(periodo[i] == 'M') contM++;
        else if(periodo[i] == 'V') contV++;
        else if(periodo[i] == 'N') contN++;
    }

    char elevadorMaisUsado = (contA > contB && contA > contC) ? 'A' : (contB > contC ? 'B' : 'C');
    char periodoMaissUsado = (contM > contV && contM > contN) ? 'M' : (contV > contN ? 'V' : 'N');

    printf("O elevador mais usado é o %c e o período mais usado é o %c.\n", elevadorMaisUsado, periodoMaisUsado);

    int difPercentual = ((contM > contV && contM > contN) ? contM : (contV > contN ? contV : contN)) - ((contM < contV && contM < contN) ? contM : (contV < contN ? contV : contN));
    printf("A diferença percentual entre o mais usado dos horários e o menos usado é de %d%%.\n", difPercentual);

    int mediaUtilizacao = (contA + contB + contC) / 3;
    int percentagemMedia = (mediaUtilizacao * 100) / moradores;
    printf("A porcentagem sobre o total de serviços prestados do elevador de média utilização é de %d%%.\n", percentagemMedia);
s
    return 0;
}
