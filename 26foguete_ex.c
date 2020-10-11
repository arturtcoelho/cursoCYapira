#include <stdio.h>

int main() {

    int fuel;
    int mass;

    scanf("%d", &mass);
    while(mass >= 0){
        mass = mass / 3 - 2;
        if (mass > 0){
            fuel += mass;
            printf("mass: %d\n", mass);
        }
    }

    printf("combustível necessário: %d\n", fuel);

    return 0;
}