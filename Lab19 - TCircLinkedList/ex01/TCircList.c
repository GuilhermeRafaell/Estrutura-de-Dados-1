#include<stdlib.h>
#include<stdio.h>
#include"TCircList.h"

typedef struct CLNode CLNode;

struct CLNode{
    CLNode *next;
    aluno data;
};

struct CircList{
    CLNode *end;
};


CircList *list_create(){
    CircList *li;

    li = malloc(sizeof(CircList));

    if(li != NULL){
        li->end = NULL;
        return SUCCESS;
    }
    else
        return OUT_OF_MEMORY;
}

int list_free(CircList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    CLNode *aux, *prox;
    aux = li->end->next;//primeiro

    if(li->end == NULL)//caso de lista vazia 
        return SUCCESS;

    while(aux->next != li->end){
        prox = aux->next;
        free(aux);
        aux = prox;
    }
    free(li->end);
    free(li);
    return SUCCESS;
}

int list_push_front(CircList *li, aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    else{
        CLNode *node;
        node = malloc(sizeof(CLNode));

        if(node == NULL)
            return OUT_OF_MEMORY;

        if(li->end == NULL)//caso de lista vazia
            li->end = node;

        node->data = al;
        node->next = li->end->next;
        li->end->next = node;
        return SUCCESS;
    }
}

int list_push_back(CircList *li, aluno al){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    else{
        CLNode *node;
        node = malloc(sizeof(CLNode));

        if(node == NULL)
            return OUT_OF_MEMORY;

        if(li->end == NULL)
            li->end = node;

        node->data = al;
        node->next = li->end->next;
        li->end->next = node;
        li->end = node;
        return SUCCESS;
    }
}

int list_pop_front(CircList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    if(li->end == NULL)
        return ELEM_NOT_FOUND;

    else{
        CLNode *aux;
        aux = li->end->next;

        while(aux->next != li->end)
            aux = aux->next;

        aux = li->end->next;
        li->end->next = li->end->next->next;
        free(aux);

        return SUCCESS;
    }
}

int list_pop_back(CircList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    if(li->end == NULL)
        return ELEM_NOT_FOUND;

    else{
        CLNode *aux;
        aux = li->end->next;

        while(aux->next != li->end)
            aux = aux->next;

        aux = li->end->next;
        free(li->end);
        li->end = aux;
        return SUCCESS;
    }
}

int list_size(CircList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    else{
        CLNode *aux;
        int contador=0;

        if(li->end == NULL)
            return contador;

        aux = li->end;
        contador++;

        while(aux->next != li->end){
            contador++;
            aux = aux->next;
        }
        return contador;
    }
}

int list_find_mat(CircList *li, int mat, aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    if(mat < 0 || li->end == NULL)
        return ELEM_NOT_FOUND;

    else{
        CLNode *aux;
        int tam, contador=1;
        aux = li->end;

        tam - list_size(li);

        while(aux != li->end && aux->data.matricula != mat){
            aux = aux->next;
            contador++;
        }
        if(contador < tam)
            return ELEM_NOT_FOUND;

        else{
            *al = aux->data;
            return SUCCESS;
        }
    }
}

int list_get_pos(CircList *li, int mat, int *pos){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    if(mat < 0 || li->end == NULL)
        return ELEM_NOT_FOUND;

    else{
        CLNode *aux;
        int contador =1;

        aux = li->end;
        while(aux->next != li->end && aux->data.matricula != mat){
            aux = aux->next;
            contador++;
        }

        if(aux == li->end)
            return ELEM_NOT_FOUND;

        else{
            *pos = contador;
            return SUCCESS;
        }
    }
}

int list_front(CircList *li, aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    if(li->end == NULL)
        return ELEM_NOT_FOUND;

    else{
        *al = li->end->next->data;
        return SUCCESS;
    }
}

int list_back(CircList *li, aluno *al){
    if(li == NULL)
        return INVALID_NULL_POINTER;

    if(li->end == NULL)
        return ELEM_NOT_FOUND;

    else{
        *al = li->end->data;
        return SUCCESS;
    }
}

int list_print(CircList *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    
    CLNode *aux, *prox;
    aux = li->end;

    while(aux->next != li->end){
        aux = aux->next;
        printf("\n------------------\n");
        printf("Matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
    }
    printf("\n------------------\n");
    printf("Matricula: %d\n", li->end->data.matricula);
    printf("Nome: %s\n", li->end->data.nome);
    printf("Notas: %.1f; %.1f; %.1f;\n", li->end->data.n1, li->end->data.n2, li->end->data.n3);

    return SUCCESS;
}