#include <stdio.h>
#include <string.h>

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

void ind_diag(ponto *p, char dg){
    if(strcmp(dg, "nordeste")==0){
        inc_dir(&(*p), 'n');
        inc_dir(&(*p), 'l');
    }
    else if(strcmp(dg, "noroeste")==0){
        inc_dir(&(*p), 'n');
        inc_dir(&(*p), 'o');
    }
    else if(strcmp(dg, "sudeste")==0){
        inc_dir(&(*p), 's');
        inc_dir(&(*p), 'l');
    }
    else if(strcmp(dg, "sudoeste")==0){
        inc_dir(&(*p), 's');
        inc_dir(&(*p), 'o');
    }
}

int main(){
    ponto p;
    char d[10], temp[10];

    printf("Digite o ponto: ");
    fgets(temp, 10, stdin);
    sscanf(temp, "%d", &p.x);
    fgets(temp, 10, stdin);
    sscanf(temp, "%d", &p.y);
    printf("Digite a direcao: ");
    fgets(temp, 10, stdin);
    temp[strcspn(temp, "\n")] = '\0';
    strcpy(d, temp);
        
    printf("(%d,%d) ", p.x, p.y);
    ind_diag(&p, d);
    
    if(strcmp(d, "noroeste") == 0)
        printf("noroeste => (%d,%d)\n", p.x, p.y);

    else if(strcmp(d, "sudeste") == 0)
        printf("sudeste => (%d,%d)\n", p.x, p.y);

    else if(strcmp(d, "nordeste") == 0)
        printf("nordeste => (%d,%d)\n", p.x, p.y);

    else if(strcmp(d, "sudoeste") == 0)
        printf("sudoeste => (%d,%d)\n", p.x, p.y);


    return 0;
}

/*
=> Crie um procedimento para andar na diagonal (sudeste, 
sudoeste, nordeste, noroeste). Use obrigatoriamente as funções do 
exercício anterior.

Exemplo de chamada:
ind_diag(p,"sudeste"); 
ind_diag(p,"sudoeste");

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) sudeste => (2,2)
(2,4) sudoeste => (1,3)
-------------------------------------------------------------------------------
*/