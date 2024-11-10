#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;

    printf("Digite sau primeira nota: ");
    scanf("%f",&n1);
    printf("Digite sau segunda nota: ");
    scanf("%f",&n2);

    media= (n1+n2)/2;

    if (media >=7 )
    {
        printf("sua media foi %.2f\nVoce esta aprovado!!! ",media);
    }
    else if (media >=4 )
    {
        printf("sua media foi %.2f\nVoce precisara fazer a recupercao!!! ",media);
    }
    else
    {
        printf("sua media foi %.2f\nVoce esta reprovado!!! ",media);
    }
     

    
    return 0;
}

