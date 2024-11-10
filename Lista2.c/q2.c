#include <stdio.h>

int main()
{
    char L;

 while (1){
    printf("Voce deseja continuar [y/n]? \n");
    scanf("%c",&L);
    
    if (L == 'Y' || L == 'y'|| L == 'n' || L == 'N' )
    {
        break;
    }
    else{
        while (getchar() != '\n');
        }
    }
   
    return 0;
}
