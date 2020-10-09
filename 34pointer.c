#include <stdio.h>

int soma(int num1, int num2, int *res) {
    int soma = num1 + num2;
    *res = soma;
}

int main() {

    int a = 12;
    int b = 40;
    int c;

    soma(a, b, &c);

    printf("c: %d\n", c);

    return 0;
}
