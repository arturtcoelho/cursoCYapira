#include <stdio.h>

int main()
{
    int irmao1 = 11;
    int irmao2 = 33;
    int irmao3 = 22;

    if (irmao1 > irmao2) {
        if (irmao1 > irmao3) {
            printf("O irmão 1 é o mais velho\n");
        } else {
            printf("O irmão 3 é o mais velho\n");
        }
    } else {
        if (irmao2 > irmao3) {
            printf("O irmão 2 é o mais velho\n");
        } else {
            printf("O irmão 3 é o mais velho\n");
        }
    }

    printf("O irmão %d é o mais velho\n", irmao1 > irmao2 ? irmao1 > irmao3 ? 1 : 3 : irmao2 > irmao3 ? 2 : 3);

    return 0;
}
