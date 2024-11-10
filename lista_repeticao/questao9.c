#include <stdio.h>
#include <stdlib.h>

int main()
{
    float idade, peso, altura, cond2_2=0, cond2_1=0.00, idadem =0.00;
    int cond1 = 0,  j=0;
    for (int i = 1; i <=10; i++)
    {
        j=i;
        printf("\n--------------------\n");
        printf("Digite sua idade: ");
        scanf("%f", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso: ");
        scanf("%f", &peso);

        idadem = idadem + idade;
        if (peso > 90 && altura < 1.50)
        {
            cond1++;
        }
        if (altura > 1.90)
        {
            cond2_1++;
            if (idade > 10 && idade < 30)
            {
                cond2_2++;
            }    
        }
        
    }

    printf("\na media das idades e: %.2f", idadem/j);
    printf("\na quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro eh: %d", cond1);
    printf("\na porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m eh: %.2f", (cond2_2*100)/cond2_1);
    


    return 0;
}
