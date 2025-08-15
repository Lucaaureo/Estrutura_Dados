//Sequencia de Fibonacci
// 0, 1 , 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
#include<stdio.h>
#include<math.h>
int sequencia(int n){
    if(n ==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return sequencia(n-1) + sequencia(n-2);
}

int main(){
    int n;
   printf("digite uma posiçao na sequencia de fibonacci: ");
    scanf("%d",&n);
     int resultado= sequencia(n);
    printf("o valor na posiçao %d da sequencia de fibonacci é: %d\n", n, resultado);
    return 0;
}

