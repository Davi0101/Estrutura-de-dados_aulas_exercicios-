#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Digite a quantidade de graus em celcius: ");
    scanf("%f",&c);
    

   f = (180*(c+32))/100;

    printf("%.2fC eh igual a: %.2f  F", c,f);

    return 0;
}