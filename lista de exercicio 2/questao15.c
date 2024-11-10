#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  valor;
    int tipo;
    printf("Qual o tipo de investimento que voce deseja reaçizar?\nDigite:\n1- para poupanca.\n2- para fundos de renda fixa.\n");
    scanf("%d",&tipo);
    printf("Agora digite o valor do investimento: ");
    scanf("%f", &valor);


    if (tipo == 1)
    {
        printf("Neste tipo de investimento seu dinheiro ira render 3 por cento ao mes, o valor do primeiro mes sera:  %.2f",valor+(valor*0.03));
    }
    else if (tipo == 2)
    {
      printf("Neste tipo de investimento seu dinheiro ira render 4 por cento ao mes, o valor do primeiro mes sera:  %.2f",valor+(valor*0.04));
    }
    
    else
    {
        printf("tipo de investimento invalido, tente novamente. ");
    }
     
    return 0;
}