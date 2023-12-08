#include <stdio.h>

int maior(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 10;
    int b = 20;
    printf("O maior número entre %d e %d é %d\n", a, b, maior(a, b));
    return 0;
}
