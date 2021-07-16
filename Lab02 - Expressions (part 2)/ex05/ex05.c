#include <stdio.h>

int main() {
    int bit[4],d;
    printf("== Conversor de numeros binarios ==\n");

    printf("Digite o 1o. bit: ");
    scanf("%d",&bit[0]);
    printf("Digite o 2o. bit: ");
    scanf("%d",&bit[1]);
    printf("Digite o 3o. bit: ");
    scanf("%d",&bit[2]);
    printf("Digite o 4o. bit: ");
    scanf("%d",&bit[3]);

    d=bit[0]*pow(2,3)+bit[1]*pow(2,2)+bit[2]*2+bit[3];

    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d",bit[0],bit[1],bit[2],bit[3],d);

}

/*
=> Faça um conversor de número binário para decimal (inteiro). 
O número deve ter 4 bits, sendo o bit mais significativo digitado primeiro. 
Mostrar na resposta o número binário e o número decimal.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor de numeros binarios >>
Digite o 1o. bit: 1
Digite o 2o. bit: 0
Digite o 3o. bit: 1
Digite o 4o. bit: 1
O numero binario 1011 corresponde ao numero decimal 11
-------------------------------------------------------------------------------
*/