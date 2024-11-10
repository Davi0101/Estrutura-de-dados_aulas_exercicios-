#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id=0, faix1=0, faix2=0, faix3=0, faix4=0, faix5=0;
    int p1,p2,i =1;
    
    
   while (i<=8)
   {
    printf("Digite a idade %d: ",i);
    scanf("%d",&id);
    if (id>60)
    {
        faix5++; 
    }
    else if (id>=46)
    {
        faix4++;
    }
    else if (id>=31)
    {
        faix3++;
    }
    else if (id>=16)
    {
        faix2++;
    }
    else
    {
        faix1++;
    }
    

    i++; 
   }
    printf("\nFaixa Etaria 1:%d pessoas ", faix1);
    printf("\nFaixa Etaria 2:%d pessoas ", faix2);
    printf("\nFaixa Etaria 3:%d pessoas ", faix3);
    printf("\nFaixa Etaria 4:%d pessoas ", faix4);
    printf("\nFaixa Etaria 5:%d pessoas ", faix5);
    int totalp= faix1+faix2+faix3+faix4+faix5;
    p1= (faix1*100)/totalp;
    p2= (faix5*100)/totalp;
    printf("\na primeira faixa Etaria tem %d pessoas que representa %d por cento do total de pessoas", faix1,p1);
    printf("\na ultima faixa Etaria tem %d pessoas que representa %d por cento do total de pessoas", faix5,p2);
       return 0;
}
