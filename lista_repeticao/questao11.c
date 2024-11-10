#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, vparcela, porcentagem = 0.03;
    int qp=6;

    printf("Digite o valor do carro: ");
    scanf("%f", &valor);

    printf("\n----------Valor avista----------\n\n");
    printf("\tR$%.2f", valor-(valor*0.20));
    
    printf("\n----------Valores a prazo----------\n");
    printf("quant_parcelas \tacrescimo \tvalor final:\n ");
    for (int i = 1; i <=10; i++)
    {
        
       vparcela = valor + (valor* porcentagem);
       printf("\t%d", qp);
       printf("\tR$ %.2f", valor*porcentagem);
       printf("\tR$ %.2f\n", vparcela); 
       
       qp= qp+6;
       porcentagem= 0.03+porcentagem;
    }
    
    
    return 0;
}
