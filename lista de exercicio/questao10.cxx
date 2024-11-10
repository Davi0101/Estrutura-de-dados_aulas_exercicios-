#include <stdio.h>
#include <stdlib.h>
int main()
{
  int area,lado;
    printf("Digite o comprimento de um lado do quadrado: ");
    scanf("%d", &lado);

    area= lado*lado;

    printf("a area do quadrado eh: %d  \n", area);
    
    return 0;
    
}