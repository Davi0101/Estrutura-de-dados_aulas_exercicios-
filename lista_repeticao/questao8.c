#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int p1=0,  p2=0, p4=0, contp=0
    ;
    float altura,peso,idade, p3=0.00, idadem;
    char corOlhos[6];
    char corCabelos[6];
    

    for (int i = 0; i < 2; i++)
    {
        char corOlhos[1];
        char corCabelos[1];
        printf("\nDigite sua idade: \n");
        scanf("%f", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite a cor dos seus olhos:\n A - azul;\t P - preto;\t V - verde;\t C - castanho\n");
        scanf("%s", &corOlhos);
        printf("Digite a cor dos seus cabelos:\n P - preto; C -castanho; L - louro; e R - ruivo\n");
        scanf("%s", &corCabelos);

        if (idade>50)
        {
           p1++;
        }
        if (peso<60)
        {
           contp++;
        }
        if (altura<1.50)
        {
            idadem+=idade;
            p2++;
        }
        if (strcmp(corOlhos,"A")==0)
        {
            p3++;
        }
        if (strcmp(corOlhos,"a")==0)
        {
             p3++;
        }
        
        if (corCabelos == 'R' && corOlhos != 'A')
        {
            p4++;
        }
        if (corCabelos == 'r' && corOlhos != 'a')
        {
            p4++;
        }
    }
    printf("\na quantidade de pessoas com idade superior a 50 anos : %d",p1);
    printf("\na quantidade de pessoas com peso inferior a 60kg : %d",contp);
    printf("\n%.2f",idadem);
    printf("\na media das idades das pessoas com altura inferior a 1,50 m: %.2f",idadem/p2);
    printf("\n%.2f",p3);
    printf("\na porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f", (p3*100.00)/6.00);
    printf("\na quantidade de pessoas ruivas e que não possuem olhos azuis: %d", p4);
    
    return 0;
}
