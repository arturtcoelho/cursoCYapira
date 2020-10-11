#include <stdio.h>

// fatorial de n
int fat(int n){
    if (n <= 1)
        return 1;

    return fat(n-1) * n;
}

// função de combinação de (n, p)
int comb(int n, int p){
    return fat(n) / (fat(p) * fat(n - p));
}

int main()
{

    int n;
    scanf("%d", &n); // le o número de linhas

    for (int i = 0; i < n; i++){ // para cada linha
        for (int j = 0; j < i+1; j++){ // para cada coluna na linha 
            printf("%d ", comb(i, j)) ; // combinação da linha i com a coluna j
        }
        printf("\n");
    }

    return 0;
}
