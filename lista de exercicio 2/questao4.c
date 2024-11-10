#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);




    if (n1<n2)
    {
        printf("O %.2f eh o maior",n2);
    }
    else
    {
         printf("O %.2f eh o maior",n1);
    }
     

    
    return 0;
}
