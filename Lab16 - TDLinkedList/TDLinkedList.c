#include <stdlib.h>
#include <stdio.h>
#include "TDLinkedList.h"

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

TDLinkedList *list_create(){
    TDLinkedList *list;

    list = malloc(sizeof(TDLinkedList));

    if(list != NULL){
        list->begin = NULL;
        list->end = NULL;
        list->size = 0;
    }
    return list;
}

int list_free(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *atual, *prox;

        atual = list->begin;

        while(atual != NULL){
            prox = atual->next;
            free(atual);
            atual = prox;
        }
        free(list);
        return SUCCESS;
    }
}

int list_push_front(TDLinkedList *list, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        DLNode *node;
        node = malloc(sizeof(TDLinkedList));

        if(node == NULL)
            return OUT_OF_MEMORY;

        else{
            //Caso padrao
            node->data = al;
            node->prev = NULL;
            node->next = list->begin;

            //Caso da lista vazia
            if(list->begin == NULL){
                list->begin = node;
                list->end = node;
                list->size++;
            }
            return SUCCESS;
        }
    }
}

int list_insert(TDLinkedList *list, int pos, struct aluno al){
    if(list == NULL)
        return INVALID_NULL_POINTER;
        
    if(pos < 1 || pos > list->size+1)
        return OUT_OF_RANGE;

    else{
        DLNode *node;
        node = malloc(sizeof(TDLinkedList));

        if(node == NULL)
            return OUT_OF_MEMORY;
        
        else{
            node->data = al;
            //Caso de lista vazia
            if(list->size == 0){
                node->prev = NULL;
                node->next = NULL;
                list->begin = node;
                list->end = node;
                list->size++;
            }
            //Caso para inserir na primeira posicao 
            else if(pos == 1){
                node->prev=NULL;
                node->next = list->begin;
                list->begin->prev = node;
                list->begin = node;
                list->size++;
            }
            //Caso padrao
            else{
                int contador=1;
                DLNode *aux;

                aux = list->begin;
                while(contador < pos-1){
                    aux = aux->next;
                    contador++;
                }
                node->prev = aux;
                node->next = aux->next;
                aux->next->prev = node;
                aux->next = node;
                list->size++;
            }
            return SUCCESS;
        }
    }
}

int list_print_forward(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        DLNode *aux;
        aux = list->begin;

        printf("\nImprimindo a Lista\n");
        while(aux != NULL){
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
            aux = aux->next;
        }
        return SUCCESS;
    }
}

int list_print_reverse(TDLinkedList *list){
    if(list == NULL)
        return INVALID_NULL_POINTER;

    else{
        DLNode *aux;
        aux = list->end;

        printf("\nImprimindo a Lista\n");
        while(aux != NULL){
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
            aux = aux->prev;
        }
        return SUCCESS;
    }
}
