#include <stdio.h>

int main (){
    int calorias, prato=0, sobremesa=0, bebida=0, codigo1, codigo2, codigo3;
    printf("digite seu prato: ");
    scanf("%d", &codigo1);
    printf("digite seu sobremesa: ");
    scanf("%d", &codigo2);
    printf("digite seu bebida: ");
    scanf("%d", &codigo3);

    switch (codigo1) {
        case 1:
            prato += 180;
        break;
        case 2:
            prato += 230;
        break;
        case 3:
            prato += 250;
        break;
        case 4:
            prato += 350;
        break;
        default:
            printf("Invalid");
            return 0;
    }

    switch (codigo2) {
        case 1:
            sobremesa += 75;
        break;
        case 2:
            sobremesa += 110;
        break;
        case 3:
            sobremesa += 170;
        break;
        case 4:
            sobremesa += 200;
        break;
        default:
            printf("Invalid");
            return 0;
    }

    switch (codigo3) {
        case 1:
            bebida += 20;
        break;
        case 2:
            bebida += 70;
        break;
        case 3:
            bebida += 100;
        break;
        case 4:
            bebida += 65;
        break;
        default:
            printf("Invalid");
            return 0;
    }

    calorias = prato + sobremesa + bebida;
    printf("Sua refeição tem %d calorias", calorias);
}