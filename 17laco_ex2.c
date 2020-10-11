#include <stdio.h>

int main()
{
    long int a = 0;
    long int b = 1;
    long int c = 1;
    // com long é possivel gerar os primeiros 91 numeros

    for (int i = 0; i < 16; i++){ 
        printf("%ld\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
