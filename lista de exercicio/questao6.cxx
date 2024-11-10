#include <stdio.h>
#include <stdlib.h>
int main()
{
  float salario, vendas, comicao;
    printf("Digite o valor do seu salario:");
    scanf("%f", &salario);
     printf("Digite digite o valor da suas vendas:");
    scanf("%f", &vendas);

    comicao = vendas*0.04;   
    printf("sua comicao foi de R$%.2f  e seu salario final eh R$%.2f ", comicao, salario+comicao);
    
    return 0;
    
}