#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f",&salario);



    if (salario<=500.00)
    {
        printf("o seu reajuste foi de R$ %.2f e o seu novo salario eh R$ %.2f",salario*0.3, salario+(salario*0.3));
    }
    else
    {
         printf("voce nao tem direito ao aumento");
    }
     

    
    return 0;
}
