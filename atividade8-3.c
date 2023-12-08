#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("O termo %d da sequência de Fibonacci é %d.\n", n, t1);
        return 0;
    } else if(n == 1) {
        printf("O termo %d da sequência de Fibonacci é %d.\n", n, t2);
        return 0;
    }

    for (int i = 2; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
ss
    printf("O termo %d da sequência de Fibonacci é %d.\n", n, nextTerm);

    return 0;
}
ss