#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custof;

    printf("Digite o valor do custo defabrica do veiculo: ");
    scanf("%f",&custof);


    printf("custo de f       distribuidor       impostos\n");
    if (custof>25000.00)
    {
        printf("R$ %.2f   +   R$ %.2f +   R$ %.2f = R$ %.2f",custof,(custof*0.15),(custof*0.20),(custof*0.15)+custof+(custof*0.20));
    }
    else if (custof>12000.00)
    {
       printf("R$ %.2f   +   R$ %.2f  +   R$ %.2f = R$ %.2f",custof,(custof*0.10),(custof*0.15),(custof*0.10)+custof+(custof*0.15));
    }
    else
    {
       printf("R$ %.2f   +   R$ %.2f   +   R$ 0   = %.2f",custof,(custof*0.05), (custof*0.05)+custof);
    }
     
    return 0;
}