#include <stdio.h>
#include <stdlib.h>
int main()
{
  float salariom, salario;
    printf("Digite o valor do salario minimo:");
    scanf("%f", &salariom);
     printf("Digite o vakor do seu salario:");
    scanf("%f", &salario);
    
    printf("o seu salario eh equivalente a %.2f salarios minimos", salario/salariom);
     
     
    return 0;
    
}