#include <stdio.h>

struct ponto{
    float x;
    float y;
};

void imprime_ponto(struct ponto p){
    printf("x: %f, y: %f\n", p.x, p.y);
    return;
}

void soma_ponto(struct ponto a, struct ponto b, struct ponto *c){
    c->x = a.x + b.x;
    c->y = a.y + b.y;
    return;
}

int main() {

    struct ponto p;
    struct ponto q = {3.1, 4.2};
    p.x = 1;
    p.y = 2;

    imprime_ponto(p);
    soma_ponto(p, q, &p); // cuidado com a modificação de dados
    imprime_ponto(p);

    return 0;
}

