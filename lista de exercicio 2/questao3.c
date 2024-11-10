#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;

    printf("Digite sau primeira nota: ");
    scanf("%f",&n1);
    printf("Digite sau segunda nota: ");
    scanf("%f",&n2);


    if (n1>n2)
    {
        printf("O %.2f eh o menor",n2);
    }
    else
    {
         printf("O %.2f eh o menor",n1);
    }
     

    
    return 0;
}
