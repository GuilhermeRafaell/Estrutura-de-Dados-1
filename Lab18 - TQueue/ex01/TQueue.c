#include <stdio.h>
#include <stdlib.h>
#include "TQueue.h"
#include "TLinkedList.h"

struct TQueue{
    int front;
    int rear;
    int size;
    struct aluno data[MAX];
};

TQueue *queue_create(){
    TQueue *fi;
    fi = (TQueue*)malloc(sizeof(struct TQueue));
    if(fi != NULL){
        fi->front = 0;
        fi->rear = 0;
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

    else if(queue_full(fi))
        return OUT_OF_MEMORY;

    else{
        fi->rear = (fi->rear+1)%MAX;
        fi->data[fi->rear] = al;
        return SUCCESS;
    }
}

int queue_pop(TQueue *fi){
    if(fi == NULL || queue_empty(fi))
        return INVALID_NULL_POINTER;

    else{
        fi->front = (fi->front+1)%MAX;
        return SUCCESS;
    }
}

int queue_top(TQueue *fi, struct aluno *al){
    if(fi == NULL || queue_empty(fi))
        return INVALID_NULL_POINTER;

    else{
        int pos = (fi->front+1)%MAX;
        *al = fi->data[pos];
        return SUCCESS;
    }
}

int queue_size(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    fi->size = abs(fi->rear - fi->front);
    return fi->size;
}

int queue_empty(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else{
        return (fi->front == fi->rear);
    }
}

int queue_full(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else if(fi->front == (fi->rear+1)%MAX)
        return SUCCESS;

    else{
        return 0;
    }
}

int queue_print(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;

    else{
        int i = fi->front;
        while(i != fi->rear){
            i = (i+1) % MAX;
            printf("\n-------------------\n");
            printf("Matricula: %d\n", fi->data[i].matricula);
            printf("Nome: %s\n", fi->data[i].nome);
            printf("Notas: %f; %f; %f;\n", fi->data[i].n1,
                                           fi->data[i].n2,
                                           fi->data[i].n3);
        }
        printf("\nFim da Fila \n");
        return SUCCESS;
    }
}