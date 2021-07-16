#include <stdio.h>

int main(){
    double n,q;

    printf("<< Calculo do Quadrado de n>>\n");

    printf("Digite um numero: ");
    scanf("%lf",&n);

    q = n*n;

    printf("O valor de %.1lf ao quadrado eh: %.2lf",n,q);

}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/