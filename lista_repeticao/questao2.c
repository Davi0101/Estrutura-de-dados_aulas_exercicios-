#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float lucro,preco_in , lucrom, desp;
    preco_in = 5.0;
    int qd_in= 120;
    desp= 200;
    lucro= 0.0;
    lucrom=0.0;

    
    printf("P_ingresso\tquantidade\ttotal vendido\t lucro");
    while (preco_in >= 1.0)
    {   
        lucro = preco_in*qd_in;
        lucrom = (preco_in*qd_in)-desp;
        printf("\n R$:%.2f\t%d ingressos\tR$:%.2f\tR$:%.2f\t",preco_in, qd_in,lucro,lucrom);
       
        qd_in += 26;
        preco_in = preco_in - 0.50;
        
    }
    return 0;
}

    
