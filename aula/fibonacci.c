#include <stdio.h>

int main () {

    int i = 0;

    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c;

    while (i < n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;

        i++;
    }
    printf("\n");

    for (i = 0, a = 0, b = 1; i < n ; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}