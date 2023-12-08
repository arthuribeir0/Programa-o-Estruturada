#include <stdio.h>

int main() {
    char sexo, cor_olhos, cor_cabelos;
    int idade, cont_fem = 0, cont_total = 0;
    float salario;

    do {
        printf("Digite o sexo (m ou f): ");
        scanf(" %c", &sexo);
        while(sexo != 'm' && sexo != 'f') {
            printf("Sexo inválido! Digite novamente: ");
            scanf(" %c", &sexo);
        }

        printf("Digite a cor dos olhos (a, v, c, p): ");
        scanf(" %c", &cor_olhos);
        while(cor_olhos != 'a' && cor_olhos != 'v' && cor_olhos != 'c' && cor_olhos != 'p') {
            printf("Cor dos olhos inválida! Digite novamente: ");
            scanf(" %c", &cor_olhos);
        }

        printf("Digite a cor dos cabelos (l, c, p, r): ");
        scanf(" %c", &cor_cabelos);
        while(cor_cabelos != 'l' && cor_cabelos != 'c' && cor_cabelos != 'p' && cor_cabelos != 'r') {
            printf("Cor dos cabelos inválida! Digite novamente: ");
            scanf(" %c", &cor_cabelos);
        }

        printf("Digite a idade: ");
        scanf("%d", &idade);
        while(idade < 10 && idade > 100 && idade != -1) {
            printf("Idade inválida! Digite novamente: ");
            scanf("%d", &idade);
        }

        printf("Digite o valor do salário: ");
        scanf("%f", &salario);
        while(salario < 0) {
            printf("Salário inválido! Digite novamente: ");
            scanf("%f", &salario);
        }

        if(sexo == 'f' && idade >= 18 && idade <= 35 && cor_olhos == 'c' && cor_cabelos == 'c') {
            cont_fem++;
        }

        if(idade != -1) {
            cont_total++;
        }

    } while(idade != -1);

    printf("A porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos é: %.2f%%\n", ((float)cont_fem/cont_total)*100);

    return 0;
}