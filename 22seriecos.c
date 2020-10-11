#include <stdio.h>
#include <math.h>

#define PI 3.141592
#define LIMIT 10

double fat(double n){
    if (n <= 1)
        return 1;

    return fat(n-1) * n;
}

int main()
{

    double x;
    scanf("%lf", &x);
    double rad = x*PI;
    printf("rad: %f\n", rad);
    printf("sen(rad) %f\n", cos(rad));
    double sen = 0;
    double nom;
    double den;
    double mult;

    for (int n = 0; n < LIMIT; n++){
        nom = pow(-1, n);
        den = fat(2*n);
        mult = pow(rad, 2*n);
        sen += (nom / den) * mult;
    }
    printf("%f\n", sen);

    return 0;
}
