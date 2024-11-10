#include "lista_encadeada.h"

int main(){
    Lista_ligada *l1= criar_lista();
    Lista_ligada *l2= criar_lista();

    
    lista_ligada_add_first(l2, 59);
    lista_ligada_add_first(l2, 6);
    lista_ligada_add_first(l2, 4);
    lista_ligada_add_first(l2, 10);

    lista_ligada_print(l2);  

    lista_ligada_add_first(l1, 5);
    lista_ligada_add_first(l1, 4);
    lista_ligada_add_first(l1, 6);
    lista_ligada_add_first(l1, 1);
    
    lista_ligada_print(l1);

    Lista_ligada *R= intersecao(l1,l2);
    
    lista_ligada_print(R);


    

    return 0;
}