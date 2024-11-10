#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[7];
    
    for (int i = 0; i <7; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("numeros multiplos de 2: ");
    for (int i = 0; i < 6; i++)
    {
        
        if (vet[i]%2 == 0 )
        {
            printf("%d ", vet[i]);
           
        }        
    }
    
    printf("\nnumeros multiplos de 3: ");
    for (int i = 0; i < 6; i++)
    {
        
        if (vet[i]%3 == 0 )
        {
            printf("%d ", vet[i]);
            
        } 
    }
    printf("\nnumeros multiplos de 2 e 3: ");
    
    for (int i = 0; i < 6; i++)
    {
        
        if (vet[i]%3 == 0 )
        {
            printf("%d ", vet[i]);
            
        } 
        if (vet[i]%2 == 0 )
        {
            printf("%d ", vet[i]);
            
        }   
    }
    
    return 0;
}