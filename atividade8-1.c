#include <stdio.h>

int main() {
  // declarar as variáveis necessárias
  int idade, maior_idade_otimo, maior_idade_ruim, maior_idade_pessimo;
  char opiniao;
  int cont_otimo, cont_bom, cont_regular, cont_ruim, cont_pessimo;
  int soma_idade_ruim;
  double media_idade_ruim, perc_pessimo, dif_perc_bom_regular, dif_idade_otimo_ruim;

  // inicializar as variáveis
  maior_idade_otimo = 0;
  maior_idade_ruim = 0;
  maior_idade_pessimo = 0;
  cont_otimo = 0;
  cont_bom = 0;
  cont_regular = 0;
  cont_ruim = 0;
  cont_pessimo = 0;
  soma_idade_ruim = 0;

  // ler os dados dos 100 espectadores
  for (int i = 0; i < 100; i++) {
    printf("Digite a idade do %dº espectador: ", i + 1);
    scanf("%d", &idade);
    printf("Digite a opinião do %dº espectador (A, B, C, D ou E): ", i + 1);
    scanf(" %c", &opiniao); // o espaço antes do %c é para ignorar o \n do scanf anterior

    // atualizar as variáveis de acordo com a opinião
    switch (opiniao) {
      case 'A':
        cont_otimo++;
        if (idade > maior_idade_otimo) {
          maior_idade_otimo = idade;
        }
        break;
      case 'B':
        cont_bom++;
        break;
      case 'C':
        cont_regular++;
        break;
      case 'D':
        cont_ruim++;
        soma_idade_ruim += idade;
        if (idade > maior_idade_ruim) {
          maior_idade_ruim = idade;
        }
        break;
      case 'E':
        cont_pessimo++;
        if (idade > maior_idade_pessimo) {
          maior_idade_pessimo = idade;
        }
        break;
      default:
        printf("Opinião inválida.\n");
        break;
    }
  }

  // calcular as medidas pedidas
  media_idade_ruim = (double) soma_idade_ruim / cont_ruim;
  perc_pessimo = (double) cont_pessimo / 100 * 100;
  dif_perc_bom_regular = (double) cont_bom / 100 * 100 - (double) cont_regular / 100 * 100;
  dif_idade_otimo_ruim = maior_idade_otimo - maior_idade_ruim;

  // imprimir os resultados
  printf("A quantidade de respostas ótimo é %d.\n", cont_otimo);
  printf("A diferença percentual entre respostas bom e regular é %.2f%%.\n", dif_perc_bom_regular);
  printf("A média de idade das pessoas que responderam ruim é %.2f anos.\n", media_idade_ruim);
  printf("A percentagem de respostas péssimo é %.2f%% e a maior idade que utilizou esta opção é %d anos.\n", perc_pessimo, maior_idade_pessimo);
  printf("A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim é %d anos.\n", dif_idade_otimo_ruim);

  return 0;
}
