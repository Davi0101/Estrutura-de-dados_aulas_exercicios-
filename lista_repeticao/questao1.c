#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int a, b, c,d,t;
    int a1, b1, c1, d1;
    int a2, b2, c2, d2;
    int a3, b3, c3, d3;
    int a4, b4, c4, d4;
    int a5, b5, c5, d5;


   while (i<=5)
   {
       printf("----------- %d grupo----------\n",i);
       printf("digite o primeiro numeo: ");
       scanf("%d",&a);
       printf("digite o segundo numeo: ");
       scanf("%d",&b);
       printf("digite o terceiro numeo: ");
       scanf("%d",&c);
       printf("digite o quarto numeo: ");
       scanf("%d",&d);
    
       if (i==1){
        a1 = a;
        b1= b;
        c1= c;
        d1= d;
        
       }
       else if (i==2)
       {
        a2 = a;
        b2= b;
        c2= c;
        d2= d;
       }
       else if (i==3)
       {
        a3 = a;
        b3= b;
        c3= c;
        d3= d;
       }
       else if (i==4)
       {
        a4 = a;
        b4= b;
        c4= c;
        d4= d;
       }
       else if (i==5)
       {
        a5 = a;
        b5= b;
        c5= c;
        d5= d;
       }              
       i++;

   }
   printf("\ngrupo 1: %d, %d, %d, %d ", a1, b1,c1,d1);
   printf("\ngrupo 2: %d, %d, %d, %d ", a2, b2,c2,d2);
   printf("\ngrupo 3: %d, %d, %d, %d ", a3, b3,c3,d3);
   printf("\ngrupo 4: %d, %d, %d, %d ", a4, b4,c4,d4);
   printf("\ngrupo 5: %d, %d, %d, %d ", a5, b5,c5,d5);

    printf("\n----------orden crescente----------\n");
    
    while (a1>d1|| a1>b1 || b1>c1 || c1>d1 )
    {
    if (a1>d1)
    {
        t=a1;
        a1=d1;
        d1=t;       
    }
    if (a1>b1)
    {
        t= a1;
        a1=b1;
        b1=t;
    }
    if (b1>c1)
    {
        t=b1;
        b1=c1;
        c1=t;
    }
    if (c1>d1)
    {
        t=c1;
        c1=d1;
        d1=t;
    }
    }
    printf("\ngrupo 1 orden crescente: %d, %d, %d, %d ", a1, b1,c1,d1);
    while (a2>d2|| a2>b2 || b2>c2 || c2>d2 )
    {
    if (a2>d2)
    {
        t=a2;
        a2=d2;
        d2=t;       
    }
    if (a2>b2)
    {
        t= a2;
        a2=b2;
        b2=t;
    }
    if (b2>c2)
    {
        t=b2;
        b2=c2;
        c2=t;
    }
    if (c2>d2)
    {
        t=c2;
        c2=d2;
        d2=t;
    }
    }
    printf("\ngrupo 2 orden crescente: %d, %d, %d, %d ", a2, b2,c2,d2);
    while (a3>d3|| a3>b3 || b3>c3 || c3>d3 )
    {
    if (a3>d3)
    {
        t=a3;
        a3=d3;
        d3=t;       
    }
    if (a3>b3)
    {
        t= a3;
        a3=b3;
        b3=t;
    }
    if (b3>c3)
    {
        t=b3;
        b3=c3;
        c3=t;
    }
    if (c3>d3)
    {
        t=c3;
        c3=d3;
        d3=t;
    }
    }
    printf("\ngrupo 3 orden crescente: %d, %d, %d, %d ", a3, b3,c3,d3);
    while (a4>d4|| a4>b4 || b4>c4 || c4>d4 )
    {
    if (a4>d4)
    {
        t=a4;
        a4=d4;
        d4=t;       
    }
    if (a4>b4)
    {
        t= a4;
        a4=b4;
        b4=t;
    }
    if (b4>c4)
    {
        t=b4;
        b4=c4;
        c4=t;
    }
    if (c4>d4)
    {
        t=c4;
        c4=d4;
        d4=t;
    }
    }
    printf("\ngrupo 4 orden crescente: %d, %d, %d, %d ", a4, b4,c4,d4);
    while (a5>d5|| a5>b5 || b5>c5 || c5>d5 )
    {
    if (a5>d5)
    {
        t=a5;
        a5=d5;
        d5=t;       
    }
    if (a5>b5)
    {
        t= a5;
        a5=b5;
        b5=t;
    }
    if (b5>c5)
    {
        t=b5;
        b5=c5;
        c5=t;
    }
    if (c5>d5)
    {
        t=c5;
        c5=d5;
        d5=t;
    }
    }
    printf("\ngrupo 5 orden crescente: %d, %d, %d, %d ", a5, b5,c5,d5);

    printf("\n----------orden crescente----------\n");
    printf("\ngrupo 1 orden crescente: %d, %d, %d, %d ", d1, c1,b1,a1);
    printf("\ngrupo 2 orden crescente: %d, %d, %d, %d ", d2, c2,b2,a2);
    printf("\ngrupo 3 orden crescente: %d, %d, %d, %d ", d3, c3,b3,a3);
    printf("\ngrupo 4 orden crescente: %d, %d, %d, %d ", d4, c4,b4,a4);
    printf("\ngrupo 4 orden crescente: %d, %d, %d, %d ", d5, c5,b5,a5);
    
  
    return 0;
}
