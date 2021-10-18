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

char *infixa_posfixa(TStack *st){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else{
        int n,t,j=0,i;
        TStack *pilha;

        n = st->qtd;

        pilha = stack_create(n);
        stack_push(pilha, st->data[0]);

        for(i=1; st->data[i] != '\0'; i++){
            switch(st->data[i]){
                char x;
                case '(': stack_push(pilha, st->data[i]);
                        break;
                case ')':   stack_top(pilha, &x);
                            stack_pop(pilha);
                        while (x != '('){
                            pilha->data[j++] = x;
                            stack_top(pilha, &x);
                            stack_pop(pilha);
                        }
                        break;
                case '+':
                case '-':   stack_top(pilha, &x);
                            stack_pop(pilha);
                        while(x != '('){
                            pilha->data[j++] = x;
                            stack_top(pilha, &x);
                            stack_pop(pilha);
                        }
                        stack_push(pilha, x);
                        stack_push(pilha, st->data[i]);
                        break;
                case '*':
                case '/':   stack_top(pilha, &x);
                            stack_pop(pilha);
                        while(x != '(' && x != '+' && x != '-'){
                            pilha->data[j++] = x;
                            stack_top(pilha, &x);
                            stack_pop(pilha);
                        }
                        stack_push(pilha, x);
                        stack_push(pilha, st->data[i]);
                        break;
                default:    pilha->data[j++] = st->data[i];
            }
        }
        pilha->data[j] = '\0';
        return pilha;
    }
}

int calc_operation(TStack *st, int *res){
    if(st == NULL)
        return INVALID_NULL_POINTER;

    else{
        
    }
}