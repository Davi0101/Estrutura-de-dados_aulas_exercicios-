#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarion, salario, conta1,conta2;
    printf("digite o seu salario: ");
    scanf("%f",&salario);
    printf("digite o valor da primeira conta: ");
    scanf("%f",&conta1);
    printf("digite o valor da segunda conta: ");
    scanf("%f",&conta2);

   salarion = salario-((conta1*0.02+conta1)+(conta2*0.02+conta2));

    printf("voce ficara com %.2f restante", salarion);

    return 0;
}
