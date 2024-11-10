#include <stdio.h>
#include <stdlib.h>
int main()
{
  int area, baseM, basem, altura;
    printf("Digite o comprimento da base marior: ");
    scanf("%d", &baseM);
    printf("Digite o comprimrnto da base menor: ");
    scanf("%d", &basem);
    printf("Digite a altura: ");
    scanf("%d", &altura);

    area= ((baseM+basem)*altura)/2;

    printf("a area do trapesio eh: %d  \n", area);
    
    return 0;
    
}