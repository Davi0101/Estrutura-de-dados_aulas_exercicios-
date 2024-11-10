#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b, h;
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f",&a);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f",&b);

    h= (a*a)+(b*b);
    printf("o valor da hipotenusa eh: %.2f",sqrt(h));

    return 0;
}