#include <stdio.h>
#include <stdlib.h>

DesenhaLinha(qtdSinais){
    for(int i=0; i<qtdSinais; i++)
    {
        printf("=");
    }
    return 0;
}

Fatorial(int i){
    int fat;
    for(fat=1; i>1; i--){
        fat = fat*i;
    }
    return fat;
}

int main(){
    int fat, qtdSinais;

    printf("Digite o tamanho da linha: ");
    scanf("%d",&qtdSinais);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d",&fat);

    DesenhaLinha(qtdSinais);
    printf("\n");
    printf("O fatorial de %d eh %d\n",fat,Fatorial(fat));
    DesenhaLinha(qtdSinais);


    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/