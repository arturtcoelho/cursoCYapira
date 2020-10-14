#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void ler(int *v, int tam){
    for (int i = 0; i < tam; i++) {
        scanf("%d", &(v[i]));
    }
}

void operar (int *v, int tam) {
    int menor, temp;
    for (int i = 0; i < tam; i++) {
        menor = i;
        for (int j = i; j < tam; j++) {
            if (v[i] > v[menor]){ // troca
                temp = v[i];
                v[i] = v[menor];
                v[menor] = temp;
            }
        }
    }
}

void imprimir(int *v, int tam){
    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){

    int *v;
    int tam;
    scanf("%d", &tam);
    v = malloc(tam * sizeof(int));

    ler(v, tam);
    operar(v, tam);
    imprimir(v, tam);

    free(v);
    return 0;
}
