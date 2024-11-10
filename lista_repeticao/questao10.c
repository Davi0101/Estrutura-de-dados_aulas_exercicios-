#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, primo=0, par=0, div=0;
    for (int i = 1; i <=10 ; i++)
    {
        
        printf("Digite um numero: ");
        scanf("%d", &n);
        div = 0;
        if (n % 2 ==0 )
        {
            par = par + n;

        }
        for (int j = 1; j <= n; j++)
        {
            if (n%j == 0)
            {
                div= div+1;
            }
        
        }
        if (div == 2)
        {
            primo = n + primo;
        }
        div = 0;
    }
    printf("\na soma dos numeros pares eh: %d", par);
    printf("\na soma dos numeros primos eh: %d", primo);
    return 0;
}
