#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;

    printf("Digite sau primeira nota: ");
    scanf("%f",&n1);
    printf("Digite sau segunda nota: ");
    scanf("%f",&n2);
    printf("Digite sau terceira nota: ");
    scanf("%f",&n3);
    printf("Digite sau quarta nota: ");
    scanf("%f",&n4);

    media= (n1+n2+n3+n4)/4;

    if (media >=7 )
    {
        printf("sua media foi %.2f\nVoce esta aprovado!!! ",media);
    }
    else
    {
        printf("sua media foi %.2f\nVoce esta reprovado!!! ",media);
    }
     

    
    return 0;
}

