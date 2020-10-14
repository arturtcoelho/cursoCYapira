#include <stdio.h>

#define TAM 4

struct matriz{
    int tam;
    int matriz[TAM][TAM];
};

typedef struct matriz matriz_t;

void inicializa_matriz(matriz_t *m){
    m->tam = TAM;
    for (int i = 0; i < m->tam; i++) {
        for (int j = 0; j < m->tam; j++) {
            scanf("%d", &(m->matriz[i][j]));
        }
    }
    return;
}

void imprime_matriz(matriz_t *m){
    for (int i = 0; i < m->tam; i++) {
        for (int j = 0; j < m->tam; j++) {
            printf("%d ", m->matriz[i][j]);
        }
        printf("\n");
    }
    return;
}

int main() {

    matriz_t matriz;

    inicializa_matriz(&matriz);
    // operações com uma ou mais matrizes
    imprime_matriz(&matriz);

    return 0;
}
