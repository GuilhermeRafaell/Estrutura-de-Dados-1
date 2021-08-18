#include <stdio.h>

typedef struct ponto{
    int x,y;
}ponto;

void inc_dir(ponto *p, char x){
    if(x == 'n')
        p->y = p->y + 1;
    else if(x == 's')
        p->y = p->y - 1;
    else if(x == 'o')
        p->x = p->x - 1;
    else if(x == 'l')
        p->x = p->x + 1;
}

int main(){
    ponto p;
    char d;

    printf("Digite o ponto: ");
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    printf("Digite a direcao (n,s,l,o): ");
    scanf(" %c", &d);
        
    printf("(%d,%d) ", p.x, p.y);
    inc_dir(&p, d);
    
    if(d == 'n')
        printf("norte => (%d,%d)\n", p.x, p.y);
    else if(d == 's')
        printf("sul => (%d,%d)\n", p.x, p.y);
    else if(d == 'l')
        printf("leste => (%d,%d)\n", p.x, p.y);
    else if(d == 'o')
        printf("oeste => (%d,%d)\n", p.x, p.y);


    return 0;
}

/*
=> Faça um procedimento chamado inc_dir, que faz o ponto 
andar uma unidade para leste, oeste, norte, sul (passar como 
referência e retorno void)

Exemplo de chamada:
inc_dir(p,'l'); // anda uma unidade para o leste (incrementa x)
inc_dir(p,'o'); // anda uma unidade para o oeste (decrementa x)

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) norte => (1,4)
(2,4) leste => (3,4)
-------------------------------------------------------------------------------
*/