#include <stdio.h>
#include <stdlib.h>

void incp(float *y,float x){
    float t = (*y);
        
    (*y) = (*y) * x;
    t = t + (*y);
    *y = t;

}

int main(){
    float y, x;

    printf("Digite o valor de y: ");
    scanf("%f",&y);
    printf("Digite o percentual de alteracao x: ");
    scanf("%f",&x);

    incp(&y, x);

    printf("O valor alterado eh: %0.f\n", y);
}

/*
=> Faça uma função que altere um valor de um número real em x%. 
Se o valor de x for negativo ele deve ser decrementado, se for
positivo aumente. O valor da variável deve ser passada por parâmetro,
ou seja, o retorno deve  ser void.


-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de y: 100
Digite o percentual de alteracao: 0.10 // 0.10 equivale a 10%
O valor alterado eh: 110
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de y: -100
Digite o percentual de alteração: .10
O valor alterado eh: -110
-------------------------------------------------------------------------------
*/