#include <stdio.h>

int main() {

    int numer_inteiro = 10;                     
    float numero_fracionario = 3.14;            
    char caractere = 'A';                       
    long inteiro_longo = 9223372036854775807;   
    unsigned int inteiro_sem_sinal = 65000;     
    void* ponteiro = NULL;                      

    printf("int: %d\n", numer_inteiro);
    printf("float: %f\n", numero_fracionario);
    printf("char: %c\n", caractere);
    printf("long: %ld\n", inteiro_longo);
    printf("unsigned int: %d\n", inteiro_sem_sinal);
    printf("pointer: %p\n", ponteiro);

    return 0;
}