#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;
    printf("digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("digite o segundo numero: ");
    scanf("%f",&n2);
    printf("digite o terciro numero: ");
    scanf("%f",&n3);

    if (n1<=n2 && n1<n3 && n2<=n3)
    {
        printf("a sequencia certa dos numeros eh %.2f %.2f %.2f", n1, n2,n3);
        }
    else if (n1<n2 && n1<=n3 && n3<=n2)
    {
        printf("a sequencia certa dos numeros eh %.2f %.2f %.2f", n1,n3 ,n2);
        }
    else if (n2>=n1 && n1<=n3 && n2<n3)
    {
        printf("a sequencia certa dos numeros eh %.2f %.2f %.2f", n2,n1,n3 );
        }
    else if (n2<n1 && n1>=n3 && n2<=n3)
    {
        printf("a sequencia certa dos numeros eh %.2f %.2f %.2f", n2,n3,n1 );
        }
    else if (n3<n1 && n3<=n2 && n2<=n1)
    {
        printf("a sequencia certa dos numeros eh %.2f %.2f %.2f",n3 ,n2,n1 );
        }
    else if (n3<=n1 && n3<n2 && n2>=n1)
    {
        printf("a sequencia certa dos numeros eh %.2f %.2f %.2f",n3 ,n1,n2 );
        }
    
     
    return 0;
}