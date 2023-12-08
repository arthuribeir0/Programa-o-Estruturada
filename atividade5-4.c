#include <stdio.h>

int main (){
    int salario, tempoDeServiço;
    printf("digite seu salario atual: ");
    scanf("%d", &salario);
    printf("digite o tempo de serviço em anos: ");
    scanf("%d", &tempoDeServiço);
    if (salario <= 500 && tempoDeServiço > 1) {
        salario = salario + (salario * 0.25);
    }
    if (salario <= 1000 && 3 > tempoDeServiço >= 1 ){
        salario = salario + (salario * 0.20 + 100);
    }
    if (salario <= 1500 && 6 > tempoDeServiço >= 4 ){
        salario = salario + (salario * 0.15 + 200);
    }
    if (salario <= 2000 && 10 > tempoDeServiço >= 9 ){
        salario = salario + (salario * 0.10 + 300);
    }
    if (salario > 2000 && tempoDeServiço > 10 ){
        salario = salario + (salario + 500);
    }
    
    printf("o seu novo salario e de R$%.2f", salario);
    return 0;


}