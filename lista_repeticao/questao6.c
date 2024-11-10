#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, a,valor;
    char codigo[15];
    int i =1;
    while (i<=2)
    {
       
        printf("Digite o codigo da transacao:\nV para transacao a vista\nP para transacao a prazo.\n");
        scanf("%s", &codigo);
        printf("Digite o valor da transacao: ");
        scanf("%f", &valor);
        
        if (codigo == 'v' || codigo =='V')
        {
            a=valor+a;
        }
        else if (codigo == 'p' || codigo == 'P')
        {
            p= p+valor;
        
        
          
        i++;
    }
    }

    printf("\no valor total das compras avista e: %.2f",a);
    printf("\no valor total das compras a prazo e: %.2f",p);
    printf("\no valor total das compras  e: %.2f",a+p);
    printf("\no valor da primeira prestacao das compras a prazo juntas: %.2f",p/3);
    
    return 0;
}

