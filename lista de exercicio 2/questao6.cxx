#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  float n1,n2;
  int operacao;
    printf("Digite o primeiro numero:  ");
    scanf("%f", &n1);
    printf("Digite o segundo numero :  ");
    scanf("%f", &n2);
    
    printf("qual operacao voce deseja realizar?\n Digite:\n 1- para mostrar o primeiro numero elevado pelo segundo\n 2- para mostrar a raiz quadrada dos dois numeros\n 3- para mostrar a raiz cubica dos dois numeros\n" );
    scanf("%d", &operacao);
    
    if (operacao == 1)
    {
        
        printf("%.2f ^ %.2f = %.2f",n1, n2, pow(n1,n2));
        }
       
      else if (operacao ==2)
      {
        printf("a raiz quadrada do primeiro numero eh %.2f e a raiz quadrada do segundo numero eh %.2f",sqrt(n1),sqrt(n2));   
        }
      else if(operacao==3){
        printf("a raiz cubica do primeiro numero eh %.2f e a raiz cubica do segundo numero eh %.2f",pow(n1,1.0/3.0),pow(n2,1.0/3.0));
    
        }
    else{
      printf("opcao invalida, tente novamente");
    }
    
    return 0;
    
}