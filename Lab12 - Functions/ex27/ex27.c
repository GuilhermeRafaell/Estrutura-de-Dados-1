#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int x,y;
}ponto;

ponto *aloca_ponto(int n){
    ponto *p;

    p = (ponto *)calloc(n,sizeof(ponto));

    return p;
}

int main(){
    int i,n;
    ponto *p1;

    printf("Digite quantos pontos(x,y) voce deseja: ");
    scanf("%d",&n);

    p1 = aloca_ponto(n);

    printf("(%d,%d)", p1[0].x, p1[0].y);
    if(n>1){
        printf(" ,");
        for(i=1; i<n-1; i++){
            printf(" (%d,%d)", p1[i].x, p1[i].y);
        }
        printf(" (%d,%d)",p1[i].x, p1[i].y);
    }

    free(p1);

    return 0;
}

/*
=> Crie uma função para alocar dinamicamente um vetor de n 
pontos e inicialize esses pontos como (0,0).

No programa principal, solicite ao usuário quantos pontos deseja.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite quantos pontos(x,y) você deseja: 2
(0,0) , (0,0) 
-------------------------------------------------------------------------------
*/