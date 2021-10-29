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
    CLNode *next;
};


CircList *list_lireat(){
    CircList *li;

    li = malloc(sizeof(CircList));

    if(li!=NULL){
        li->end = NULL;
        li->next=NULL;
    }
    return li;
}

int list_free(CircList *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *aux, *prox;
    aux = li->end->next;

    if(li->end==NULL){
        return SUCCESS;
    } 

    while(aux->next!=li->end){
        prox = aux->next;
        free(aux);
        aux = prox;
    }
    free(li->end);
    free(li->next);
    free(li);

    return SUCCESS;
}   

int list_push_front(CircList *li, aluno a){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *n;

    n = malloc(sizeof(CLNode));

    if(n==NULL){
        return OUT_OF_MEMORY;
    }
    if(li->end==NULL){
        li->end=n;
    }
    n->data = a;
    n->next = li->end->next;
    li->end->next=n;

    return SUCCESS;
}

int list_push_balik(CircList *li, aluno a){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *n;

    n = malloc(sizeof(CLNode));

    if(n==NULL){
        return OUT_OF_MEMORY;
    }
    if(li->end==NULL){
        li->end=n;
    }
    n->data = a;
    n->next = li->end->next;
    li->end->next = n;
    li->end = n;

    return SUCCESS;
}

int list_pop_front(CircList *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    if(li->end==NULL){
        return ELEM_NOT_FOUND;
    }
    CLNode *aux;

    aux = li->end->next;
    li->end->next = li->end->next->next;
    free(aux);

    return SUCCESS;
}

int list_pop_balik(CircList *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    if(li->end==NULL){
        return ELEM_NOT_FOUND;
    }
    CLNode *aux;
    
    aux = li->end->next;
    while(aux->next!=li->end){
        aux = aux->next;
    }
    aux = li->end->next;
    free(li->end);
    li->end = aux;

    return SUCCESS;
}

int list_size(CircList *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *aux;
    int contador=0;

    if(li->end==NULL){
        return contador;;
    }
    aux = li->end;
    contador++;
    while(aux->next!=li->end){
        contador++;
        aux = aux->next;
    }
    return contador;
}

 
int list_find_mat(CircList *li, int mat, aluno *a){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    if(mat<0 || li->end ==NULL){
        return ELEM_NOT_FOUND;
    }
    else{
        CLNode *aux;
        int tam, contador=1;
        aux = li->end->next;

        tam = list_size(li);

        while(aux!= li->end && aux->data.matricula != mat){
            aux=aux->next;
            contador++;
        }
        if(contador>tam)
            return ELEM_NOT_FOUND; 
        
        else{
            *a=aux->data;
            return SUCCESS;
            }  
            
    }

}

int list_get_pos(CircList *li, int mat, int *pos){
    if(li==NULL)
        return INVALID_NULL_POINTER;
    if(li->end==NULL){
        return ELEM_NOT_FOUND;
    }
    else{
        CLNode *aux;
        int contador=1;

        aux = li->end;
        while(aux->next!= li->end && aux->data.matricula != mat){
            contador++;
            aux=aux->next;
        }
        if(aux == li->end)
            return ELEM_NOT_FOUND; 
        
        else{
            *pos=contador;
            return SUCCESS;
        }  
    }
}

int list_front(CircList *li, aluno *a){
    if(li==NULL)
        return INVALID_NULL_POINTER;
    if(li->end==NULL){
        return ELEM_NOT_FOUND;
    }
    else{
        *a=li->end->next->data;
        return SUCCESS;
    }
     
}

int list_back(CircList *li, aluno *a){
    if(li==NULL)
        return INVALID_NULL_POINTER;
    if(li->end==NULL){
        return ELEM_NOT_FOUND;
    }
    else{
        *a=li->end->data;
        return SUCCESS;
    }
     
}

int list_print(CircList *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    CLNode *aux, *prox;
    aux = li->end;

    while(aux->next!=li->end){
        aux = aux->next;

        printf("\n------------------\n");
        printf("matricula: %d\n", aux->data.matricula);
        printf("Nome: %s\n", aux->data.nome);
        printf("Notas: %.1f; %.1f; %.1f;\n", aux->data.n1, aux->data.n2, aux->data.n3);
        
    }
    printf("\n------------------\n");
    printf("matricula: %d\n", li->end->data.matricula);
    printf("Nome: %s\n", li->end->data.nome);
    printf("Notas: %.1f; %.1f; %.1f;\n", li->end->data.n1, li->end->data.n2, li->end->data.n3);

    return SUCCESS;
}


int print_next(CircList *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    if(li->next==NULL){
        return ELEM_NOT_FOUND;
    }
    
    
    printf("\n------------------\n");
    printf("matricula: %d\n", li->next->data.matricula);
    printf("Nome: %s\n", li->next->data.nome);
    printf("Notas: %.1f; %.1f; %.1f;\n", li->next->data.n1, li->next->data.n2, li->next->data.n3);
    
    li->next=li->next->next;
    return SUCCESS;
}