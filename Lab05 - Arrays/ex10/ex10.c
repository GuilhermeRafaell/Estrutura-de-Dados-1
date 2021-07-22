#include <stdio.h>

int main(){
    int i,vetA[3],vetB[3],vetC[3];

    printf("<< Subtracao de vetores >>\n");
    
    for(i=0;i<3;i++){
        printf("Digite o valor %d de A: ",i+1);
        scanf("%d",&vetA[i]);
    }

    printf("\n");

    for(i=0;i<3;i++){
        printf("Digite o valor %d de B: ",i+1);
        scanf("%d",&vetB[i]);
    }
    printf("\n");
    
    for(i=0;i<3;i++){
        vetC[i] = vetA[i] - vetB[i];
    }
     
    printf("O vetor C, definido como C= A-B: (%d, %d, %d)",vetC[0],vetC[1],vetC[2]);

    return 0;
}

/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada.
Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80) 
*/