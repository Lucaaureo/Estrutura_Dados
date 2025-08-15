#include<stdio.h>
#include<math.h>
void move_discos(int n, char origem, char destino, char auxiliar ) {
    if(n==1){
        printf("move disco %d de %c para %c\n",n, origem, destino);
    } else{
        move_discos(n-1, origem, auxiliar, destino);
        printf("move disco %d de %c para %c\n",n, origem, destino);
        move_discos(n-1, auxiliar, destino , origem);
    }
   
}

int main(){
    int discos = 3;
    move_discos(discos, 'A', 'C', 'B');
    return 0;
}