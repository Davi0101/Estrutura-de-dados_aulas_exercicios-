#include <stdio.h>
#include <stdlib.h>

typedef struct _no
{
    int val;
    struct _no *proximo;
    
}No;

typedef struct _lista
{
    No *primeiro;
    No *fim;
}Lista;

Lista *inicializa(void){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    l->primeiro = NULL;
    l->fim = NULL;

    return l; 
}

void inserir_fim(Lista *l, int val){
    No *novo = (No*)malloc(sizeof(No));
    novo->val = val;
    novo->proximo = NULL;

    if (l->primeiro == NULL)
        {
            l->primeiro = novo;
            l->fim = novo;
        }
    else
    {
        l->fim->proximo = novo;
        l->fim = novo;
    }
    
}

void imprimir(const Lista *l){
    No *aux = NULL;
    aux = l->primeiro;
    if (aux == NULL)
    {
        printf("Lista vazia\n");
        
    }
    
    while (aux!= NULL)
    {
        printf(" %d -> ",aux->val);
        aux = aux->proximo;
    }
    
}

Lista *remover_repetidos(Lista *l){
    Lista *rep = inicializa();
    No *p1 = l->primeiro;

    for (p1 = l->primeiro; p1 != NULL; p1 = p1->proximo)
    {
        No *p2 = l->primeiro;
        int repetidos = 0;
        for (p2 = l->primeiro;p2 != p1; p2 = p2->proximo)
        {
            if (p2->val == p1->val)
            {
                repetidos = 1;
            }
            
        }

        if (repetidos == 0)
        {
            inserir_fim(rep, p1->val);
        }
    }
    
    return rep;
    
}
void liberar_lista(Lista *l)
{
    No *p = l->primeiro;
    while (p != NULL)
    {
        No *temp = p;
        p = p->proximo;
        free(temp);
    }
    free(l);
}

int main()
{
    Lista *l1= inicializa();
    Lista *repetidos ;
    inserir_fim(l1, 12);
    inserir_fim(l1, 13);
    inserir_fim(l1, 14);
    inserir_fim(l1, 15);
    inserir_fim(l1, 12);
    inserir_fim(l1, 15);
    inserir_fim(l1, 15);
    inserir_fim(l1, 145);
    inserir_fim(l1, 15);

    imprimir(l1);
    printf("\n");
    repetidos = remover_repetidos(l1);
    printf("\n");
    imprimir(repetidos);
    printf("\n");
    
    liberar_lista(l1);
    return 0;
}
