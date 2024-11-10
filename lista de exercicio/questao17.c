#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,r,c,v,pi;
    printf("Digite o tamanho do raio: ");
    scanf("%f",&r);
    pi =3.14;
    c = 2*pi*r;
    a = pi*(r*r);
    v = (0.75)*pow(r,3)*pi;

    printf("comprimento: %.2f\n area: %.2f\nvolume: %.2f",c,a,v);

    return 0;
}