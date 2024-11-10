#include "tad_ponto.h"
#include <stdlib.h>
#include <math.h>

Ponto* criar_ponto(float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    p->x=x;
    p->y=y;

    return p;
}

void libera_ponto(Ponto* p){
    free(p);
}
void acessa_ponto(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}
void atribui_ponto(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}
float distancia(Ponto* p1, Ponto* p2){
    return sqrt(pow(p1->x - p2->x,2) + pow(p1->y - p2->y,2));
}