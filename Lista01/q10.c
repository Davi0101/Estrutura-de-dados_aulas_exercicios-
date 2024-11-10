#include <stdio.h>

int fibonacci(int n) {
    // Caso base: os dois primeiros elementos da sequência são 0 e 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Caso recursivo: o n-ésimo elemento é a soma dos dois anteriores
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Exemplo de uso
    int i = 6; // Vamos calcular o 6 elemento da sequencia (índice começa em 0)

    int resultado = fibonacci(i);

    printf("O %d-esimo elemento da sequencia de Fibonacci e %d\n", i, resultado);

    return 0;
}