#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[100];
    char palavra[10];
    int vettam[10];
    int tam = 0, contp = 1, cont= 0, vezes = 0, iguais = 0,tamvet = 0, tamp = 0;


//recebendo a frase e contando a quantidade de palavras
    printf("Digite seu nome: ");
    gets(frase);
    fflush(stdin);

    for (int i = 0; frase[i]!= '\0'; i++)
    {
        tam++;
        if (frase[i] == ' ' && frase[i+1]!= '\0'){
           
            contp++;
            }
    }

//printf("%d\n", tam);
    printf("a frase %s tem %d palavras \n", frase, contp);

//conferindo o tamanho de cada palavra e guardando no vetor de tamanhos
    for(int i =0, j =0, k=0; i < 1+tam; i++){
            j++;
            if (frase[i] == ' ' || frase[i]== '\0' || frase[i]== '\n')
            {  
                vettam[k] = j;
                j=0;
                tamvet++; 
                k++;
            }
            
                } 


    printf("\n");
//recebendo a palavra e conferindo o tamanho util
    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            tamp++;
        }
    
    
/*teste vetor de tamanhos    printf("\n%d\n",tamvet);
   for (int i = 0; i < tamvet; i++)
    {
        printf("%d ", vettam[i] );
        
    }*/
    
//conferindo se ah alguma palavra igual     
      for(int i=0 ; i < contp; i++)
      { vezes=0;
            
           if(tamp == vettam[i]-1){
           for (int j = 0; j < vettam[i]; j++)
           {
            
            if (frase[cont]!= '\0' && frase[cont] == palavra[j])
            {
                vezes++;
            }
/*teste comparacao 
            printf("\n%d %c %d %c %d\n", cont,frase[cont],j, palavra[j] , i);
            printf("\n%d vezes\n", vezes);*/

              cont++;
           }
            
           }
           else{
            for (int l = 0; l < vettam[i]; l++){
            cont++; 
            }
           }  
         if (vezes==vettam[i]-1)
            {
                iguais++;
            }   
                
      }

      printf("\n");
//mostrando a quantidade de palavras iguais encontradas
        if (iguais != 0){
            
            printf("Achei %d palavras iguais a palavra: %s", iguais,palavra);
            }
        else{
          printf("nao achei nem uma palavra igual");
            }
    return 0;
}