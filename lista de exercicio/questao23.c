#include <stdio.h>
#include <stdlib.h>


int main()
{
    float angulo1, angulo2, angulo3;
    printf("Digite qual do primeiro angulo : ");
    scanf("%f",&angulo1);
    printf("Digite qual do segundo angulo : ");
    scanf("%f",&angulo2);

    
    angulo3= 180-(angulo1+angulo2);
   
    printf("a meidida do terceiro angulo eh: %.2f",angulo3);

    return 0;
}