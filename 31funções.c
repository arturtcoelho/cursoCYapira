#include <stdio.h>

int escreva_num(int num) {
    printf("num: %d\n", num);
}

int soma(int num1, int num2) {
    int soma = num1 + num2;
    return soma;
}

int main() {

    int a = 1;
    int b = 2;
    int c = soma(a, b);
    escreva_num(c);

    escreva_num(soma(a, b));

    return 0;
}
