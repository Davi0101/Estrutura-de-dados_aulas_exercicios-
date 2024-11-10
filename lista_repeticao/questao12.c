#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, primo=0, div;
    for (int i = 1; i <=10 ; i++)
    {
        
        printf("Digite um numero: ");
        scanf("%d", &n);
        div = 0;
        for (int j = 1; j <= n; j++)
        {
            if (n%j == 0)
            {
                div= div+1;
            }
        
        }
        if (div == 2)
        {
            primo++;
        }
    }
    printf("\nVoce digitou %d numeros primos.", primo);
    return 0;
}
