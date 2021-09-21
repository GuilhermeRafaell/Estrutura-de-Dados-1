#define MAX 100
#include <stdlib.h>
#include <stdio.h>
/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

*/

typedef struct lista Lista;

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

int remove_intervalo_lista(Lista *li, int pos1, int pos2){
    int cont;
    if(li == NULL)
        return -1;

    if(li->qtd == 0)
        return -1;

    if(pos1 <= 0 || pos1 > li->qtd || pos2 <= 0 || pos2 > li->qtd)
        return -1;

    int k, i = pos1-1;
    while(i <= pos2-1)
    {
        i++;

    if(i == li->qtd)
        return 0;
    
    for (k = i; k < pos2-1; k++)
        li->dados[k] = li->dados[k + 1];

    cont = pos2-pos1+1;
    li->qtd -= cont;
    return 0;
    }
}