#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0, par [10];
    int in= 0, impar[10];
    int num[10];
    //alimentando o vetor.
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numro: ");
        scanf("%d", &num[i]); 
    }


    //verificando par ou impar.
    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            par[p] = num[i];
            p++;
        }
       
        else
        {
            impar[in] = num [i];
            in++;
        }  
    }
    
// modtrando vetores.
    printf("\nNumeros pares: ");
    for (int i = 0; i < p ; i++)
    {
        printf("%d ", par[i]);
    }
    printf("\nNumeros impares: ");
    for (int i = 0; i < in; i++)
    {
        printf("%d ", impar[i]);
    }
    
    
    return 0;
}
