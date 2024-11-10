#include <stdio.h>
#include "tad_ponto.h"

int main(int argc, char const *argv[])
{
    Ponto* p = criar_ponto(2.0,1.0);
    Ponto* q = criar_ponto(3.4,2.1);
    float d = distancia(p,q);
    printf("%f , %f", p->x, p->y);
    printf("Distancia entre pontos: %f\n", d);

    

    return 0;
}

