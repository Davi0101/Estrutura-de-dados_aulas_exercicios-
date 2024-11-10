#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas=0,idade, i, j;
    float peso,altura,alturam= 0.0;
    float h=0.0;
    i = 1;
    j=0;
 
    while(i<=5){
        printf("\tpessoa numero: %d\n",i);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso: ");
        scanf("%f", &peso);
       
        
        if(idade>50){
            j++;            
          }
        if(idade>=10 && idade<=20){
            alturam= alturam+altura;
            h=h+1.0;
            }
         if(peso<40) {
             pessoas++;
             }     
        i++;
        }
        
        printf("pessoas tem idade superior a 50 anos e: %d .\n",j);
        printf("a media de pessoas entre 10 e 20 anos de idade e: %.2f  \n",alturam/h);
        printf("a porcentagen de pessoas com peso inferior a 40kg e: %.2f porcento ",(pessoas*100.00)/5.00);
    
    return 0;
}
