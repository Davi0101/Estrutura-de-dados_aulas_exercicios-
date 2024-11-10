#include <stdio.h>
#include <stdlib.h>


int main()
{
    float b,h,a,p;
    printf("Digite o comprimento do comprimento: ");
    scanf("%f",&b);
    printf("Digite o comprimento da largura: ");
    scanf("%f",&h);

    a= b*h;
    p = a*18;

    printf("O comodo tem: %.2f metros quadrados\nnescecita de:%.0fW de potencia para uma boa iluminacao.",a,p);

    return 0;
}