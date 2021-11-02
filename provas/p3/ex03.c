#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TStack.h"
/*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba

*/

int main(){
    int k=0,i=0,num = 100;
    char string[num],c;

    TStack *st;
    st = stack_create(num);

    printf("<< Revertendo uma String >>");
    printf("\n\nEscreva uma palavra: ");
    scanf("%s", string);

    while(string[i] != '\0'){
        stack_push(st, string[i]);
        i++;
    }

    printf("\nPalavra Invertida: ");
    while (stack_empty(st) != 0){
        stack_top(st, &c);
        printf("%c",c);
        stack_pop(st);
    }
    printf("\n");
    free(st);
    return 0;
}