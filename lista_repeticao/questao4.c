#include <stdio.h>
#include <stdlib.h>


 int main()
 {
    int i, n ;
    printf("Digite um numero: ");
    scanf("%d",&n);
    i=0;
    while (i<=10)
    {
        printf("%d x %d= %d\n",n,i,n*i);
        i++;
    }

    
    
    return 0;
 }
 