#include <stdio.h>
#include <stdlib.h>
int main()
{
  int area,diagonalM, diagonalm;
    printf("Digite o comprimento da diagonal maior: ");
    scanf("%d", &diagonalM);
    printf("Digite o comprimento da diagonal menor: ");
    scanf("%d", &diagonalm);

    area= (diagonalM*diagonalm)/2;

    printf("a area do losango eh: %d  \n", area);
    
    return 0;
    
}