#include<stdlib.h>
#include"TQueue.h"

struct  TQueue{
    int front;
    int rear;
    int qt;
    int sizeI;
    int sizeC;
    aluno *data;
};

TQueue *queue_create(int n){
    TQueue *fi;
    fi = malloc (sizeof(TQueue));

    if(fi!=NULL){
        fi->front = 0;
        fi->rear = 0;
        fi->qt=0;
        fi->sizeI = n;
        fi->sizeC = n;
        fi->data = malloc(n*sizeof(aluno));
    }
    return fi;
}


int queue_free(TQueue *fi){
    if(fi==NULL)
        return INVALID_NULL_POINTER;
    
    else{
        free(fi->data);
        free(fi);

        return SUCCESS;
    }
}


int queue_increase(TQueue *fi){
    if(fi==NULL)
        return INVALID_NULL_POINTER;
    
    else{
        fi->data = realloc(fi->data, (fi->sizeC+fi->sizeI)*sizeof(aluno));
        fi->sizeI += fi->sizeI;

        return SUCCESS;
    }
}

int queue_compact(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        int comp;

        comp = ceil((fi->qt)/(float)fi->sizeI)*fi->sizeI;
        fi->data = realloc(fi->data, comp*sizeof(aluno));
        fi->sizeC = comp;

        return SUCCESS;
    }
}


int queue_push(TQueue *fi, aluno al){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    
    else{
        if(fi->qt == fi->sizeC)
            queue_increase(fi);
        
        fi->data[fi->rear]=al;
        fi->rear=(fi->rear+1)%fi->sizeC;
        fi->qt++;

        return SUCCESS;
    }
}

int queue_pop(TQueue *fi){
    if(fi==NULL)
        return INVALID_NULL_POINTER;
    
    if(fi->qt==0)
        return ELEM_NOT_FOUND;
    
    else{
        fi->front=(fi->front+1)%fi->sizeC;
        fi->qt--;

        return SUCCESS;
    }
}

int queue_top(TQueue *fi, struct aluno *al){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    
    if(fi->rear == 0)
        return ELEM_NOT_FOUND;
    
    else{
        *al = fi->data[fi->front];

        return SUCCESS;
    }
}

int queue_empty(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    
    else
        return (fi->qt==0);
    
}

int queue_full(TQueue *fi){
        if(fi == NULL)
            return INVALID_NULL_POINTER;

        else 
            return (fi->qt == fi->sizeC);
    }


int queue_print(TQueue *fi){
    if(fi == NULL)
        return INVALID_NULL_POINTER;
    
    if(fi->qt == 0)
        return ELEM_NOT_FOUND;
    
    else{
        printf("-------------------------------\n"); 
        printf("Matricula: %d\n", fi->data[fi->front].matricula);
        printf("Nome: %s\n", fi->data[fi->front].nome);
        printf("Notas: %.1f %.1f %.1f\n", fi->data[fi->front].n1, fi->data[fi->front].n2, fi->data[fi->front].n3);

        return SUCCESS; 
    }
} 