#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n1, n2, sub;
    printf("Digite um numero:");
    scanf("%f", &n1);
     printf("Digite um numero:");
    scanf("%f", &n2);
    
    sub= n1- n2;
    
    printf("a subtracao de %.2f por %.2f eh igual a: %.2f", n1, n2, sub);
    
    return 0;
    
}