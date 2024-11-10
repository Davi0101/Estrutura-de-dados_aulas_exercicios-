#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int j=1;
    while (i<=10)
    {
        printf("\n----------Tabuada do: %d ----------\n",i);
        while (j<=10)
        {
           printf("%d x %d= %d\n",i,j,j*i);
          j++; 
        }

        j=0;
        i++;
        
    }
    return 0;
}
