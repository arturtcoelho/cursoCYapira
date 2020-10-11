#include <stdio.h>

#define TAM 100

int main()
{
    int array[TAM];
    int n;
    int i = 0;

    scanf("%d", &n);
    while (n && i < TAM) {
        array[i] = n;
        scanf("%d", &n);
        i++;
    }

    for (i--; i >= 0; i--){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
