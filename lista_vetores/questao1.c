#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6];
    int contp = 0,conti = 0;
    for (int i = 0; i <6; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("numeros pares: ");
    for (int i = 0; i < 6; i++)
    {
        
        if (vet[i]%2 == 0 )
        {
            printf("%d ", vet[i]);
            contp++;
        }        
    }
    printf("\nEste vetor tem %d numeros pares.", contp);
    printf("\nnumeros impares: ");
    for (int i = 0; i < 6; i++)
    {
        
        if (vet[i]%2 != 0 )
        {
            printf("%d ", vet[i]);
            conti++;
        } 
    }
    printf("\nEste vetor tem %d numeros impares.", conti);
    
    
    
    return 0;
}
