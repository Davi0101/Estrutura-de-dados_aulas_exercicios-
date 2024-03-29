#include <stdio.h>
#include <math.h>

//Aproximação para pi

double pi (int n){
    double soma = 0.0;

    for (int i = 0; i <= n; i++)
    {
        soma += pow(-1.0, (double)i )/ (2*i+1);
        printf("%f\n",4.0*soma);
        return 4.0*soma;
    }
    
}


//Questão 13:

int main()
{
    int n = 20;
    
    printf("%f",pi(n) );

    return 0;
}
