// Caso não esteja definido ainda
#ifndef Tad_ponto_h
// Defina
#define Tad_ponto_h

typedef struct ponto{
    float x;
    float y;
} Ponto;

Ponto* criar_ponto(float x, float y);
void libera_ponto(Ponto* p);
void acessa_ponto(Ponto* p, float* x, float* y);
void atribui_ponto(Ponto* p, float x, float y);
float distancia(Ponto* p1, Ponto* p2);


#include "tad_ponto.c"

// Fim da definição
#endif