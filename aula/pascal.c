#include <stdio.h>

long long fatorial (int n) {
    if (n <= 1)
        return 1;

    return fatorial(n-1) * n;
}

long long combinatorio(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main () {

    int linhas;
    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%lld ", combinatorio(i, j));
        }
        printf("\n");
    }

    return 0;
}
