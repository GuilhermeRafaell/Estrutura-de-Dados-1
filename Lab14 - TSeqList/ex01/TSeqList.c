#include <stdio.h>
#include <stdlib.h>
#include "TSeqList.h"

//Definicao do tipo da lista
struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

//Cria a lista
//dado o numero de alunos
//Retorno ponteriro para a lista
Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));

    if (li != NULL)
    { //Inicializa com 0 elementos
        li->qtd = 0;
    }
    return li;
}

//Libera a lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
void libera_lista(Lista *li)
{
    if(li == NULL)
        return -1;

    else{
        free(li);
        return 0;
    }
}

//Consulta os dados de um aluno pela posicao
//dado a lista, a posicao e um ponteiro para aluno para receber as informacoes
//Retorno -1 para erro e 0 para sucesso
int consulta_lista_pos(Lista *li, int pos, struct aluno *al)
{
    //A lista inicia na pos 0 , portanto ao requisitar a posicao 3 por exemplo eu quero na verdade o a posicao 2
    if (li == NULL || pos <= 0 || pos > li->qtd)
    {
        return -1;
    }
    *al = li->dados[pos - 1];
    return 0;
}
//Consulta os dados de um aluno pela matricula
//dado a lista, a matricula e o ponteiro para um aluno para receber as informacoes
//Retorno -1 para erro, -2 caso nao encontre e 1 para sucesso
int consulta_lista_mat(Lista *li, int mat, struct aluno *al)
{
    if (li == NULL)
        return -1;

    int i = 0;
    while (i < li->qtd && li->dados[i].matricula != mat)
        i++;

    if (i == li->qtd)
        return -1;

    *al = li->dados[i];
    return 0;
}
//Insere um aluno no final da lista
//dado a lista e o aluno
//Retorno -1 para erro e 0 para sucesso
int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;

    if (li->qtd == MAX)
        return -1;

    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}
//Insere um aluno no inicio da lista
//dado a lista e o aluno
//Retorno -1 para erro e 0 para sucesso
int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;

    if (li->qtd == MAX)
        return -1;

    int i;
    for (i = li->qtd - 1; i >= 0; i--)
        li->dados[i + 1] = li->dados[i];

    li->dados[0] = al;
    li->qtd++;
    return 0;
}
//Insere o aluno de maneira ordenada de modo crescente das matriculas
//dado a lista e o aluno
//Retorno -1 para erro e 0 para sucesso
int insere_lista_ordenada(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;

    if (li->qtd == MAX)
        return -1;

    int k, i = 0;
    while (i < li->qtd && li->dados[i].matricula < al.matricula)
        i++;

    for (k = li->qtd - 1; k >= i; k--)
        li->dados[k + 1] = li->dados[k];

    li->dados[i] = al;
    li->qtd++;
    return 0;
}
//Remove um aluno da lista
//dado a lista e sua matricula
//Retorno -1 para erro e 0 para sucesso
int remove_lista(Lista *li, int mat)
{
    if (li == NULL)
        return -1;

    if (li->qtd == 0)
        return -1;

    int k, i = 0;
    while (i < li->qtd && li->dados[i].matricula != mat)
        i++;

    if (i == li->qtd)
        return 0;

    for (k = i; k < li->qtd - 1; k++)
        li->dados[k] = li->dados[k + 1];

    li->qtd--; //Procedimento q exclui o ultimo elemento
    return 0;
}
//Remove um aluno do inicio da lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int remove_lista_incio(Lista *li)
{
    if (li == NULL)
        return -1;

    if (li->qtd == 0)
        return -1;

    for (int k = 0; k < li->qtd - 1; k++)
        li->dados[k] = li->dados[k + 1];

    li->qtd--; //Apenas atualiza a nova qtd da lista
    return 0;
}
//Remove um aluno do final da lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int remove_lista_final(Lista *li)
{
    if (li == NULL)
        return -1;

    if (li->qtd == 0)
        return -1;

    li->qtd--; //Exclui o ultimo elemento ao diminuir a qtd
    return 0;
}
//Informa se a lista esta cheia
//dado a lista
//Retorno -1 para erro, 1 para lista cheia e 0 caso nao esteja
int lista_cheia(Lista *li)
{
    if (li == NULL)
        return -1;

    return (li->qtd == MAX);
}
//Informa se a lista esta vazia
//dado a lista
//Retorno -1 para erro, 1 para lista vazia e 0 caso nao esteja
int lista_vazia(Lista *li)
{
    if (li == NULL)
        return -1;

    return (li->qtd == 0);
}
//Informa se a lista esta vazia
//dado a lista
//Retorno -1 para erro, 1 para lista vazia e 0 caso nao esteja
int imprime_lista(Lista *li)
{
    if (li == NULL)
        return -1;

    for (int i = 0; i < li->qtd; i++)
    {
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Notas: %f %f %f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
        printf("-------------------------------\n");
    }
    return 0;
}
//Remove um aluno da lista de maneira otimizado(perde a ordem)
//dado a lista e a matricula
//Retorno -1 para erro e 0 para sucesso
int remove_lista_otimizado(Lista *li, int mat)
{
    if (li == NULL)
        return -1;

    if (li->qtd == 0)
        return -1;

    int i = 0;
    while (i < li->qtd && li->dados[i].matricula != mat) //achar o aluno correspondente de acordo com sua matricula
        i++;

    if (i == li->qtd)
        return 0;

    li->qtd--;
    li->dados[i] = li->dados[li->qtd];
    return 0;
}