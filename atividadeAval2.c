1
// #include <stdio.h>

// int validaQuantidade(int quantidade) {
//     if (quantidade < 0) {
//         printf("Quantidade inválida. Tente novamente.\n");
//         return 0;
//     }
//     return 1;
// }

// double calculaSalario(int quantidade) {
//     double salario = 600.0;

//     if (quantidade > 50 && quantidade <= 80) {
//         salario += (quantidade - 50) * 0.5;
//     } else if (quantidade > 80) {
//         salario += 30 * 0.5 + (quantidade - 80) * 0.75;
//     }

//     return salario;
// }

// void mostraFinal(int quantidade, double salario) {
//     printf("O funcionário que produziu %d peças receberá um salário de R$ %.2f\n", quantidade, salario);
// }

// int main() {
//     int quantidade;
//     double salario;

//     while (1) {
//         printf("Digite a quantidade de peças fabricadas pelo funcionário (ou -1 para sair): ");
//         scanf("%d", &quantidade);

//         if (quantidade == -1) {
//             break;
//         }

//         if (validaQuantidade(quantidade)) {
//             salario = calculaSalario(quantidade);
//             mostraFinal(quantidade, salario);
//         }
//     }

//     return 0;
// }

2
// #include <stdio.h>

// double validaSalario(double salario) {
//     if (salario <= 1.0) {
//         printf("Salário inválido. Tente novamente.\n");
//         return 0;
//     }
//     return 1;
// }

// char validaSexo(char sexo) {
//     if (sexo != 'M' && sexo != 'F') {
//         printf("Sexo inválido. Tente novamente.\n");
//         return 0;
//     }
//     return 1;
// }

// char* classificaSalario(double salario) {
//     if (salario > 1400.0) {
//         return "Acima do salário mínimo";
//     } else if (salario == 1400.0) {
//         return "Igual ao salário mínimo";
//     } else {
//         return "Abaixo do salário mínimo";
//     }
// }

// void mostraClassifica(double salario, char sexo) {
//     printf("Salário: R$ %.2f\n", salario);
//     printf("Classificação: %s\n", classificaSalario(salario));
//     printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
// }

// int main() {
//     double salario;
//     char sexo;
//     int abaixo = 0, acima = 0;

//     while (1) {
//         printf("Digite o salário do funcionário (ou -1 para sair): ");
//         scanf("%lf", &salario);

//         if (salario == -1) {
//             break;
//         }

//         if (validaSalario(salario)) {
//             printf("Digite o sexo do funcionário (M para masculino, F para feminino): ");
//             scanf(" %c", &sexo);

//             if (validaSexo(sexo)) {
//                 mostraClassifica(salario, sexo);

//                 if (salario < 1400.0) {
//                     abaixo++;
//                 } else if (salario > 1400.0) {
//                     acima++;
//                 }
//             }
//         }
//     }

//     printf("Quantidade de assalariados com salário abaixo do salário mínimo: %d\n", abaixo);
//     printf("Quantidade de assalariados com salário acima do salário mínimo: %d\n", acima);

//     return 0;
// }
