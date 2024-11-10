#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o valor do seu salario atual: ");
    scanf("%f",&salario);



    if (salario>900.00)
    {
        printf(" voce tera 0 por cento de almento seu salario sera %.2f",salario);
    }
    else if (salario>600.00)
    {
      printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.05, salario + (salario*0.05));
    }
    else if (salario>300.00)
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.10, salario + (salario*0.10));
    }
    
    else
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.15, salario + (salario*0.15));
    }
     
    return 0;
}