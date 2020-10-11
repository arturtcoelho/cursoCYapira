#include <stdio.h>

int main()
{
    int n;
    int soma = 0;

    scanf("%d", &n);
    while(n) {
        soma = soma + n;
        scanf("%d", &n);
    }

    printf("%d\n", soma);

    return 0;
}
