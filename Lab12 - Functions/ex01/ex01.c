#include <stdio.h>
#include <stdlib.h>

DesenhaLinha(int a){
    for(int i=0;i<a;i++){
        printf("========\n");
    }
}

int main(){
    int qtd;

    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf("%d",&qtd);
    DesenhaLinha(qtd);

    return 0;
}

/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
No programa principal execute várias chamadas a esse procedimento (use um loop).

Ex: DesenhaLinha(3) tem como saída:
    ========
    ========
    ======== 

No programa principal, solicite ao usuário quantas vezes a linha deverá ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
========
========
========
-------------------------------------------------------------------------------
*/