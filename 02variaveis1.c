#include <stdio.h>

int main() {

    int numer_inteiro;                 // 4 bytes: [-2.147.483.648 a +2.147.483.647]
    float numero_fracionario;          // 4 bytes: convenção IEEE 754
    double fracionario_preciso;        // 8 bytes
    char caractere;                    // 1 byte:  caracteres ASCII [-127 a 128]
    long inteiro_longo;                // 8 bytes
    unsigned int inteiro_sem_sinal;    // 4 bytes: [0, 4,294,967,295]
    void* ponteiro;                    // 8 bytes: local na memória

    // em C não existe o tipo booleano
    // é utilizado 0 para falso e não 0 para verdadeiro

    return 0;
}