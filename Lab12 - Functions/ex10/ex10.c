#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x,y; 
};

int imprime_ponto(struct ponto coordenada){
    printf("\nO ponto digitado eh: (%d,%d).",coordenada.x, coordenada.y);
}

int main(){
    struct ponto coordenada;

    printf("Digite o valor de x: ");
    scanf("%d",&coordenada.x);
    printf("Digite o valor de y: ");
    scanf("%d",&coordenada.y);
    imprime_ponto(coordenada);
    
}

/*
Observação: Para os próximos exercícios, crie uma struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função chamada imprime_ponto, que recebe uma 
struct do tipo ponto e mostra na tela o ponto no seguinte formato 
(ponto.x, ponto.y)

Exemplo de chamada da função:
imprime_ponto(p)

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 10
Digite o valor de y: 5
O ponto digitado eh: (10,5)
-------------------------------------------------------------------------------
*/