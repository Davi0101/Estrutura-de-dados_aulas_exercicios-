#include <stdio.h>
#include <stdlib.h>

typedef struct _no
{
    int val;
    struct _no *proximo;
}No;

typedef struct _fila
{
    No *primeiro;
    No *fim;
    int tam;
}Fila;

void inicializa(Fila *fi){
    fi->fim = NULL;
    fi->primeiro = NULL;
    fi->tam = 0;
}

void inserir_fila(Fila *fi, int val){
    No *novo = (No*) malloc (sizeof(No));
    if (novo != NULL)
    {
        novo->val = val;
        novo->proximo = NULL;
        if (fi->primeiro == NULL)
        {
            fi->primeiro = novo;
            fi->fim = novo;
            fi->tam ++;
        }
        else
        {
            fi->fim->proximo = novo ;
            fi->fim = novo;
            fi->tam++;
        }
        
        
    }
    else
    {
        printf("Erro ao inserir....\n");
    }
    
    
}

void remove_fila(Fila *fi){
    No *remover = NULL;
    if (fi->primeiro == NULL)
    {
        printf("Lista vazia....\n");
    }
    {
        remover = fi->primeiro;
        fi->primeiro = fi->primeiro->proximo;
        printf("Removido:  %d\n", remover->val);
        free(remover);

        
    }
    
}

void imprimir(Fila *fi){
    No *aux = fi->primeiro;
    if (fi->primeiro == NULL)
    {
        printf("Lista vazia....\n");
    }
    else
    {
        while (aux != NULL)
        {
            printf("%d -> ",aux->val);
            aux = aux->proximo;
        }
        
    }
    
}
int main()
{
    
    Fila fila ;
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
            remove_fila(&fila);
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

