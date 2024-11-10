#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n1, n2, media;
    printf("Digite a nota 1:");
    scanf("%f", &n1);
     printf("Digite a nota 2:");
    scanf("%f", &n2);
     
    
    
    media = (n1*2+ n2*3)/5;
    printf("a media pomderada eh: %.2f", media);
    
    return 0;
    
}