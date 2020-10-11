#include <stdio.h>

#define TAM 3

void ler_matriz(int m[TAM][TAM]){
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%d", &m[i][j]);   
        }
    }
}

void imprime_matriz(int m[TAM][TAM]){
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", m[i][j]);   
        }
        printf("\n");
    }
}

int main() {
    // TAM == 3
    int matriz[TAM][TAM] = {{0, 1, 2}, 
                            {3, 4, 5}, 
                            {6, 7, 8}};

    matriz[0][0] = 11;
    imprime_matriz(matriz);

    // ler_matriz(matriz);
    // imprime_matriz(matriz);

    return 0;
}