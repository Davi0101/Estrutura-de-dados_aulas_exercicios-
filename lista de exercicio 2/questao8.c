#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f",&salario);



    if (salario<=300.00)
    {
        printf("o seu reajuste foi de R$ %.2f e o seu novo salario eh R$ %.2f",salario*0.35, salario+(salario*0.35));
    }
    else
    {
        printf("o seu reajuste foi de R$ %.2f e o seu novo salario eh R$ %.2f",salario*0.15, salario+(salario*0.15));
    }
     
    return 0;
}