#include <stdio.h>
#include <stdlib.h>
int main()
{
  int nascimento, atual, anos, meses, dias, semanas ;
    printf("Em qual ano voce .nasceu? ");
    scanf("%d", &nascimento);
    printf("qual o ano atual? ");
    scanf("%d", &atual);
    
    anos= atual-nascimento;
    meses= anos*12;
    dias= anos * 365;
    semanas= anos*52;
     
     printf("voce tem:\n %d anos\n %d meses\n%d dias\n%d semanas", anos, meses, dias, semanas);
    
    
     
    return 0;
    
}