#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15];
    for (int i = 0; i <15; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("encontrei o numero 30 nesses posicoes: ");
    for (int i = 0; i <15; i++)
    {
        
        if (vet[i]== 30 )
        {
            printf("\n%d ", i+1);
        }        
    }
    
    
    
    return 0;
}
