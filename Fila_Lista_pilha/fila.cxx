#include <stdio.h>
#include <stdlib.h>

typedef struct no_
{
    int valor;
    struct no_ *proximo;
    
}No;

typedef struct fila_
{
    No *prim;
    No *fim;
    int tam;
}Fila;

void inicializa(Fila *fila){
    fila->prim = NULL;
    fila->fim = NULL;
    fila->tam = 0;
}

void inserir_fila(Fila *fila, int val){
    No *novo = (No*)malloc(sizeof(No));
    
    if (novo!=NULL)
    {
        novo->valor = val;
        novo->proximo = NULL;

        if (fila->prim == NULL)
        {
            fila->prim = novo;
            fila->fim = novo;
            fila->tam ++;   
        }
        else
        {
            fila->fim->proximo = novo;
            fila->fim = novo;
            fila->tam ++;
        } 
    }
    else
    {
        printf("Erro ao alocar mamoria...\n");
    }
       
}

No* remover_fila(Fila *f){
    No *remover = NULL;
    if (f->prim != NULL)
    {
        remover = f->prim;
        f->prim = remover->proximo;
        f->tam --;

    }
    else
    {
        printf("Fila vazia...\n");
    }
    return remover;    
    
}

void imprimir (Fila *F){
    printf("\t---------- Fila ----------\n\t");
    
    No *aux = NULL;
    aux = F->prim;
    printf("L -> ");
    while (aux!= NULL)
    {
        printf("%d -> ",aux->valor);
        aux = aux->proximo;
    
    }
    printf("NULL\n");
    

    printf("\n\t---------- FIM ----------\n\t");
}


int main()
{
    
    Fila fila ;
    No *r ;
    int opcao, valor;
    inicializa(&fila);
    do
    {
        printf("\n\t0 - sair\n\t1 - inserirI\n\t2 - imprimir\n\t3 - remover\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d",&valor);
            inserir_fila(&fila, valor);
            break;
        case 2:
            imprimir(&fila);
            break;
        case 3:
             r = remover_fila(&fila);
             if (r != NULL)
             {
                printf("Removido: %d\n",r->valor);
                free(r);
             }
             
            break;
        default:
            if (opcao != 0 )
            {
                printf("Opcao invalid!!\n");
            }
            else if (opcao == 0)
            {
                printf("Saindo......!!\n");
            }
            
            break;
        }

    } while (opcao != 0);
    
    
    return 0;
}
