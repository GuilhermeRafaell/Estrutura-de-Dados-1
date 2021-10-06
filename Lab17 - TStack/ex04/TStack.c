#include <stdio.h>
#include <stdlib.h>
#include "TStack.h"

struct TStack{
    char *data;
    int qtd, max;
};

TStack *stack_create(int n){
    TStack *st;

    st = malloc(sizeof(TStack));

    if(st != NULL){
        st->data = malloc(n*sizeof(char));
        st->qtd = 0;
        st->max = n;

        return st;
    }
}

int stack_free(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else{
        free(st->data);
        free(st);

        return SUCCESS;
    }
}

int stack_push(TStack *st, char c){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else if(st->qtd == st->max)
        return OUT_OF_MEMORY;

    else{
        st->data[st->qtd] = c;
        st->qtd++;

        return SUCCESS;
    }
}

int stack_pop(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;
    
    else if(st->qtd == 0)
        return SUCCESS;

    else{
        st->qtd--;
        return SUCCESS;
    }
}

int stack_top(TStack *st, char *c){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else if(st->qtd == 0)
        return ELEM_NOT_FOUND;

    else{
        *c = st->data[st->qtd-1];
        return SUCCESS;
    }
}

int stack_empty(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else{
        return (st->qtd == 0);
    }
}

int stack_print(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else if(st->qtd == 0)
        return ELEM_NOT_FOUND;

    else{
        printf("%c\n", st->data[st->qtd-1]);
        return SUCCESS;
    }
}

int well_made(TStack *st){
    int i;
    char c;
    for(i=0; st->data[i] != '\0'; i++){
        switch(st->data[i]){
            case ')': if(stack_empty(st)) return 0;
                    c = stack_pop(st);
                    if(c != '(') return 0;
                    break;
            case ']': if(stack_empty(st)) return 0;
                    c = stack_pop(st);
                    if(c != '[') return 0;
                    break;
            default: stack_push(st, st->data[i]);
        }
    }
    return stack_empty(st);
}