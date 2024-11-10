#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float angulo, c, h, rad;
    printf("Digite qual o angulo formado pela escada: ");
    scanf("%f",&angulo);
    printf("Digite a distancia da escada ate a parede: ");
    scanf("%f",&c);

    
    rad= angulo*(3.14/180);
    h = c/(cos(rad));
   
    printf("a meidida da escada eh: %.2f",h);

    return 0;
}