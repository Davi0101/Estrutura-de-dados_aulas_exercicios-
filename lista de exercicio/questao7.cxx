#include <stdio.h>
#include <stdlib.h>
int main()
{
  float peso;
    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    printf("se voce engordar 15 por cento seu novo peso sera: %.2f kg \n", peso+peso*0.15);
    printf("se voce emagrecer 20 por cento seu novo peso sera: %.2f kg ", peso-peso*0.20); 
    return 0;
    
}