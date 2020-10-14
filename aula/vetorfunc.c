#include <stdio.h>

int ler_vetor(int v[]){
    int n;
    int i = 0;
    scanf("%d", &n);
    while (n != 0 && i < 100) {
        v[i] = n;
        scanf("%d", &n);
        i++;
    }

    return i;
}

void imprime_inverso(int v[], int tam) {
    for (int i = tam; i >= 0; i--){
        printf("%d ", v[i]);
    }
    printf("\n");
    return;
}

int main () {

    int v[100];
    int tam;
    tam = ler_vetor(v);
    imprime_inverso(v, tam);

    return 0;
}
