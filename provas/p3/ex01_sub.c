#include <stdlib.h>
#include <stdio.h>

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TDLinkedList TDLinkedList;

typedef struct DLNode DLNode;

struct DLNode{
    struct aluno data;
    DLNode *next;
    DLNode *prev;
};

struct TDLinkedList{
    DLNode *begin;
    DLNode *end;
    int size;
};

int list_erase_max_nota_n1(TDLinkedList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    else{
        if(li->size == 0)
            return ELEM_NOT_FOUND;
        else{
            DLNode *atual, *prox;
            int maiorNota=0;
            atual = li->begin;

            while(atual != NULL){
                if(atual->data.n1 > maiorNota)
                    maiorNota = atual->data.n1;

                atual = atual->next;
            }

            while(atual != NULL){
                if(atual->data.n1 == maiorNota){
                    prox = atual;

                    //Caso seja o unico da lista
                    if(atual->prev == NULL && atual->next == NULL){
                        li->end = NULL;
                        li->begin = NULL;
                    }

                    //Caso seja o primero da lista
                    else if(atual->prev == NULL){
                        li->begin = atual->next;
                        li->begin->prev = NULL;
                    }

                    //Caso seja o ultimo da lista
                    else if(atual->next == NULL){
                        li->end = atual->prev;
                        li->end->next = NULL;
                    }

                    //Caso esteja no meio da lista
                    else if(atual->prev != NULL && atual->next != NULL){
                        atual->prev->next = atual->next;
                        atual->next->prev = atual->prev;
                    }
                    free(prox);
                    li->size--;
                }
                atual = atual->next;
            }
            return SUCCESS;
        }
    }
}