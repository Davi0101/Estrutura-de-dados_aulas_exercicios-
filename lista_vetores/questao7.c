#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cont = 0, vet[10];
    int  negativos = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vet[i]<0)
        {
            negativos++;
        }
        if (vet[i]>0)
        {
            cont= cont+vet[i];
        }  
    }
    printf("\nVoce digitou %d numeros negativos.\n", negativos);
    printf("a soma dos numeros positivos eh: %.2ff", cont);
    return 0;
}