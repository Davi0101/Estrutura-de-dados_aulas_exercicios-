
#include "../TAD_ponto/TAD_ponto.h"

// Caso não tenha sido definido ainda
#ifndef TAD_circulo_h
// Define
#define TAD_circulo_h

    typedef struct circulo{
        Ponto c;
        float r;    
    } Circulo;

    Circulo* circulo_cria(float x, float y, float r);
    void circulo_exclui(Circulo* c);
    float circulo_area(Circulo* c);
    int circulo_interior(Circulo* c, Ponto* p);

#include "TAD_circulo.c"

// Fim de definição
#endif