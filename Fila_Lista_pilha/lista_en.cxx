#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;

}No;
typedef struct lista
{
    No *inicio;

}Lista;

void inicializa_lista(Lista *l){
    l->inicio = NULL;
}

void inserir_inicio(Lista *lista, int num){
    No *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->valor = num;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    }
    else
    {
        printf("Erro ao alocar mamoria...\n");
    }
    
}
void inserir_fim(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->valor = num;
        novo->proximo = NULL;

        // caso for o primeiro
        if (lista->inicio == NULL)
        {
            lista->inicio = novo;
        }
        else
        {
            aux = lista->inicio;
            while (aux->proximo)
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;  
        }
        
    }
    else
    {
        printf("Erro ao alocar mamoria...\n");
    }
    
}

void inserir_meio(Lista *lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->valor = num;
        if (lista->inicio == NULL)      //lista vazia
        {
            novo->proximo;
            lista->inicio = novo;
        }
        else
        {
            aux = lista->inicio;
            while (aux->valor != ant && aux->proximo != NULL)
            {
                aux= aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
            
        }
    }
    else
    {
        printf("Erro ao alocar mamoria...\n");
    }
    
}

void lista_ligada_print(const Lista *lista){
    No *no = lista->inicio;
    printf("L -> ");
    for (int i = 0; no!= NULL; i++)
    {
        printf("%d -> ",no->valor);
        no = no->proximo;
    }
    printf("NULL\n");
    
}

void remover_meio(Lista *lista, int val_delet) {
    No *atual = lista->inicio;
    No *anterior = NULL;

    // Verifica se a lista está vazia
    if (atual == NULL) {
        printf("Erro: lista vazia.\n");
        return;
    }

    // Percorre a lista até encontrar o nó com o valor a ser removido
    while (atual != NULL && atual->valor != val_delet) {
        anterior = atual;            // Guarda o nó anterior
        atual = atual->proximo;      // Avança para o próximo nó
    }

    // Verifica se o valor foi encontrado
    if (atual == NULL) {
        printf("Valor %d não encontrado na lista.\n", val_delet);
        return;
    }

    // Se o nó a ser removido for o primeiro (topo) da lista
    if (anterior == NULL) {
        lista->inicio = atual->proximo;    // Atualiza o topo da lista
    } else {
        // Caso contrário, ajusta o ponteiro do nó anterior para "pular" o nó atual
        anterior->proximo = atual->proximo;
    }

    // Libera a memória do nó removido
    free(atual);
    printf("No com valor %d removido.\n", val_delet);
}

void remover_repetidos(Lista *lista){
    No *atual = lista->inicio;
    No *anterior = NULL;

    while (atual != NULL) {
        No *teste = lista->inicio;
        int repetido = 0;

        // Verifica se o valor de 'atual' já apareceu antes, percorrendo até o nó atual
        while (teste != atual) {
            if (teste->valor == atual->valor) {
                repetido = 1;
                break;
            }
            teste = teste->proximo;
        }

        if (repetido == 1) {
            // Se o valor for repetido, remover o nó atual
            if (anterior != NULL) {
                anterior->proximo = atual->proximo;
            } else {
                lista->inicio = atual->proximo;  // Se o repetido for o primeiro nó
            }
            No *temp = atual;
            atual = atual->proximo;
            free(temp);  // Libera a memória do nó removido
        } else {
            anterior = atual;  // Só atualiza o anterior se o nó não for removido
            atual = atual->proximo;
        }
    }

}

int main()
{
    int opcao,valor,ant,delet;
    Lista lista  ;
    inicializa_lista(&lista);
    do
    {
        printf("\n\t0 - sair\n\t1 - inserirI\n\t2 - inserirF\n\t3 - inserirM\n\t4 - imprimir\n\t5 - remover\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d",&valor);
            inserir_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d",&valor);
            inserir_fim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d",&valor,&ant);
            inserir_meio(&lista, valor, ant);
            break;
        case 4:
            lista_ligada_print(&lista);
            break;
        case 5: 
            printf("Digite um valor: ");
            scanf("%d",&delet);
            remover_meio(&lista,delet);
            break;

        case 6: 
            printf("Deletando valores repetidos..... \n");
            remover_repetidos(&lista);
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
