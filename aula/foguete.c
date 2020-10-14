#include <stdio.h>

int main () {
    int mass;
    scanf("%d", &mass);
    int fuel = 0;

    while (mass >= 0){
        mass = mass / 3 - 2;
        if (mass >= 0){
            fuel = fuel + mass;
        }
    } 

    printf("combustivel: %d\n", fuel);

}
