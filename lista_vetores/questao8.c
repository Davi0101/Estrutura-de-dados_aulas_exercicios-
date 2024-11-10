#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10][7];
    float media[7];
    float exame[7];

    
    for (int i = 0; i < 7; i++)
    {
        printf("Digite o nome aluno:  \n");
        scanf("%s", &nome[i]);
        printf("Digite a media deste aluno: \n");
        scanf("%f",&media[i]);

    }
    float maior = media[0];
    int j=0;
    for (int i = 0; i < 7; i++)
    {
        if (media[i]>maior)
            {
               maior = media[i];              
               j=i;
                
            }         
    } 
    printf("o aluno %s tem a maior nota.", nome[j]);
    for (int i = 0; i < 7; i++)
    {
         if (media[i] < 7)
            {
                exame[i] = 10-media[i];
                printf("\no aluno %s precisa tirar %.2f no exame para ser aprovado.\n", nome[i], exame[i]);
            }
    }
    

    
    
   
    return 0;
}