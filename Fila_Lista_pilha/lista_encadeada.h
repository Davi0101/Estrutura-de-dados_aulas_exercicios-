
#ifndef lista_encadeada_h
#define lista_encadeada_h

typedef struct _no No ;
typedef struct lista_encadeada Lista_ligada;

No *criar_no(int val);
Lista_ligada *criar_lista(void);
void lista_ligada_add_first(Lista_ligada *l, int val);
void lista_ligada_print(const Lista_ligada *l);
void lista_ligada_add_last(Lista_ligada *l, int val);
Lista_ligada * intersecao(Lista_ligada *l1, Lista_ligada *l2);

//pilhas

typedef struct pilha Pilha;
Pilha* inicializar();
Pilha* empilhar(Pilha *p, int val);


#include "lista_encadeada.c"
#endif