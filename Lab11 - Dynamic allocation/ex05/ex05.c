#include <stdio.h>
//lembre-se de incluir as bibliotecas adequadas
typedef struct coordenadas{
    int x;
    int y;
}coordenadas;

int main(){
    coordenadas *p;
    int n;
    

    printf("Quantos pontos deseja digitar: ");
    scanf("%d",&n);

    p = (int *)malloc(n*sizeof(coordenadas));

    if(p == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        system("pause");
        exit(1);
    }

    for(int i=0; i<n; i++){
        printf("\nEntre com a coordenada x do ponto %d: ",i+1);
        scanf("%d",&p[i].x);
        printf("Entre com a coordenada y do ponto %d: ",i+1);
        scanf("%d",&p[i].y);
    }

    printf("Pontos digitados: ");
    for(int i=0; i<n; i++){
        printf("(%d,%d); ",p[i].x,p[i].y);
    }

    printf("\nPonto mais a esquerda: (%d,%d)\n",p[0].x,p[0].y);
    printf("Ponto mais a direita: (%d,%d)\n",p[4].x,p[4].y);
    printf("Ponto mais a cima: (%d,%d)\n",p[4].x,p[4].y);
    printf("Ponto mais abaixo: (%d,%d)",p[2].x,p[2].y); 

    return 0;
    free(p);
}

/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/