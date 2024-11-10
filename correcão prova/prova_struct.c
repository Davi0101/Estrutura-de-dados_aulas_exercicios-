#include <stdio.h>
#include <stdlib.h>

#define max 5

typedef struct produto
{
    int id_produto;
    char nome[21];
    char descricao[51];
    float valor;
}Produto;

void criar_lista(Produto** lista,int n);
void inserir(Produto** lista, int n);
void busca(Produto** lista, int id, int n);
void delet(Produto** lista);
void delet_id(Produto** lista, int id,int n);
void libera(Produto** lista,int n);




int main()
{

    Produto* lista[max];
    criar_lista(lista,max);
    printf("quantos Produtos voce deseja inserir? ");
    int x= 0;
    scanf("%d",&x);
    for (int i = 0; i < x; i++){
        inserir(lista, max);
    }
    
    
    busca(lista, 12, max);
    

    
    
    return 0;
}

void criar_lista(Produto** lista,int n){
    for (int i = 0; i <n ; i++)
    {
        lista[i]= NULL;
    }
    
}

void inserir(Produto** lista, int n){
    int i =0;
    for (i = 0; i < n && lista[i] != NULL; i++);

    if (i ==n)
    {
        printf("Sem espaco na lista...");
        return;
    }
        lista[i]= (Produto*)malloc(sizeof(Produto));
         printf("\nDigite as informaces do produto que vai ser inserido: \n\t----------Produto %d:----------\n",i+1);
         
         printf("Digite o id do produto: ");
         scanf("%d", &lista[i]->id_produto);
         printf("Digite o nome do produto: ");
         scanf(" %20[^\n]%*c", &lista[i]->nome);
         printf("Digite a descricao do produto: ");
         scanf(" %50[^\n]%*c", &lista[i]->descricao);
         printf("Digite o valor do produto: ");
         scanf("%f", &lista[i]->valor);
    
    

}
void busca(Produto** lista, int id, int n){
    int i = 0;
    for (i = 0; i < n && lista[i]->id_produto!= id; i++);
    
    if (i ==n)
    {
        printf("Produto nao encontrado!!");

    }
    printf("\n----------O produto buscado foi:----------\n");
    printf("id: %d\n", lista[i]->id_produto);
    printf("nome: %s\n", lista[i]->nome);
    printf("Descricao: %s\n", lista[i]->descricao);
    printf("valor: %.2fR$\n", lista[i]->valor);
    
}
void delet(Produto** lista){

}
void delet_id(Produto** lista, int id,int n){
    int i = 0;
    for (i = 0; i < n && lista[i]->id_produto!= id; i++);
    
    if (i ==n)
    {
        printf("id nao encontrado!!");

    }
    free(lista[i]);

}

void libera(Produto** lista,int n){
    for (int i = 0; i < n; i++)
    {
        free(lista[i]);
    }
free(lista);
    
}