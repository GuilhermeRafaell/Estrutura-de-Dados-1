#include <stdio.h>
#include <stdlib.h>
#include "TQueue.h"


typedef struct Qnode Qnode;

struct TQueue{
    Qnode *begin;
    Qnode *end;
    int size;
};

struct Qnode{
    struct aluno data;
    Qnode *next;
};

TQueue *queue_create(){
    TQueue *fi;
    fi = (TQueue*)malloc(sizeof(TQueue));

    if(fi != NULL){
        fi->begin = NULL;
        fi->end = NULL;
        fi->size = 0;
    }
    return fi;
}

int queue_free(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        free(fi);
        return SUCCESS;
    }
}

int queue_push(TQueue *fi, struct aluno al){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else{
        Qnode *node;

        node = malloc(sizeof(Qnode));

        if(node == NULL)
            return OUT_OF_MEMORY;

        node->data = al;
        node->next = NULL;

        if(fi->size == 0){
            fi->begin = node;
            fi->end = node;
            fi->size++;
        }
        else{
            fi->end->next = node;
            fi->end = node;
            fi->size++;
        }
        return SUCCESS;
    }
}

int queue_pop(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else if(fi->size == 0)
        return ELEM_NOT_FOUND;

    else{
        Qnode *aux;

        aux = fi->begin;
        fi->begin = fi->begin->next;
        free(aux);
        return SUCCESS;
    }
}

int queue_top(TQueue *fi, struct aluno *al){
    if(fi == NULL )
        return INVALID_NULL_POINTER;

    else if(fi->size == 0)
        return ELEM_NOT_FOUND;

    else{
        *al = fi->begin->data;
        return SUCCESS;
    }
}

int queue_size(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else{
        Qnode *aux;
        int qtd;
        aux = fi->begin;

        while(aux->next != NULL)
            qtd++;

        fi->size = qtd;
        return fi->size;
    }

}


int queue_print(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else if(fi->size == 0)
        return ELEM_NOT_FOUND;

    else{
        Qnode *aux;
        aux = fi->begin;

        printf("\n-------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
        
        return SUCCESS;
    }
}