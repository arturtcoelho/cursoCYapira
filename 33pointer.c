#include <stdio.h>

int escreva_num(int num) {
    printf("num: %d\n", num);
}

int soma(int num1, int num2) {
    int soma = num1 + num2;
    return soma;
}

int main() {

    int a = 10;
    int *pointer;

    printf("pointer: %p\n", pointer);
    
    pointer = &a;

    printf("pointer: %p\n", pointer);

    return 0;
}
