#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, peso, mfaix1=0, mfaix2=0, mfaix3=0, mfaix4=0,faix1=0, faix2=0, faix3=0, faix4=0;

    for (int i = 1; i <= 4; i++)
    {
        printf("\n--------------------\n");
        printf("Digite sua idade: ");  
        scanf("%d", &idade);
        printf("\nDigite seu peso: ");
        scanf("%d", &peso);

        if (idade >= 31)
        {
            mfaix4 = peso + mfaix4;
            faix4++;
        }
        else if (idade >= 21)
        {
            mfaix3 = mfaix3 + peso;
            faix3++;
        }
        else if (idade >= 11)
        {
            mfaix2 = mfaix2 + peso;
            faix2++;
        }
        else
        {
            mfaix1 = mfaix1 + peso;
            faix1++;
        }
        
    }
    printf("\n\tA madia do peso por faixa etaria eh:\n");
    printf("1 a 10 anos = %.2f \t11 a 20 anos = %.2f \t21 a 30 anos = %.2f \t31> = %.2f ",(float)mfaix1/faix1, (float) mfaix2/faix2, (float)mfaix3/faix3, (float)mfaix4/faix4);
}
