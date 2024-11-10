#include <stdio.h>

int potencia (int base, int expoente){

    if (expoente == 0){
        return 1;
    }
    else{
        return base * potencia(base , expoente -1);
    }

}

int main()
{
    int b =5;
    int exp = 0;

    printf("%d", potencia(b, exp));

    return 0;
}
