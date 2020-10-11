#include <stdio.h>

int main()
{
    int a = 42;
    int b = 86;
    int c;
    int d;

    c = a + b;
    d = a - b;
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    printf("b mod a: %d\n", b % a);
    printf("a++: %d, ++b: %d\n", a++, ++b);
    
    return 0;
}
