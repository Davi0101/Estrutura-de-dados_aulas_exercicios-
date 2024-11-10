#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"


typedef struct _no
{
    int val;
    struct _no *proximo;
}No;

typedef struct lista_encadeada
{
    No *primitivo;
}Lista_ligada;

No *criar_no(int val){
    No *no = (No*)malloc(1*sizeof(No));
    no->val= val;
    no->proximo = NULL;
    return no;
}

Lista_ligada *criar_lista(void){
    Lista_ligada *l= (Lista_ligada*)malloc(1*sizeof(Lista_ligada));
    l->primitivo= NULL;
    return l;
}

void lista_ligada_add_first(Lista_ligada *l, int val){
    No *p = criar_no(val);
    p->proximo = l->primitivo;
    l->primitivo = p;     
}

void lista_ligada_print(const Lista_ligada *l){
    No *p = l->primitivo;
    printf("L -> ");
    for (int i = 0; p!= NULL; i++)
    {
        printf("%d -> ",p->val);
        p = p->proximo;
    }
    printf("NULL\n");
    
}

void lista_ligada_add_last(Lista_ligada *l, int val){
    //se a lista wativer vazia
    if (l->primitivo == NULL)
    {
        No *p = criar_no(val);
        l->primitivo = p;    
    }
    
    else{
        No *q = criar_no(val);
        No *P = l->primitivo;

        //enquanto o p nao for o ultimo no
        while (P->proximo!= NULL)
        {
            P = P->proximo;
        }
        //p esta apontando para o ultimo no

        //faz com que o proximo elemento do ultimo no
        //aponte para o novo no que sera o ultimo
        P->proximo = q;
    }
         
}
Lista_ligada * intersecao(Lista_ligada *l1, Lista_ligada *l2){
    Lista_ligada *resul = criar_lista();
    No *p1 = l1->primitivo, *p2 = l2->primitivo;
    for (p1 = l1->primitivo; p1!=NULL ; p1 = p1->proximo)
    {
        for (p2=l2->primitivo; p2!=NULL; p2= p2->proximo)
        {
            if (p1->val == p2->val)
            {
                No * r= criar_no(p1->val);
                r->proximo = resul->primitivo;
                resul->primitivo = r;
            }
            
        }
        
    }
    
    return resul;
     

}

//pilhas
typedef struct pilha
{
    No *topo;
}Pilha;

Pilha* inicializar() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    if (pilha != NULL) {
        pilha->topo = NULL;
    }
    return pilha;
}

Pilha* empilhar(Pilha *p, int val){
    No *novo = (No*)malloc(sizeof(No));
    if (novo != NULL)
    {
        novo->val = val;
        novo->proximo = p->topo;
        return p;
    }
    else
    {
        printf("\nErro ao alocar memoria...\n");
    }
    
}

Pilha* desempilhar(Pilha *p) {
    if (p->topo == NULL) {
        printf("Erro: Pilha vazia.\n");
    } else {
        No *temp = p->topo;
        printf("Desempilhado: %d\n", temp->val);
        p->topo = p->topo->proximo;
        free(temp);
    }
    return p;
}

void verPilhaCompleta(Pilha *pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia.\n");
    } else {
        printf("Pilha completa:\n");
        No *atual = pilha->topo;
        while (atual != NULL) {
            printf("%d\n", atual->val);
            atual = atual->proximo;
        }
    }
}
