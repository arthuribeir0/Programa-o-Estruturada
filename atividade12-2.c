#include <stdio.h>

int main() {
    
  int A[500];
  int B[500];
  for (int i = 0; i < 500; i++) {
    printf("Informe a quantidade de filmes retirados pelo cliente %d: ", i + 1);
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < 500; i++) {
    B[i] = A[i] / 15;
    if (A[i] % 15 != 0) {
      B[i]++;
    }
  }
  for (int i = 0; i < 500; i++) {
    printf("Cliente %d: %d locações gratuitas\n", i + 1, B[i]);
  }

  return 0;
}
