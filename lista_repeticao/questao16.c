#include <stdlib.h>
#include <stdio.h>
int main(){
 int id, m=0, op;
 do{
 printf("Digite sua idade: ");
 scanf("%d", &id);
 if(m!=0){
 m= (m+id)/2;
 } else{
 m=id;
 }
 printf("\n********************\n");
 printf("A media das idades eh: %d", m);
 printf("\n*********************\n");
 printf("Deseja digitar mais imagens?\t1 - Sim\t2 - Nao\n");
 scanf("\t%d", &op);
 } while (op==1);
 return 0;
}