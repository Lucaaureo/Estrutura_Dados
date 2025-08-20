#include <stdio.h>
long long int nao_recursivo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    long long int anterior = 0;
    long long int atual = 1;
    long long int proximo;
    int i;

    for (i = 2; i <= n; i++) {
        
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return atual;
}

int main() {
    int n;

    printf("digite uma posicao da sequencia de fibonacci: ");
    scanf("%d", &n);

        long long int resultado = nao_recursivo(n);
        printf("O valor na posicao %d da sequencia de Fibonacci e: %lld\n", n, resultado);
    
    return 0;
}