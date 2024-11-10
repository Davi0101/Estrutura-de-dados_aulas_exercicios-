#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n1,n2, media;
  int operacao;
    printf("Digite o primeiro numero:  ");
    scanf("%f", &n1);
    printf("Digite o segundo numero :  ");
    scanf("%f", &n2);
    
    printf("qual operacao voce deseja realizar?\n Digite:\n 1- para mostrar a media\n 2- para mostrar a diferenca do maior pelo menor\n 3- para mostrar a multiplicacao dos dois numero\n 4- para mostrar a divisao dos dois numeros\n");
    scanf("%d", &operacao);
    
    if (operacao == 1)
    {
        media= (n1+n2)/2;
        printf("a media aritmetica dos dois numeros eh: %.2f", media);
        }
       
    else if (operacao ==2)
    {
        if ( n1>n2){
            printf(" %.2f - %.2f = %.2f", n1,n2, n1-n2);
            }
            else{
                printf(" %.2f - %.2f = %.2f", n2,n1, n2-n1);
            }
           
        }
         else if(operacao==3){
             printf("%.2f x %.2f = %.2f", n1, n2, n1*n2);
             }
             
          else if(operacao==4){
              if (n2!= 0){
                  printf("%.2f dividido por %.2f = %.2f", n1, n2, n1/n2);
              }
              else{
                  printf("Nao eh possivel realizar a divisao, digite um numero diferente de 0");
                  }
              }
              
              else{
                  printf("opcao invalida, tente novamente");
                  }
    
    
    return 0;
    
}