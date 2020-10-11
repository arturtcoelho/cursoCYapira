#include <stdio.h>

int main()
{
    int a = 200;
    int b = 42;

    if (a != b) {
        printf("a é diferente de b\n");
    } 

    if (a > b) {
        printf("a é maior que b\n");
    } else {
        printf("a é menor que b\n");
    }

    return 0;
}
