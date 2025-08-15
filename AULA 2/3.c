#include <stdio.h>
#include <math.h>

struct realType{
    int left;
    int rigth;
};

int Trenformar_deci_int(double ndecimal){
    if(ndecimal == (int)ndecimal ){
        return (int)ndecimal;
    }else{
        return Trenformar_deci_int((ndecimal*10));
    }
}
struct realType Criareal (){
    double numerodigitado = 0.0;
    struct realType resultado = {0, 0};

     printf("Digite um numero real: ");
     scanf("%lf", &numerodigitado);

    resultado.left = (int)numerodigitado;
    double decimal = fabs(numerodigitado - resultado.left);
    resultado.rigth = Trenformar_deci_int(decimal);

    return resultado;
}

int main (){
    printf("----------------------------\n");
    struct realType meunumero = Criareal(); 

    printf("o numero foi guardado na struct como:\n");
    printf("parte inteira: %d\n", meunumero.left);
    printf("parte decimal: %d\n", meunumero.rigth);

    return 0;
}
