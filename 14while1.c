#include <stdio.h>

int main()
{
    int condicao_booleana = 0;

    while (condicao_booleana) {
        // código que muda a condição
    }

    int i = 0;
    while (i < 10) {
        printf("%d ", i); 
        i++;
        // i = i + 1;
    }
    printf("\n");

    while (i > 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    return 0;
}
