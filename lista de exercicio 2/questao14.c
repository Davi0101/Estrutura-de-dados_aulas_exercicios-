#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o valor do seu salario atual: ");
    scanf("%f",&salario);



    if (salario>1000.00)
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.05, salario + (salario*0.05));
    }
    else if (salario>800.00)
    {
      printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.10, salario + (salario*0.10));
    }
    else if (salario>700.00)
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.20, salario + (salario*0.20));
    }
    else if (salario>500.00)
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.30, salario + (salario*0.30));
    }
    else if (salario>300.00)
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.40, salario + (salario*0.40));
    }
    
    else
    {
        printf(" voce tera R$ %.2f de almento seu salario sera %.2f",salario*0.50, salario + (salario*0.50));
    }
     
    return 0;
}