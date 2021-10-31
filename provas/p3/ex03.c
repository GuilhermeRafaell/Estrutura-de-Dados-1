#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
/*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba

*/

int main(){
    int num=4;// para nao incluir '/0'
    TStack *t, *n;

    t = stack_create; // cria a pilha// check:<<<erro: cade ()>>>>
    n = stack_create; // cria a pilha invertida

    // check:<<<erro: cade a string para leitura?>>>>

    for(int i=0; i<6; i++){
        stack_push(t, t->data[i]); //insere na pilha// check:<<<erro: quem é t->data?>>>>
    }

    for(int i=0; i<6; i++){
        n->data[i] = t->data[num];
        num--;
    }

    
    printf("\nNova string formada utilizando pilha: ");
    for(int i=0; i<6; i++){
        printf("%c\n",n->data[i]);
    }

    stack_free(t);

    return SUCCESS;
}


typedef struct TStack TStack;

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
