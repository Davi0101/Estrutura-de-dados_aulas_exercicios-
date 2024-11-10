#include <stdio.h>


int bisexto(int ano){
    if (ano % 4 ==0)
    {
        //etapa 2
        if (ano % 100 == 0)
        {
            //etapa 3
            if (ano % 400 == 0)
            {
                return 0; //etapa 4
            
            } 
            else{
                return 1; //etapa 5
            }     
        }
        else
        {
            return 0; //etapa 4
        }         
    }
    else{

        return 1; //etapa 5
    }

}

int main()
{
    int ano = 0;
     
    printf("Digite o ano: ");
    scanf("%d",&ano);
    


    if (bisexto(ano)){
        printf("O ano %d nao e bisexto", ano);

    }
    else {
        printf("O ano %d eh bisexto", ano );
    }
         
    return 0;
}
