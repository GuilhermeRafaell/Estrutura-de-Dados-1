#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TVarSeqList.h"

//Definicao do tipo da lista
struct lista
{
    int qtd;
    int mInicial;
    int mAtual;
    aluno *dado;
};

//Cria a lista
//dado o numero de alunos
//Retorno ponteriro para a lista
Lista *cria_lista(int n)
{
    Lista *li;
    li = (Lista *)malloc(sizeof(Lista));

    if (li != NULL)
    { //Inicializa com 0 elementos
        li->qtd = 0;
        li->mInicial = n;
        li->mAtual = n;
        li->dado = malloc(n * sizeof(aluno));

        return li;
    }
}

//Aumenta o tamnho da lista adicionando o tamanho inicial a cada execucao
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int aumenta_tam_lista(Lista *li)
{
    if (li == NULL || li->dado == NULL)
        return -1;

    else
    {
        li->dado = realloc(li->dado, (li->mAtual + li->mInicial) * sizeof(aluno));
        li->mAtual += li->mInicial;
        return 0;
    }
}

//Compacta a lista o maximo possivel, sendo o novo tamanho um multiplo do tamanho inicial
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int compactar_lista(Lista *li)
{
    if (li == NULL || li->dado == NULL)
        return -1;

    else
    {
        int comp;
        comp = ceil((li->qtd) / (float)li->mInicial) * li->mInicial;
        li->dado = realloc(li->dado, comp * sizeof(aluno));
        li->mAtual = comp;
        return 0;
    }
}

//Libera a lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int free_lista(Lista *li)
{
    if (li == NULL)
        return -1;

    else
    {
        free(li->dado);
        free(li);
        return 0;
    }
}

//Insere um aluno no final da lista
//dado a lista e o aluno
//Retorno -1 para erro e 0 para sucesso
int insere_final_lista(Lista *li, aluno a)
{
    if (li == NULL)
        return -1;

    else if (li->qtd == li->mAtual)
    {
        aumenta_tam_lista(li);
        li->dado[li->qtd] = a;
        li->qtd++;
        return 0;
    }

    else
    {
        li->dado[li->qtd] = a;
        li->qtd++;
        return 0;
    }
}

//Insere um aluno no inicio da lista
//dado a lista e o aluno
//Retorno -1 para erro e 0 para sucesso
int insere_inicio_lista(Lista *li, aluno a)
{
    if (li == NULL)
        return -1;

    else if (li->qtd == li->mAtual)
    {
        aumenta_tam_lista(li);
        int i;

        for (i = li->qtd - 1; i <= 0; i--)
        {
            li->dado[i + 1] = li->dado[i];
        }
        li->dado[0] = a;
        li->qtd++;
        return 0;
    }

    else
    {
        int i;

        for (i = li->qtd - 1; i <= 0; i--)
        {
            li->dado[i + 1] = li->dado[i];
        }
        li->dado[0] = a;
        li->qtd++;
        return 0;
    }
}

//Insere o aluno de maneira ordenada de modo crescente das matriculas
//dado a lista e o aluno
//Retorno -1 para erro e 0 para sucesso
int insere_ordenado_lista(Lista *li, aluno a)
{
    if (li == NULL)
        return -1;

    else if (li->qtd == li->mAtual)
    {
        aumenta_tam_lista(li);
        int k, i = 0;
        while (i < li->qtd && li->dado[i].matricula < a.matricula)
        {
            i++;
        }
        for (k = li->qtd - 1; k >= i; k--)
        {
            li->dado[k + 1] = li->dado[k];
        }
        li->dado[i] = a;
        li->qtd++;
        return 0;
    }

    else
    {
        int k, i = 0;
        while (i < li->qtd && li->dado[i].matricula < a.matricula)
        {
            i++;
        }
        for (k = li->qtd - 1; k >= i; k--)
        {
            li->dado[k + 1] = li->dado[k];
        }
        li->dado[i] = a;
        li->qtd++;
        return 0;
    }
}

