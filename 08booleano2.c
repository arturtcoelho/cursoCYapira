#include <stdio.h>

int main()
{
    int a = 42;
    int b = 64;
    int c = 22;

    printf("a: %d, b: %d, c: %d\n", a, b, c);
    printf("\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf(" a > b: %d\n", a > b);
    printf(" a < b: %d\n", a < b);
    printf("\n");
    printf("  a + c >= b : %d\n", a + c >= b);
    printf("!(a + c >= b): %d\n", !(a + c >= b));
    printf("\n");
    printf("(a > b) || (a > c): %d\n", (a > b) || (a > c));
    printf("(a > b) && (a > c): %d\n", (a > b) && (a > c));
    printf("\n");
    printf("!(c + b * a > 2a) && (a^2 * 2b > 100c): %d\n", !(c+b*a < 20*a) && (a*a * 2*b > 100*c));

    return 0;
}
