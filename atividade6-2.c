#include <stdio.h>

int main () {
    int codigo, quantidade;
    float valor;
    printf("Digite o codigo do intem: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    switch (codigo)
    {
    case 100:
        valor = 10.10 * quantidade;
        break;  
    case 101:
        valor = 8.30 * quantidade;
        break;       
    case 102:
        valor = 8.50 * quantidade;
        break;
    case 103:
        valor = 12.50 * quantidade;
        break;   
    case 104:
        valor = 13.25 * quantidade;
        break;
    default:
        printf("Codigo invalido\n");
        return 0;
    }    
    printf("Valor: %.2f\n", valor);    
    return 0;
}