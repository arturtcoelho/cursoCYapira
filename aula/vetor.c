#include <stdio.h>

int main () {

    int v[100];

    int i = 0;
    int n;

    scanf("%d", &n);
    while (n != 0 && i < 100){
        v[i] = n;
        scanf("%d", &n);
        i++;
    }

    int tam = i;

    for (i = tam - 1; i >= 0; i--){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
