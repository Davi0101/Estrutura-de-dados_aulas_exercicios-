#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco_produto, novo_preco;

    printf("Digite o valor do produto: ");
    scanf("%f",&preco_produto);

    

    if (preco_produto>100.00)
    {
        novo_preco = preco_produto+(preco_produto*0.15);
        printf("O produto tera R$ %.2f de aumento, seu novo valor sera: R$ %.2f ",preco_produto*0.15,novo_preco);
    }
    else if (preco_produto>50.00)
    {
        novo_preco = preco_produto+(preco_produto*0.10);
        printf("O produto tera R$ %.2f de aumento, seu novo valor sera: R$ %.2f ",preco_produto*0.10, novo_preco);
    }
    else
    {
        novo_preco =  preco_produto+(preco_produto*0.05);
        printf("O produto tera R$ %.2f de aumento, seu novo valor sera: R$ %.2f ",preco_produto*0.05,novo_preco );
    }
    printf("\nclassificacao: ");
    if (novo_preco>200.00)
    {
        printf("Muito caro!");
    }
    else if (novo_preco>120.00)
    {
        printf("caro!");
    }
    else if (novo_preco>80.00)
    {
        printf("normal!");
    }
    else
    {
        printf("Barato!");
    }
    return 0;
}