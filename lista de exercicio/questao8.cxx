#include <stdio.h>
#include <stdlib.h>
int main()
{
  float peso;
    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    printf("seu peso em gramas eh: %.2f g \n", peso*1000);
    
    return 0;
    
}