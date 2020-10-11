#include <stdio.h>

int main()
{
    int a = 42;
    int b = 64;
    int c = 22;

    a == b;
    a != b;

    a > b;
    a < b;

    a + c >= b;
    !(a + c >= b);

    (a > b) || (a > c);
    (a > b) && (a > c);
    
    !(c+b*a < 20*a) && (a*a * 2*b > 100*c);

    return 0;
}