//Consulta os dados de um aluno pela posicao
//dado a lista, a posicao e um ponteiro para aluno para receber as informacoes
//Retorno -1 para erro e 0 para sucesso
int consulta_lista_pos(Lista *li, int pos, aluno *ac)
{
    if (li == NULL || pos <= 0 || pos > li->qtd)
        return -1;

    else
    {
        *ac = li->dado[pos - 1];
        return 0;
    }
}

//Consulta os dados de um aluno pela matricula
//dado a lista, a matricula e o ponteiro para um aluno para receber as informacoes
//Retorno -1 para erro, -2 caso nao encontre e 1 para sucesso
int consulta_lista_mat(Lista *li, int mat, aluno *ac)
{
    if (li == NULL)
        return -1;

    else
    {
        int i = 0;

        while (i < li->qtd && li->dado[i].matricula != mat)
        {
            i++;
        }
        if (i == li->qtd)
            return -2;

        else
        {
            *ac = li->dado[i];
            return 0;
        }
    }
}

//Remove um aluno do inicio da lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int remove_inicio_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    if (li->qtd == 0)
        return 0;

    else
    {
        int k;
        for (k = 0; k < li->qtd - 1; k++)
        {
            li->dado[k] = li->dado[k + 1];
        }
        li->qtd--;
        return 0;
    }
}

//Remove um aluno do final da lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int remove_final_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    if (li->qtd == 0)
        return -1;

    else
    {
        li->qtd--;
        return 0;
    }
}

//Remove um aluno pelo numero de matricula
//dado a lista e a matricula
//Retorno -1 para erro e 0 para sucesso
int remove_mat_lista(Lista *li, int mat)
{
    if (li == NULL)
        return -1;
    if (li->qtd == 0)
        return -1;

    else
    {
        int k, i = 0;
        while (i < li->qtd && li->dado[i].matricula != mat)
        {
            i++;
        }
        if (i == li->qtd)
        {
            return 0;
        }
        else
        {
            for (k = i; k < li->qtd - 1; k++)
            {
                li->dado[k] = li->dado[k + 1];
            }
            li->qtd--;
            return 0;
        }
    }
}

//Remove um aluno da lista de maneira otimizado(perde a ordem)
//dado a lista e a matricula
//Retorno -1 para erro e 0 para sucesso
int remove_mat_otimizado_lista(Lista *li, int mat)
{
    if (li == NULL)
        return -1;
    if (li->qtd == 0)
        return -1;

    else
    {
        int i = 0;
        while (i < li->qtd && li->dado[i].matricula != mat)
        {
            i++;
        }
        if (i == li->qtd)
        {
            return 0;
        }
        li->qtd--;
        li->dado[i] = li->dado[li->qtd];
        return 0;
    }
}

//Informa a quantidade de alunos na lista
//dado a lista
//Retorno -1 para erro e a quantidade de alunos caso sucesso
int tamanho_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

//Informa a quantidade de espacos ja alocados para os alunos
//dado a lista
//Retorno -1 para erro e a quantidade de espacos ja alocados caso sucesso
int tamanho_aloc_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    else
        return li->mAtual;
}

//Informa se a lista esta cheia
//dado a lista
//Retorno -1 para erro, 1 para lista cheia e 0 caso nao esteja
int cheia_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    else
        return (li->qtd == li->mAtual);
}

//Informa se a lista esta vazia
//dado a lista
//Retorno -1 para erro, 1 para lista vazia e 0 caso nao esteja
int vazia_lista(Lista *li)
{
    if (li == NULL)
        return -1;
    else
        return (li->qtd == 0);
}

//Imprime a lista
//dado a lista
//Retorno -1 para erro e 0 para sucesso
int imprime_lista(Lista *li)
{
    if (li == NULL)
        return -1;

    else
    {
        for (int i = 0; i < li->qtd; i++)
        {
            printf("Matricula: %d\n", li->dado[i].matricula);
            printf("Nome: %s\n", li->dado[i].nome);
            printf("Notas: %.1f %.1f %.1f\n", li->dado[i].n1, li->dado[i].n2, li->dado[i].n3);
            printf("-------------------------------\n");
        }
        return 0;
    }
}