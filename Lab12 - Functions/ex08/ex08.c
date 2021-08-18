#include <stdio.h>
#include <stdlib.h>

int incp(int y, float x){
    float t = y;

    y = y * x;
    t = t + y;

    return t;
    }

int main(){
    int y;
    float x, total;

    printf("Digite o valor de y: ");
    scanf("%d",&y);
    printf("Digite o percentual de alteracao x: ");
    scanf("%f",&x);

    total = incp(y, x);

    printf("O valor alterado eh: %.0f\n",total);


}

/*
=> Faça uma função que altere um valor de um número real em x%. Se 
o valor de x for negativo ele deve ser decrementado, se for positivo 
aumente.

Uso da função: 
x = incp(y,10);
z = incp(y,-20);

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