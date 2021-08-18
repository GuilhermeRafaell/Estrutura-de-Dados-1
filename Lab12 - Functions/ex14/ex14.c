#include <stdio.h>

typedef struct ponto{
        int x, y;
}ponto;

void multiplica_p(ponto *p,int c){
    p->x = p->x * c; //(*p).x = (*p).x * c; (mesma coisa)
    p->y = p->y * c; //(*p).y = (*p).y * c;
}

int main(){
    ponto p1;
    int c;

    printf("Digite o ponto: ");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    printf("Digite a constante: ");
    scanf("%d",&c);

    printf("Resultado: (%d,%d) * %d = ",p1.x, p1.y, c);
    multiplica_p(&p1,c);
    printf(" (%d,%d)\n", p1.x, p1.y);

    return 0;
}

/*
=> Faça um procedimento que multiplique o valor de um ponto 
por uma constante e altere o valor do ponto. Deve ser usada 
passagem por referência e retorno void.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o ponto: 1,2
Digite a constante: 5
Resultado: (1,2) * 5 = (5,10)
-------------------------------------------------------------------------------
*/