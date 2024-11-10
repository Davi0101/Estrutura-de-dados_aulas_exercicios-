#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n1, n2, divi;
    printf("Digite um numero:");
    scanf("%d", &n1);
     printf("Digite um numero:");
    scanf("%d", &n2);
     
    
    
    divi = n1/n2;
    if(n2 != 0){
    printf("%d / %d = %d", n1, n2, divi);
    }
    else{
       printf("Divisao invalida");
        }
        
    return 0;
    
}