#include <stdio.h>
#include <stdlib.h>
#define cota_dolar 1.80;
#define cota_marco 2.00;
#define cota_libra 1.57;


int main()
{
    float reais, dolar, marco, libras;
    printf("quantos reais voce possui para viajar?  ");
    scanf("%f",&reais);
    
    dolar= reais/cota_dolar;
    marco= reais/cota_marco;
    libras= reais/cota_libra;
    
   
    printf("o dinhero que voce possui convertido para dolares eh: %.2f\n",dolar);
    printf("o dinhero que voce possui convertido para marco alemao eh: %.2f\n",marco);
    printf("o dinhero que voce possui convertido para libra esterlina eh: %.2f",libras);

    return 0;
}