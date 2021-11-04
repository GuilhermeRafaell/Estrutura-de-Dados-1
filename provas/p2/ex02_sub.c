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

int remove_intervalo_lista(Lista *li, int posInicio, int posFim){
    if(li == NULL)
        return -1;

    if(posInicio <= 0 || posFim <= 0)
        return -1;

    if(posInicio > li->qtd || posFim > li->qtd)
        return -1;

    if(posFim < posInicio)
        return -1;

    int k,i = posInicio-1;
    int cont = posFim - i;

    for(k=i; k<li->qtd; k++){
        if(k+cont >= li->qtd){//caso de remocao dos últimos elementos
            li->qtd -= cont;
        }
        li->dados[k] = li->dados[k+cont];
        li->qtd--;
    }
    return 0;
}
// check:<<<erro: e2.3: Um só laço deve ser usado O(n). Da forma como está envolve deslocar os mesmos elementos várias vezes O(N²)>>>>
// check:<<<erro: não deveria ir até qtd?>>>>