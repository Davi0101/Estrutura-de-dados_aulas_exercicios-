#include <stdio.h>
#include <math.h>

// Calcular a quantidade de lampadas necessaria para a boa iluminação do comodo:
// potencia da lampada 60w, 5 tipos e potencia por metro.

void q_lampadas (int tipo , float largura, float comprimento, float *quant_lampadas )
{
    float area = 0;
    float potencia = 0;
    

    switch (tipo)
    {
    case 0:
        area = largura * comprimento;
        potencia = area * 12;

        break;

    case 1:
        area = largura * comprimento;
        potencia = area * 15;

        break;
  
    case 2:
        area = largura * comprimento;
        potencia = area * 18;
 
        break;
        

    case 3:
        
        area = largura * comprimento;
        potencia = area * 20;
     
        break;
    case 4:
        
        area = largura * comprimento;
        potencia = area * 22;
        
        break;    
    
    
    default:
        printf("tipo invalido: ");
        break;
    }

    *quant_lampadas = ceil(potencia/60);


    
}

int main (){
    int tip ;
    float altura;
    float base;
    float qu_lampadas;

    printf("digite o tipo da operacao: \n");
    scanf("%d", &tip);
    printf("digite a largura do comodo: \n");
    scanf("%f", &altura);
    printf("digite o comprimento do comodo: \n");
    scanf("%f", &base);

    q_lampadas(tip, altura, base, &qu_lampadas);

    printf("%.0f\n", qu_lampadas);



    return 0;
}