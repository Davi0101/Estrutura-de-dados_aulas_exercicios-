#include <stdio.h>
#include <stdlib.h>


int main()
{
   int minutos_d, horas_d, horas, minutos, segundos;
    printf("Digite o numero de horas: ");
    scanf("%d",&horas_d);
    printf("Digite o numero de minutos : ");
    scanf("%d",&minutos_d);

    horas= horas_d*60;
    minutos= horas + minutos_d;
    segundos= minutos*60;
    
   
    printf("%d em minutos eh: %d\n",horas_d,horas);
    printf("a quantidade total de minutos eh: %d\n",minutos);
    printf("a quantidade total de segundos eh: %d\n",segundos);

    return 0;
}