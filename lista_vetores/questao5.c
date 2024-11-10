#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15];
    int vet2[10];
    printf("Digite as matriculas dos alunos de logica: \n");
    for (int i = 0; i <15; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("\nDigite as matriculas dos alunos de linguagem de progamacao: \n");
    for (int i = 0; i <10; i++)
    {
        scanf("%d", &vet2[i]);
    }


    
    for (int i = 0; i < 10; i++)
    {   

        for (int j = 0; j < 15; j++)
        {
            if (vet[j] == vet2[i])
             {
                printf("\nmatricula %d aparece na posicao %d de logica E NA POSICAO %d de programacao\n",vet[j], j, i);
            }
        }
        
    }
    

    
    return 0;
}