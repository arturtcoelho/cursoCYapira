#include <stdio.h>
#include <stdlib.h>

#define TAM 2

struct matriz{
    int tam;
    int **matriz;
};

typedef struct matriz matriz_t;

void inicializa_matriz(matriz_t *m){
    m->tam = TAM;

    // aloca o vetor de ponteiros
    m->matriz = malloc(TAM * sizeof(int*));
    if (!m->matriz){ // testa se a alocação foi bem sucedida
        printf("Erro de alocação\n");
        exit(1);
    }

    // aloca cada linha da matriz
    for (int i = 0; i < m->tam; i++) { 
        m->matriz[i] = malloc(TAM * sizeof(int));
        if (!m->matriz[i]){ // testa
            printf("Erro de alocação\n");
            exit(1);
        }
    }

    // le o input do usuário
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

void libera_matriz(matriz_t *m) {
    for (int i = 0; i < m->tam; i++) {
        free(m->matriz[i]);
    }
    free(m->matriz);
}

int main() {

    matriz_t *matriz;
    matriz = malloc(sizeof(matriz_t));

    inicializa_matriz(matriz);
    // operações com uma ou mais matrizes
    imprime_matriz(matriz);

    libera_matriz(matriz);

    return 0;
}
