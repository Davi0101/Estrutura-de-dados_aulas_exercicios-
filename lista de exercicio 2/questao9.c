#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o valor do seu saldo medio no ultimo ano: ");
    scanf("%f",&salario);



    if (salario>400.00)
    {
        printf("o seu saldo medio foi acima de R$ 400.00 e voce tera direito a um credito de R$ %.2f",salario*0.30);
    }
    else if (salario>300.00)
    {
       printf("o seu saldo medio ficou entre  R$ 400.00 e R$ 300.00 voce tera direito a um credito de R$ %.2f",salario*0.25);
    }
    else if (salario>200.00)
    {
       printf("o seu saldo medio ficou entre  R$ 300.00 e R$ 200.00 voce tera direito a um credito de R$ %.2f",salario*0.20);
    }
    
    else
    {
        printf("o seu saldo medio ficou entre  R$ 200.00 e  R$ 0 voce tera direito a um credito de R$ %.2f",salario*0.10);
    }
     
    return 0;
}