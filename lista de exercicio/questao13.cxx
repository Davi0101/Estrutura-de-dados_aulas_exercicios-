#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x, cont, mult;
    printf("Digite o numero:");
    scanf("%d", &x);
    
    
    for (cont = 1; cont <=10; cont ++){
        mult= x*cont;
        printf("%d x %d = %d\n", x, cont, mult);
        }
        
    
    return 0;
    
}