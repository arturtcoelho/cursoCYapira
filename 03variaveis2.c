#include <stdio.h>

int main() {

    int numer_inteiro = 10;                     // 4 bytes: [-2.147.483.648 a +2.147.483.647]
    float numero_fracionario = 3.14;            // 4 bytes: convenção IEEE 754
    double fracionario_preciso = 3.1415926535;  // 8 bytes
    char caractere = 'A';                       // 1 byte:  caracteres ASCII [-127 a 128]
    long inteiro_longo = 9223372036854775807;   // 8 bytes
    unsigned int inteiro_sem_sinal = 65000;     // 4 bytes: [0, 4,294,967,295]
    void* ponteiro = NULL;                      // 8 bytes: local na memória

    int a = 1;
    int b = a;
    int c;
    c = a;

    return 0;
}