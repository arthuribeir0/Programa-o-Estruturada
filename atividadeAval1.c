1
// #include <stdio.h>
// #include <math.h>

// double f(double x) {
//     return (5*x + 3) / sqrt(pow(x, 2) - 16);
// }

// int main() {
//     double x;
//     printf("Digite o valor de x: ");
//     scanf("%lf", &x);
//     printf("O valor de f(x) é: %.2lf\n", f(x));
//     return 0;
// }

2
// #include <stdio.h>

// int main() {
//     float altura_chico = 1.50; 
//     float altura_ze = 1.10; 
//     int anos = 0;
//     while (altura_ze <= altura_chico) {
//         altura_chico += 0.02; 
//         altura_ze += 0.03; 
//         anos++;
//     }
//     printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);
//     return 0;
// }

3
// #include <stdio.h>

// int main() {
//     float A, B, C;

//     printf("Digite o valor de A: ");
//     scanf("%f", &A);
//     printf("Digite o valor de B: ");
//     scanf("%f", &B);
//     printf("Digite o valor de C: ");
//     scanf("%f", &C);

//     if (A < B + C && B < A + C && C < A + B) {
//         if (A == B && B == C)
//             printf("É um triângulo equilátero.\n");
//         else if (A == B || B == C || A == C)
//             printf("É um triângulo isósceles.\n");
//         else
//             printf("É um triângulo escaleno.\n");
//     } else {
//         printf("Os valores fornecidos não formam um triângulo.\n");
//     }

//     return 0;
// }

4
// #include <stdio.h>
// #include <math.h>

// int main() {
//     float A, B, C;

//     printf("Digite o valor de A: ");
//     scanf("%f", &A);
//     printf("Digite o valor de B: ");
//     scanf("%f", &B);
//     printf("Digite o valor de C: ");
//     scanf("%f", &C);

//     if (A < B + C && B < A + C && C < A + B) {
//         float max = A > B ? (A > C ? A : C) : (B > C ? B : C);
//         float other1 = A == max ? B : A;
//         float other2 = C == max ? B : C;
//         float angle = acos((pow(other1, 2) + pow(other2, 2) - pow(max, 2)) / (2 * other1 * other2)) * 180 / M_PI;

//         if (angle == 90)
//             printf("É um triângulo retângulo.\n");
//         else if (angle < 90)
//             printf("É um triângulo acutângulo.\n");
//         else
//             printf("É um triângulo obtusângulo.\n");
//     } else {
//         printf("Os valores fornecidos não formam um triângulo.\n");
//     }

//     return 0;
// }

5
// #include <stdio.h>
// #include <math.h>

// int main() {
//     float x1, y1, x2, y2;

//     printf("Digite o valor de x1: ");
//     scanf("%f", &x1);
//     printf("Digite o valor de y1: ");
//     scanf("%f", &y1);
//     printf("Digite o valor de x2: ");
//     scanf("%f", &x2);
//     printf("Digite o valor de y2: ");
//     scanf("%f", &y2);

//     float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//     printf("A distância entre os pontos é: %.4f\n", distancia);

//     return 0;
// }

6


7
// #include <stdio.h>

// int main() {
//     int num_alunos = 30;
//     float soma_medias = 0;

//     for (int i = 0; i < num_alunos; i++) {
//         float n1, n2, n3;
//         printf("Digite as três notas do aluno %d: ", i+1);
//         scanf("%f %f %f", &n1, &n2, &n3);

//         float media_ponderada = (n1*2 + n2*4 + n3*4) / 10;
//         soma_medias += media_ponderada;

//         printf("Média do aluno %d: %.2f - ", i+1, media_ponderada);
//         if (media_ponderada >= 7)
//             printf("Aprovado\n");
//         else
//             printf("Reprovado\n");
//     }

//     printf("Média geral da turma: %.2f\n", soma_medias / num_alunos);

//     return 0;
// }

8
// #include <stdio.h>

// int main() {
//     float salario, total_salario = 0, maior_salario = 0;
//     int num_filhos, total_filhos = 0, cont = 0, cont_salario_100 = 0;

//     do {
//         printf("Digite o salário: ");
//         scanf("%f", &salario);
//         if (salario < 0) break;

//         printf("Digite o número de filhos: ");
//         scanf("%d", &num_filhos);

//         total_salario += salario;
//         total_filhos += num_filhos;
//         cont++;

//         if (salario > maior_salario)
//             maior_salario = salario;

//         if (salario <= 100)
//             cont_salario_100++;

//     } while (salario >= 0);

//     printf("Média do salário da população: %.2f\n", total_salario / cont);
//     printf("Média do número de filhos: %.2f\n", (float)total_filhos / cont);
//     printf("Maior salário: %.2f\n", maior_salario);
//     printf("Percentual de pessoas com salário até R$100,00: %.2f%%\n", (float)cont_salario_100 / cont * 100);

//     return 0;
// }

9
// #include <stdio.h>

// int main() {
//     int votos[7] = {0}; // Array para armazenar a contagem de votos
//     int voto;

//     printf("Digite o código do voto (0 para terminar): ");
//     scanf("%d", &voto);

//     while (voto != 0) {
//         if (voto >= 1 && voto <= 6)
//             votos[voto]++;
//         else
//             printf("Código de voto inválido.\n");

//         printf("Digite o código do voto (0 para terminar): ");
//         scanf("%d", &voto);
//     }

//     printf("Total de votos para cada candidato:\n");
//     for (int i = 1; i <= 4; i++)
//         printf("Candidato %d: %d votos\n", i, votos[i]);

//     printf("Total de votos nulos: %d\n", votos[5]);
//     printf("Total de votos em branco: %d\n", votos[6]);

//     return 0;
// }

10
// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     int codigo;
//     char estado[3];
//     int num_veiculos;
//     int num_acidentes;
// } Cidade;

// int main() {
//     int num_cidades = 200;
//     Cidade cidades[num_cidades];
//     int total_veiculos = 0, total_acidentes_RS = 0, cont_RS = 0;
//     Cidade cidade_maior_indice, cidade_menor_indice;

//     for (int i = 0; i < num_cidades; i++) {
//         printf("Digite o código da cidade: ");
//         scanf("%d", &cidades[i].codigo);
//         printf("Digite o estado da cidade: ");
//         scanf("%s", cidades[i].estado);
//         printf("Digite o número de veículos de passeio (em 1992): ");
//         scanf("%d", &cidades[i].num_veiculos);
//         printf("Digite o número de acidentes de trânsito com vítimas (em 1992): ");
//         scanf("%d", &cidades[i].num_acidentes);

//         total_veiculos += cidades[i].num_veiculos;

//         if (strcmp(cidades[i].estado, "RS") == 0) {
//             total_acidentes_RS += cidades[i].num_acidentes;
//             cont_RS++;
//         }

//         if (i == 0 || cidades[i].num_acidentes > cidade_maior_indice.num_acidentes)
//             cidade_maior_indice = cidades[i];

//         if (i == 0 || cidades[i].num_acidentes < cidade_menor_indice.num_acidentes)
//             cidade_menor_indice = cidades[i];
//     }

//     printf("Cidade com maior índice de acidentes: %d, com %d acidentes\n", cidade_maior_indice.codigo, cidade_maior_indice.num_acidentes);
//     printf("Cidade com menor índice de acidentes: %d, com %d acidentes\n", cidade_menor_indice.codigo, cidade_menor_indice.num_acidentes);
//     printf("Média de veículos nas cidades brasileiras: %.2f\n", (float)total_veiculos / num_cidades);
//     printf("Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", (float)total_acidentes_RS / cont_RS);

//     return 0;
// }
