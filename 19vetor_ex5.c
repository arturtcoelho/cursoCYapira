#include <stdio.h>

#define TAM 100

int ler_vetor(int v[]){

    int n;    
    int i = 0;

    scanf("%d", &n);
    while (n && i < TAM) {
        v[i] = n;
        scanf("%d", &n);
        i++;
    }

    return i;
}

void inverter_vetor(int *v, int tam){
    for (int i = 0; i < tam / 2; i++){
        // troca o primeiro com o último
        int temp = v[i];
        v[i] = v[tam - i - 1];
        v[tam - i - 1] = temp;
    }
    return;
}

void imprimir_vetor(int *v, int tam){
    for (int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int array[TAM];
    int tamanho;

    tamanho = ler_vetor(array);
    inverter_vetor(array, tamanho);
    imprimir_vetor(array, tamanho);

    return 0;
}
