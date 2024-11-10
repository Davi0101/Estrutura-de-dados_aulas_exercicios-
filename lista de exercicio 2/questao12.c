#include <stdio.h>
#include <stdlib.h>

 int main()
{
     float salario,salario_i;

    printf("Digite o valor do seu salario atual: ");
    scanf("%f",&salario);

     salario_i= salario-(salario*0.07);

    if (salario>900.00)
    {
        printf(" seu novo salairo com o desconto de R$ %.2f sobre o seu salario atual, mais a gratificacao de R$ 35 sera: R$ %.2f ",salario*0.07, salario_i+35.00);
    }
    else if (salario>600.00)
    {
        printf(" seu novo salairo com o desconto de R$ %.2f sobre o seu salario atual, mais a gratificacao de R$ 50 sera: R$ %.2f ",salario*0.07, salario_i+50.00);
    }
    else if (salario>350.00)
    {
    printf(" seu novo salairo com o desconto de R$ %.2f sobre o seu salario atual, mais a gratificacao de R$ 75 sera: R$ %.2f ",salario*0.07, salario_i+75.00);
    }

    else
    {
        printf(" seu novo salairo com o desconto de R$ %.2f sobre o seu salario atual, mais a gratificacao de R$ 100 sera: R$ %.2f ",salario*0.07, salario_i+100.00);
     }
    return 0;
}