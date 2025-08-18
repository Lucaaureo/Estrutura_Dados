#include <stdio.h>
// Aula 3 exercicio

#define TAM 3

void lerM( int M[TAM][TAM], char nome){
    int i, j;
    printf("digite os elementos da matriz %c (%dx%d):\n", nome, TAM, TAM);
    for (i = 0; i<TAM; i++) {
        for (j=0; j<TAM; j++){
            scanf("%d", &M[i][j]);
    }
}
}
void imprimirM(int M[TAM][TAM], char nome){
    int i;
    int j;
    printf("\nmatriz %c:\n", nome);
    for (i=0; i<TAM; i++){
        for (j=0; j<TAM; j++){
            printf("%3d ", M[i][j]);
        }
        printf("\n");
    }
    
}

void somarM(int A[TAM][TAM], int B[TAM][TAM], int C[TAM][TAM]){
    int i, j;
    for (i=0; i<TAM; i++){
        for (j=0; j<TAM; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplicarM(int A[TAM][TAM], int B[TAM][TAM], int C[TAM][TAM]){
    int i, j, k;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            C[i][j] = 0; 
            for (k=0; k < TAM; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }   
    } 

}
 int main () {
    int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM], matrizProduto[TAM][TAM];
    lerM(A, 'A');
    lerM(B, 'B');

    somarM(A, B, C);


    imprimirM(A, 'A');
    imprimirM(B, 'B');
    imprimirM(C, 'C');
    multiplicarM(A, B, matrizProduto);
    imprimirM(matrizProduto, 'P');

 return 0;   

}
