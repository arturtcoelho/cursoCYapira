#include <stdio.h>

int escreva_num(int num) {
    printf("num: %d\n", num);
}

int soma(int num1, int num2, int* num3) {
    *num3 = num1 + num2;
}

int main() {

    // int a = 10;
    // int *pointer = NULL, *pointer2;

    // printf("pointer: %p\n", pointer);
    
    // pointer = &a;

    // printf("pointer: %p\n", pointer);
    // printf("*pointer: %d\n", *pointer);

    // a = 20;

    // printf("*pointer: %d\n", *pointer);

    int a = 1, b = 2, c = 30;

    soma(a, b, &c);

    printf("%d\n", c);

    return 0;
}
