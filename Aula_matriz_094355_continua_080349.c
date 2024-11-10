#include <stdio.h>



#define linhas 4
#define colunas 3

float ** criar_matriz (int l, int c, float inicial);
float ** imprime_matriz(int li, int co, float ** mat);
float ** apaga_matriz(int lin, float ** matr);
float **  somar_matriz(int l, int c, float** matriz1, float** matriz2 );
void swap(float * a, float*b);
float** transposta(int l, int c, float** matri);



int main()
{
    float** matrizA = criar_matriz(linhas,colunas,1.0);
    imprime_matriz(linhas,colunas,matrizA);
    printf("\n");
    /*float** matrizB= criar_matriz(linhas, colunas,2.0);
    imprime_matriz(linhas,colunas,matrizB);
    printf("\n");
    float** matrizC = somar_matriz(linhas, colunas, matrizA,matrizB);
    imprime_matriz(linhas,colunas,matrizC);
    printf("\n");*/
    float** matrizD= transposta(linhas, colunas, matrizA);
    imprime_matriz(linhas,colunas,matrizD);
    printf("\n");


    



    return 0;
}

float ** criar_matriz(int l, int c , float inicial){

    float **m= (float **)malloc(l*sizeof(float*));
    for (int i = 0; i < l; i++)
    {
    m[i]= (float**)malloc(c*sizeof(float));
      for (int j = 0; j < c; j++)
        {
            m[i][j] = inicial;
        }

    }
    return m;
}
//imprimir matriz
float ** imprime_matriz(int li, int co, float ** mat ){

    for ( int i = 0; i < li; i++)
    {
        for (int j = 0; j < co; j++)
        {
            printf("%.f  ", mat[i][j]);
        }
        printf("\n");
    }


}
//apaga matriz
float ** apaga_matriz(int lin, float ** matr){
    for (int i = 0; i < lin; i++)
    {
        free(matr[i]);
    }
    
}
//soma duas matriz
float ** somar_matriz(int l, int c, float** matriz1, float** matriz2 ){
    float** resultado= criar_matriz(l,c,0.0);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            resultado[i][j] = matriz1 [i] [j] + matriz2 [i] [j];
        }
        
    }
    return resultado;

}

//trocar posição da matriz

void swap(float*a, float*b){
    float aux = *a;
    *a = *b;
    *b = aux; 



}
// trocar linhas por colunas
float** transposta(int l, int c, float** matri){
    float ** trans = criar_matriz(colunas, linhas, 1.0);
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            trans [j] [i]= matri [i][j]; 
            
        }
        
    }
    apaga_matriz(linhas, matri);
return trans;
    

}