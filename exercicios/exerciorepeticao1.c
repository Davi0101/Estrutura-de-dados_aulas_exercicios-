#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, p;
    int i;

    s= 1000;
    i= 2005;
    p= 1.5/100;

    do
    {
        s = s+(s*p);
        printf("%.2f\n",s);
        p=p+p;
        i++;
    } while (i<=2023);
    

    return 0;
}
