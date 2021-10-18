#include <stdio.h>
#include "TStack.h"

int main(){
    int aux;
    char str[14] = "(A*(B+C)/D-E)";
    TStack *infixa;
    TStack *posfixa;

    //cria a pilha
    infixa = stack_create;

    for(int i=0; i<14; i++){
        //insere na pilha 
        stack_push(infixa, str[i]);
    }

    posfixa = infixa_posfixa(infixa);

    stack_free(infixa);
    stack_free(posfixa);

    return SUCCESS;
}